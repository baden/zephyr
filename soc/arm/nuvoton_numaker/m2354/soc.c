/*
 * Copyright (c) 2023 Nuvoton Technology Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/devicetree.h>
#include <zephyr/drivers/clock_control/clock_control_numaker.h>
/* Hardware and starter kit includes. */
#include <NuMicro.h>

#if 0
void SYS_Init(void)
{

    /* Set PF multi-function pins for XT1_OUT(PF.2) and XT1_IN(PF.3) */
    SYS->GPF_MFPL = (SYS->GPF_MFPL & (~SYS_GPF_MFPL_PF2MFP_Msk)) | SYS_GPF_MFPL_PF2MFP_XT1_OUT;
    SYS->GPF_MFPL = (SYS->GPF_MFPL & (~SYS_GPF_MFPL_PF3MFP_Msk)) | SYS_GPF_MFPL_PF3MFP_XT1_IN;

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Enable HIRC and HXT clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk | CLK_PWRCTL_HXTEN_Msk);

    /* Wait for HIRC and HXT clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk | CLK_STATUS_HXTSTB_Msk);

    /* Set core clock to 96MHz */
    CLK_SetCoreClock(96000000);

    /* Enable UART0 module clock */
//     CLK_EnableModuleClock(UART0_MODULE);

    /* Select UART0 module clock source as HXT and UART module clock divider as 1 */
//     CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL2_UART0SEL_HXT, CLK_CLKDIV0_UART0(1));

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Set multi-function pins for UART0 RXD and TXD */
//     SYS->GPA_MFPL = (SYS->GPA_MFPL & (~(UART0_RXD_PA6_Msk | UART0_TXD_PA7_Msk))) | UART0_RXD_PA6 | UART0_TXD_PA7;
}
#endif

#define __HXT         (12000000UL)  /*!< High Speed External Crystal Clock Frequency */

void SYS_Init(void)
{

    /* Enable HIRC clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk);

    /* Wait for HIRC clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    /* Set core clock to 96MHz */
    CLK_SetCoreClock(96000000);

    /* Enable UART0 module clock */
    CLK_EnableModuleClock(UART3_MODULE);

    /* Select UART0 module clock source as HIRC and UART0 module clock divider as 1 */
    CLK_SetModuleClock(UART3_MODULE, CLK_CLKSEL2_UART3SEL_HIRC, CLK_CLKDIV4_UART3(1));

    /* Enable EPWM0 module clock */
    CLK_EnableModuleClock(EPWM0_MODULE);

    /* Select EPWM0 module clock source */
    CLK_SetModuleClock(EPWM0_MODULE, CLK_CLKSEL2_EPWM0SEL_PCLK0, 0);

    SystemCoreClockUpdate();

    /* Enable IP clock */
//     CLK_EnableModuleClock(FMCIDLE_MODULE);
    CLK_EnableModuleClock(GPF_MODULE);
    CLK_EnableModuleClock(SRAM0_MODULE);
    CLK_EnableModuleClock(SRAM1_MODULE);
    CLK_EnableModuleClock(SRAM2_MODULE);
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_EnableModuleClock(TMR1_MODULE);
    CLK_EnableSysTick(CLK_CLKSEL0_STCLKSEL_HCLK_DIV2, 0);


    /* Set IP clock */
//     CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_PCLK0, MODULE_NoMsk);
//     CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1SEL_PCLK0, MODULE_NoMsk);

    SYS->GPC_MFPL = (SYS->GPC_MFPL & (~(UART3_RXD_PC2_Msk | UART3_TXD_PC3_Msk))) | UART3_RXD_PC2 | UART3_TXD_PC3;
}

#if 0

void SYS_Init(void)
{

#if 0
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Enable HIRC clock */
    CLK_EnableXtalRC(CLK_PWRCTL_HIRCEN_Msk);

    /* Wait for HIRC clock ready */
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    /* Set core clock to PLL_CLOCK */
    CLK_SetCoreClock(PLL_CLOCK);

    // /* Enable UART0 module clock */
    // CLK_EnableModuleClock(UART0_MODULE);

#endif

#if 0
/********************
    MCU:M2354SJFAE(LQFP64)
    Base Clocks:
    LIRC:10kHz
    HIRC:12MHz
    HCLK:12MHz
    PCLK0:12MHz
    PCLK1:12MHz
    Enabled-Module Frequencies:
    EWDT=Bus Clock(PCLK0):12MHz/Engine Clock:10kHz
    EWWDT=Bus Clock(PCLK0):12MHz/Engine Clock:5.8594kHz
    FMCIDLE=Bus Clock(HCLK):12MHz/Engine Clock:12MHz
    SRAM0=Bus Clock(HCLK):12MHz
    TMR0=Bus Clock(PCLK0):12MHz/Engine Clock:12MHz
    UART3=Bus Clock(PCLK1):12MHz/Engine Clock:12MHz
    WDT=Bus Clock(PCLK0):12MHz/Engine Clock:10kHz
    WWDT=Bus Clock(PCLK0):12MHz/Engine Clock:5.8594kHz
********************/
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/
    //RTC->LXTCTL   = (RTC->LXTCTL   & ~(0x000000C1UL)) | 0x0000000EUL;
    //CLK->PWRCTL   = (CLK->PWRCTL   & ~(0x0034000FUL)) | 0x0000000CUL;
    //CLK->PLLCTL   = (CLK->PLLCTL   & ~(0x000BFFFFUL)) | 0x0009440AUL;
    //CLK->CLKDIV0  = (CLK->CLKDIV0  & ~(0xFFFFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV1  = (CLK->CLKDIV1  & ~(0x00FFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV4  = (CLK->CLKDIV4  & ~(0x0000FFFFUL)) | 0x00000000UL;
    //CLK->CLKSEL0  = (CLK->CLKSEL0  & ~(0x0030013FUL)) | 0x0020011FUL;
    //CLK->CLKSEL1  = (CLK->CLKSEL1  & ~(0xF07777FFUL)) | 0xA02222B3UL;
    //CLK->CLKSEL2  = (CLK->CLKSEL2  & ~(0x77773FFFUL)) | 0x44442BABUL;
    //CLK->CLKSEL3  = (CLK->CLKSEL3  & ~(0x7703773FUL)) | 0x4402222AUL;
    //CLK->AHBCLK   = (CLK->AHBCLK   & ~(0xFF71F0DFUL)) | 0x00108000UL;
    //CLK->APBCLK0  = (CLK->APBCLK0  & ~(0xBD7FF7FFUL)) | 0x80080005UL;
    //CLK->APBCLK1  = (CLK->APBCLK1  & ~(0x1FCF1377UL)) | 0x00000000UL;
    //CLK->CLKOCTL  = (CLK->CLKOCTL  & ~(0x0000007FUL)) | 0x00000000UL;
    //SysTick->CTRL = (SysTick->CTRL & ~(0x00000005UL)) | 0x00000000UL;

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* If the macros do not exist in your project, please refer to the related clk.h in Header folder of the tool package */
    /* Enable clock source */
    CLK_EnableXtalRC(CLK_PWRCTL_LIRCEN_Msk|CLK_PWRCTL_HIRCEN_Msk);

    /* Waiting for clock source ready */
    CLK_WaitClockReady(CLK_STATUS_LIRCSTB_Msk|CLK_STATUS_HIRCSTB_Msk);

    /* Set HCLK clock */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC, CLK_CLKDIV0_HCLK(1));

    /* Enable IP clock */
    CLK_EnableModuleClock(EWDT_MODULE);
    CLK_EnableModuleClock(EWWDT_MODULE);
    CLK_EnableModuleClock(FMCIDLE_MODULE);
    CLK_EnableModuleClock(SRAM0_MODULE);
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_EnableModuleClock(TMR1_MODULE);
    CLK_EnableModuleClock(UART3_MODULE);
    CLK_EnableModuleClock(WDT_MODULE);
    CLK_EnableModuleClock(WWDT_MODULE);

    /* Set IP clock */
    CLK_SetModuleClock(EWDT_MODULE, CLK_CLKSEL1_EWDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(EWWDT_MODULE, CLK_CLKSEL1_EWWDTSEL_HCLK_DIV2048, MODULE_NoMsk);
    CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(UART3_MODULE, CLK_CLKSEL2_UART3SEL_PCLK1, CLK_CLKDIV4_UART3(1));
    CLK_SetModuleClock(WDT_MODULE, CLK_CLKSEL1_WDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(WWDT_MODULE, CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048, MODULE_NoMsk);

    /* Update System Core Clock */
    /* User can use SystemCoreClockUpdate() to calculate SystemCoreClock. */
    SystemCoreClockUpdate();

#endif

#if 0
/********************
MCU:M2354SJFAE(LQFP64)
Base Clocks:
    LIRC:10kHz
    HIRC:12MHz
    HCLK:4MHz
    PCLK0:4MHz
    PCLK1:4MHz
    Enabled-Module Frequencies:
    EWDT=Bus Clock(PCLK0):4MHz/Engine Clock:10kHz
    EWWDT=Bus Clock(PCLK0):4MHz/Engine Clock:1.9531kHz
    FMCIDLE=Bus Clock(HCLK):4MHz/Engine Clock:12MHz
    SRAM0=Bus Clock(HCLK):4MHz
    TMR0=Bus Clock(PCLK0):4MHz/Engine Clock:4MHz
    UART3=Bus Clock(PCLK1):4MHz/Engine Clock:12MHz
    WDT=Bus Clock(PCLK0):4MHz/Engine Clock:10kHz
    WWDT=Bus Clock(PCLK0):4MHz/Engine Clock:1.9531kHz
********************/
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/
    //RTC->LXTCTL   = (RTC->LXTCTL   & ~(0x000000C1UL)) | 0x0000000EUL;
    //CLK->PWRCTL   = (CLK->PWRCTL   & ~(0x0034000FUL)) | 0x0000000CUL;
    //CLK->PLLCTL   = (CLK->PLLCTL   & ~(0x000BFFFFUL)) | 0x0009440AUL;
    //CLK->CLKDIV0  = (CLK->CLKDIV0  & ~(0xFFFFFFFFUL)) | 0x00000002UL;
    //CLK->CLKDIV1  = (CLK->CLKDIV1  & ~(0x00FFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV4  = (CLK->CLKDIV4  & ~(0x0000FFFFUL)) | 0x00000000UL;
    //CLK->CLKSEL0  = (CLK->CLKSEL0  & ~(0x0030013FUL)) | 0x0020011FUL;
    //CLK->CLKSEL1  = (CLK->CLKSEL1  & ~(0xF07777FFUL)) | 0xA02222B3UL;
    //CLK->CLKSEL2  = (CLK->CLKSEL2  & ~(0x77773FFFUL)) | 0x34442BABUL;
    //CLK->CLKSEL3  = (CLK->CLKSEL3  & ~(0x7703773FUL)) | 0x4402222AUL;
    //CLK->AHBCLK   = (CLK->AHBCLK   & ~(0xFF71F0DFUL)) | 0x00108000UL;
    //CLK->APBCLK0  = (CLK->APBCLK0  & ~(0xBD7FF7FFUL)) | 0x80080005UL;
    //CLK->APBCLK1  = (CLK->APBCLK1  & ~(0x1FCF1377UL)) | 0x00000000UL;
    //CLK->CLKOCTL  = (CLK->CLKOCTL  & ~(0x0000007FUL)) | 0x00000000UL;
    //SysTick->CTRL = (SysTick->CTRL & ~(0x00000005UL)) | 0x00000000UL;

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* If the macros do not exist in your project, please refer to the related clk.h in Header folder of the tool package */
    /* Enable clock source */
    CLK_EnableXtalRC(CLK_PWRCTL_LIRCEN_Msk|CLK_PWRCTL_HIRCEN_Msk);

    /* Waiting for clock source ready */
    CLK_WaitClockReady(CLK_STATUS_LIRCSTB_Msk|CLK_STATUS_HIRCSTB_Msk);

    /* Set HCLK clock */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC, CLK_CLKDIV0_HCLK(3));

    /* Enable IP clock */
    CLK_EnableModuleClock(EWDT_MODULE);
    CLK_EnableModuleClock(EWWDT_MODULE);
    CLK_EnableModuleClock(FMCIDLE_MODULE);
    CLK_EnableModuleClock(SRAM0_MODULE);
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_EnableModuleClock(TMR1_MODULE);
    CLK_EnableModuleClock(UART3_MODULE);
    CLK_EnableModuleClock(WDT_MODULE);
    CLK_EnableModuleClock(WWDT_MODULE);

    /* Set IP clock */
    CLK_SetModuleClock(EWDT_MODULE, CLK_CLKSEL1_EWDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(EWWDT_MODULE, CLK_CLKSEL1_EWWDTSEL_HCLK_DIV2048, MODULE_NoMsk);
    CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(UART3_MODULE, CLK_CLKSEL2_UART3SEL_HIRC, CLK_CLKDIV4_UART3(1));
    CLK_SetModuleClock(WDT_MODULE, CLK_CLKSEL1_WDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(WWDT_MODULE, CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048, MODULE_NoMsk);


    /* Update System Core Clock */
    /* User can use SystemCoreClockUpdate() to calculate SystemCoreClock. */
    SystemCoreClockUpdate();
#endif

#if 1
/********************
MCU:M2354SJFAE(LQFP64)
Base Clocks:
LIRC:10kHz
HIRC:12MHz
HCLK:1MHz
PCLK0:1MHz
PCLK1:1MHz
Enabled-Module Frequencies:
EWDT=Bus Clock(PCLK0):1MHz/Engine Clock:10kHz
EWWDT=Bus Clock(PCLK0):1MHz/Engine Clock:488.2813Hz
FMCIDLE=Bus Clock(HCLK):1MHz/Engine Clock:12MHz
SRAM0=Bus Clock(HCLK):1MHz
SYSTICK=Bus Clock(HCLK):1MHz/Engine Clock:1MHz
TMR0=Bus Clock(PCLK0):1MHz/Engine Clock:1MHz
TMR1=Bus Clock(PCLK0):1MHz/Engine Clock:1MHz
UART3=Bus Clock(PCLK1):1MHz/Engine Clock:12MHz
WDT=Bus Clock(PCLK0):1MHz/Engine Clock:10kHz
WWDT=Bus Clock(PCLK0):1MHz/Engine Clock:488.2813Hz
********************/

    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/
    //RTC->LXTCTL   = (RTC->LXTCTL   & ~(0x000000C1UL)) | 0x0000000EUL;
    //CLK->PWRCTL   = (CLK->PWRCTL   & ~(0x0034000FUL)) | 0x0000000CUL;
    //CLK->PLLCTL   = (CLK->PLLCTL   & ~(0x000BFFFFUL)) | 0x0009440AUL;
    //CLK->CLKDIV0  = (CLK->CLKDIV0  & ~(0xFFFFFFFFUL)) | 0x0000000BUL;
    //CLK->CLKDIV1  = (CLK->CLKDIV1  & ~(0x00FFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV4  = (CLK->CLKDIV4  & ~(0x0000FFFFUL)) | 0x00000000UL;
    //CLK->CLKSEL0  = (CLK->CLKSEL0  & ~(0x0030013FUL)) | 0x0020011FUL;
    //CLK->CLKSEL1  = (CLK->CLKSEL1  & ~(0xF07777FFUL)) | 0xA02222B3UL;
    //CLK->CLKSEL2  = (CLK->CLKSEL2  & ~(0x77773FFFUL)) | 0x34442BABUL;
    //CLK->CLKSEL3  = (CLK->CLKSEL3  & ~(0x7703773FUL)) | 0x4402222AUL;
    //CLK->AHBCLK   = (CLK->AHBCLK   & ~(0xFF71F0DFUL)) | 0x00108000UL;
    //CLK->APBCLK0  = (CLK->APBCLK0  & ~(0xBD7FF7FFUL)) | 0x8008000DUL;
    //CLK->APBCLK1  = (CLK->APBCLK1  & ~(0x1FCF1377UL)) | 0x00000000UL;
    //CLK->CLKOCTL  = (CLK->CLKOCTL  & ~(0x0000007FUL)) | 0x00000000UL;
    //SysTick->CTRL = (SysTick->CTRL & ~(0x00000005UL)) | 0x00000005UL;

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* If the macros do not exist in your project, please refer to the related clk.h in Header folder of the tool package */
    /* Enable clock source */
    CLK_EnableXtalRC(CLK_PWRCTL_LIRCEN_Msk|CLK_PWRCTL_HIRCEN_Msk);

    /* Waiting for clock source ready */
    CLK_WaitClockReady(CLK_STATUS_LIRCSTB_Msk|CLK_STATUS_HIRCSTB_Msk);

    /* Set HCLK clock */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_HIRC, CLK_CLKDIV0_HCLK(12));

    /* Enable IP clock */
    CLK_EnableModuleClock(EWDT_MODULE);
    CLK_EnableModuleClock(EWWDT_MODULE);
    CLK_EnableModuleClock(FMCIDLE_MODULE);
    CLK_EnableModuleClock(SRAM0_MODULE);
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_EnableModuleClock(TMR1_MODULE);
    CLK_EnableModuleClock(UART3_MODULE);
    CLK_EnableModuleClock(WDT_MODULE);
    CLK_EnableModuleClock(WWDT_MODULE);
    CLK_EnableSysTick(CLK_CLKSEL0_STCLKSEL_HCLK, 0);

    /* Set IP clock */
    CLK_SetModuleClock(EWDT_MODULE, CLK_CLKSEL1_EWDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(EWWDT_MODULE, CLK_CLKSEL1_EWWDTSEL_HCLK_DIV2048, MODULE_NoMsk);
    CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1SEL_PCLK0, MODULE_NoMsk);
    CLK_SetModuleClock(UART3_MODULE, CLK_CLKSEL2_UART3SEL_HIRC, CLK_CLKDIV4_UART3(1));
    CLK_SetModuleClock(WDT_MODULE, CLK_CLKSEL1_WDTSEL_LIRC, MODULE_NoMsk);
    CLK_SetModuleClock(WWDT_MODULE, CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048, MODULE_NoMsk);

    /* Update System Core Clock */
    /* User can use SystemCoreClockUpdate() to calculate SystemCoreClock. */
    SystemCoreClockUpdate();
#endif



#if 0
    /* Enable UART3 (GPS але зараз це putty) module clock */
    CLK_EnableModuleClock(UART3_MODULE);

    // /* Select UART0 module clock source as HIRC and UART0 module clock divider as 1 */
    // CLK_SetModuleClock(UART0_MODULE, CLK_CLKSEL2_UART0SEL_HIRC, CLK_CLKDIV0_UART0(1));

    CLK_SetModuleClock(UART3_MODULE, CLK_CLKSEL2_UART3SEL_HIRC, CLK_CLKDIV4_UART3(1));
#endif
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init I/O Multi-function                                                                                 */
    /*---------------------------------------------------------------------------------------------------------*/

    /* Set multi-function pins for UART0 RXD and TXD */
    // SYS->GPF_MFPL = (SYS->GPF_MFPL & (~(UART0_RXD_PF1_Msk | UART0_TXD_PF0_Msk))) | UART0_RXD_PF1 | UART0_TXD_PF0;

    SYS->GPC_MFPL = (SYS->GPC_MFPL & (~(UART3_RXD_PC2_Msk | UART3_TXD_PC3_Msk))) | UART3_RXD_PC2 | UART3_TXD_PC3;

    /* Set PB multi-function pin for EINT0(PB.14) and EINT1(PB.13) */
    SYS->GPB_MFPL = (SYS->GPB_MFPL & (~(INT0_PB5_Msk | INT1_PB4_Msk))) | INT0_PB5 | INT1_PB4;

#if 0
    /* Enable HXT */
    CLK_EnableXtalRC(CLK_PWRCTL_HXTEN_Msk);

    /* Waiting for clock ready */
    CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);

    /* Enable TIMER module clock */
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_HXT, 0);
#endif
}
#endif

void UART3_Init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init UART3                                                                                               */
    /*---------------------------------------------------------------------------------------------------------*/
    /* Reset UART3 */
    SYS_ResetModule(UART3_RST);

    /* Configure UART3 and set UART3 baud rate */
    UART_Open(UART3, 115200);
}

void SendChar_ToUART(int ch)
{
    if((char)ch == '\n')
    {
        while(DEBUG_PORT->FIFOSTS & UART_FIFOSTS_TXFULL_Msk) {}
        DEBUG_PORT->DAT = '\r';
    }

    while(DEBUG_PORT->FIFOSTS & UART_FIFOSTS_TXFULL_Msk) {}
    DEBUG_PORT->DAT = (uint32_t)ch;
}

int arch_printk_char_out(int c)
{
	SendChar_ToUART(c);
}

void z_arm_platform_init(void)
{
    SystemInit();

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Init System, peripheral clock and multi-function I/O */
    SYS_Init();

    /* Lock protected registers */
    SYS_LockReg();

    UART3_Init();
    SendChar_ToUART('\n'); SendChar_ToUART('+'); SendChar_ToUART('\n');

	return;

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
