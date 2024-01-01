/*
 * Copyright (c) 2023 Nuvoton Technology Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/devicetree.h>
#include <zephyr/drivers/clock_control/clock_control_numaker.h>
/* Hardware and starter kit includes. */
#include <NuMicro.h>

void z_arm_platform_init(void)
{

    PF6 = 1;
    GPIO_SetMode(PF, BIT6, GPIO_MODE_OUTPUT);   // PF6 - LED

	SystemInit();

	/* Unlock protected registers */
	SYS_UnlockReg();

	/*
	 * -------------------
	 * Init System Clock
	 * -------------------
	 */

#if DT_NODE_HAS_PROP(DT_NODELABEL(scc), hxt)
	/* Enable/disable 4~24 MHz external crystal oscillator (HXT) */
	if (DT_ENUM_IDX(DT_NODELABEL(scc), hxt) == NUMAKER_SCC_CLKSW_ENABLE) {
		CLK_EnableXtalRC(CLK_PWRCTL_HXTEN_Msk);
		/* Wait for HXT clock ready */
		CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);
	} else if (DT_ENUM_IDX(DT_NODELABEL(scc), hxt) == NUMAKER_SCC_CLKSW_DISABLE) {
		CLK_DisableXtalRC(CLK_PWRCTL_HXTEN_Msk);
	}
#endif

#if DT_NODE_HAS_PROP(DT_NODELABEL(scc), lxt)
	/* Enable/disable 32.768 kHz low-speed external crystal oscillator (LXT) */
	if (DT_ENUM_IDX(DT_NODELABEL(scc), lxt) == NUMAKER_SCC_CLKSW_ENABLE) {
		CLK_EnableXtalRC(CLK_PWRCTL_LXTEN_Msk);
		/* Wait for LXT clock ready */
		CLK_WaitClockReady(CLK_STATUS_LXTSTB_Msk);
	} else if (DT_ENUM_IDX(DT_NODELABEL(scc), lxt) == NUMAKER_SCC_CLKSW_DISABLE) {
		CLK_DisableXtalRC(CLK_PWRCTL_LXTEN_Msk);
	}
#endif

	/* Enable 12 MHz high-speed internal RC oscillator (HIRC) */
	CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk);
	/* Wait for HIRC clock ready */
	CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

	/* Enable 10 KHz low-speed internal RC oscillator (LIRC) */
	CLK_EnableXtalRC(CLK_PWRCTL_LIRCEN_Msk);
	/* Wait for LIRC clock ready */
	CLK_WaitClockReady(CLK_STATUS_LIRCSTB_Msk);

#if DT_NODE_HAS_PROP(DT_NODELABEL(scc), hirc48)
	/* Enable/disable 48 MHz high-speed internal RC oscillator (HIRC48) */
	if (DT_ENUM_IDX(DT_NODELABEL(scc), hirc48) == NUMAKER_SCC_CLKSW_ENABLE) {
		CLK_EnableXtalRC(CLK_PWRCTL_HIRC48EN_Msk);
		/* Wait for HIRC48 clock ready */
		CLK_WaitClockReady(CLK_STATUS_HIRC48STB_Msk);
	} else if (DT_ENUM_IDX(DT_NODELABEL(scc), hirc48) == NUMAKER_SCC_CLKSW_DISABLE) {
		CLK_DisableXtalRC(CLK_PWRCTL_HIRC48EN_Msk);
	}
#endif

#if DT_NODE_HAS_PROP(DT_NODELABEL(scc), clk_pclkdiv)
	/* Set CLK_PCLKDIV register on request */
	CLK->CLKDIV0 = DT_PROP(DT_NODELABEL(scc), clk_pclkdiv);
#endif

#if DT_NODE_HAS_PROP(DT_NODELABEL(scc), core_clock)
	/* Set core clock (HCLK) on request */
	CLK_SetCoreClock(DT_PROP(DT_NODELABEL(scc), core_clock));
#endif

	/*
	 * Update System Core Clock
	 * User can use SystemCoreClockUpdate() to calculate SystemCoreClock.
	 */
	SystemCoreClockUpdate();

	/* Lock protected registers */
	SYS_LockReg();
}

static volatile int32_t g_ICE_Conneced = 1;

/**
 * @brief    This function is called by Hardfault handler.
 * @param    None
 * @returns  None
 * @details  This function is called by Hardfault handler and check if it is caused by __BKPT or not.
 *
 */

uint32_t ProcessHardFault(uint32_t lr, uint32_t msp, uint32_t psp)
{
    uint32_t *sp = NULL;
    uint32_t inst;

    /* Check the used stack */
    if(lr & 0x40)
    {
        /* Secure stack used */
        if(lr & 4)
            sp = (uint32_t *)psp;
        else
            sp = (uint32_t *)msp;

    }
#if defined (__ARM_FEATURE_CMSE) &&  (__ARM_FEATURE_CMSE == 3U)
    else
    {
        /* Non-secure stack used */
        if(lr & 4)
            sp = (uint32_t *)__TZ_get_PSP_NS();
        else
            sp = (uint32_t *)__TZ_get_MSP_NS();

    }
#endif

    /* Get the instruction caused the hardfault */
    if( sp != NULL )
        inst = M16(sp[6]);


    if(inst == 0xBEAB)
    {
        /*
            If the instruction is 0xBEAB, it means it is caused by BKPT without ICE connected.
            We still return for output/input message to UART.
        */
        g_ICE_Conneced = 0; // Set a flag for ICE offline
        sp[6] += 2; // return to next instruction
        return lr;  // Keep lr in R0
    }

    /* It is casued by hardfault (Not semihost). Just process the hard fault here. */
    /* TODO: Implement your hardfault handle code here */

    /*
    printf("  HardFault!\n\n");
    printf("r0  = 0x%x\n", sp[0]);
    printf("r1  = 0x%x\n", sp[1]);
    printf("r2  = 0x%x\n", sp[2]);
    printf("r3  = 0x%x\n", sp[3]);
    printf("r12 = 0x%x\n", sp[4]);
    printf("lr  = 0x%x\n", sp[5]);
    printf("pc  = 0x%x\n", sp[6]);
    printf("psr = 0x%x\n", sp[7]);
    */

    while(1) {}

}


/**
 *
 * @brief      The function to process semihosted command
 * @param[in]  n32In_R0  : semihost register 0
 * @param[in]  n32In_R1  : semihost register 1
 * @param[out] pn32Out_R0: semihost register 0
 * @retval     0: No ICE debug
 * @retval     1: ICE debug
 *
 */

int32_t SH_Return(int32_t n32In_R0, int32_t n32In_R1, int32_t *pn32Out_R0)
{
    (void)n32In_R1;

    if(g_ICE_Conneced)
    {
        if(pn32Out_R0)
            *pn32Out_R0 = n32In_R0;

        return 1;
    }
    return 0;
}
