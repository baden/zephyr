/*
 * Copyright (c) 2023 Nuvoton Technology Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_RESET_NUMAKER_M2354_RESET_H
#define ZEPHYR_INCLUDE_DT_BINDINGS_RESET_NUMAKER_M2354_RESET_H

/* Beginning of M2354 BSP sys_reg.h reset module copy */

#define NUMAKER_SYS_IPRST0_CHIPRST_Pos           (0)                                               /*!< SYS_T::IPRST0: CHIPRST Position        */
#define NUMAKER_SYS_IPRST0_CPURST_Pos            (1)                                               /*!< SYS_T::IPRST0: CPURST Position         */
#define NUMAKER_SYS_IPRST0_PDMA0RST_Pos          (2)                                               /*!< SYS_T::IPRST0: PDMA0RST Position       */
#define NUMAKER_SYS_IPRST0_EBIRST_Pos            (3)                                               /*!< SYS_T::IPRST0: EBIRST Position         */
#define NUMAKER_SYS_IPRST0_USBHRST_Pos           (4)                                               /*!< SYS_T::IPRST0: USBHRST Position        */
#define NUMAKER_SYS_IPRST0_SDH0RST_Pos           (6)                                               /*!< SYS_T::IPRST0: SDH0RST Position        */
#define NUMAKER_SYS_IPRST0_CRCRST_Pos            (7)                                               /*!< SYS_T::IPRST0: CRCRST Position         */
#define NUMAKER_SYS_IPRST0_CRPTRST_Pos           (12)                                              /*!< SYS_T::IPRST0: CRPTRST Position        */
#define NUMAKER_SYS_IPRST0_KSRST_Pos             (13)                                              /*!< SYS_T::IPRST0: KSRST Position          */
#define NUMAKER_SYS_IPRST0_PDMA1RST_Pos          (29)                                              /*!< SYS_T::IPRST0: PDMA1RST Position       */
#define NUMAKER_SYS_IPRST1_GPIORST_Pos           (1)                                               /*!< SYS_T::IPRST1: GPIORST Position        */
#define NUMAKER_SYS_IPRST1_TMR0RST_Pos           (2)                                               /*!< SYS_T::IPRST1: TMR0RST Position        */
#define NUMAKER_SYS_IPRST1_TMR1RST_Pos           (3)                                               /*!< SYS_T::IPRST1: TMR1RST Position        */
#define NUMAKER_SYS_IPRST1_TMR2RST_Pos           (4)                                               /*!< SYS_T::IPRST1: TMR2RST Position        */
#define NUMAKER_SYS_IPRST1_TMR3RST_Pos           (5)                                               /*!< SYS_T::IPRST1: TMR3RST Position        */
#define NUMAKER_SYS_IPRST1_ACMP01RST_Pos         (7)                                               /*!< SYS_T::IPRST1: ACMP01RST Position      */
#define NUMAKER_SYS_IPRST1_I2C0RST_Pos           (8)                                               /*!< SYS_T::IPRST1: I2C0RST Position        */
#define NUMAKER_SYS_IPRST1_I2C1RST_Pos           (9)                                               /*!< SYS_T::IPRST1: I2C1RST Position        */
#define NUMAKER_SYS_IPRST1_I2C2RST_Pos           (10)                                              /*!< SYS_T::IPRST1: I2C2RST Position        */
#define NUMAKER_SYS_IPRST1_QSPI0RST_Pos          (12)                                              /*!< SYS_T::IPRST1: QSPI0RST Position       */
#define NUMAKER_SYS_IPRST1_SPI0RST_Pos           (13)                                              /*!< SYS_T::IPRST1: SPI0RST Position        */
#define NUMAKER_SYS_IPRST1_SPI1RST_Pos           (14)                                              /*!< SYS_T::IPRST1: SPI1RST Position        */
#define NUMAKER_SYS_IPRST1_SPI2RST_Pos           (15)                                              /*!< SYS_T::IPRST1: SPI2RST Position        */
#define NUMAKER_SYS_IPRST1_UART0RST_Pos          (16)                                              /*!< SYS_T::IPRST1: UART0RST Position       */
#define NUMAKER_SYS_IPRST1_UART1RST_Pos          (17)                                              /*!< SYS_T::IPRST1: UART1RST Position       */
#define NUMAKER_SYS_IPRST1_UART2RST_Pos          (18)                                              /*!< SYS_T::IPRST1: UART2RST Position       */
#define NUMAKER_SYS_IPRST1_UART3RST_Pos          (19)                                              /*!< SYS_T::IPRST1: UART3RST Position       */
#define NUMAKER_SYS_IPRST1_UART4RST_Pos          (20)                                              /*!< SYS_T::IPRST1: UART4RST Position       */
#define NUMAKER_SYS_IPRST1_UART5RST_Pos          (21)                                              /*!< SYS_T::IPRST1: UART5RST Position       */
#define NUMAKER_SYS_IPRST1_CAN0RST_Pos           (24)                                              /*!< SYS_T::IPRST1: CAN0RST Position        */
#define NUMAKER_SYS_IPRST1_OTGRST_Pos            (26)                                              /*!< SYS_T::IPRST1: OTGRST Position         */
#define NUMAKER_SYS_IPRST1_USBDRST_Pos           (27)                                              /*!< SYS_T::IPRST1: USBDRST Position        */
#define NUMAKER_SYS_IPRST1_EADCRST_Pos           (28)                                              /*!< SYS_T::IPRST1: EADCRST Position        */
#define NUMAKER_SYS_IPRST1_I2S0RST_Pos           (29)                                              /*!< SYS_T::IPRST1: I2S0RST Position        */
#define NUMAKER_SYS_IPRST1_LCDRST_Pos            (30)                                              /*!< SYS_T::IPRST1: LCDRST Position         */
#define NUMAKER_SYS_IPRST1_TRNGRST_Pos           (31)                                              /*!< SYS_T::IPRST1: TRNGRST Position        */
#define NUMAKER_SYS_IPRST2_SC0RST_Pos            (0)                                               /*!< SYS_T::IPRST2: SC0RST Position         */
#define NUMAKER_SYS_IPRST2_SC1RST_Pos            (1)                                               /*!< SYS_T::IPRST2: SC1RST Position         */
#define NUMAKER_SYS_IPRST2_SC2RST_Pos            (2)                                               /*!< SYS_T::IPRST2: SC2RST Position         */
#define NUMAKER_SYS_IPRST2_SPI3RST_Pos           (6)                                               /*!< SYS_T::IPRST2: SPI3RST Position        */
#define NUMAKER_SYS_IPRST2_USCI0RST_Pos          (8)                                               /*!< SYS_T::IPRST2: USCI0RST Position       */
#define NUMAKER_SYS_IPRST2_USCI1RST_Pos          (9)                                               /*!< SYS_T::IPRST2: USCI1RST Position       */
#define NUMAKER_SYS_IPRST2_DACRST_Pos            (12)                                              /*!< SYS_T::IPRST2: DACRST Position         */
#define NUMAKER_SYS_IPRST2_EPWM0RST_Pos          (16)                                              /*!< SYS_T::IPRST2: EPWM0RST Position       */
#define NUMAKER_SYS_IPRST2_EPWM1RST_Pos          (17)                                              /*!< SYS_T::IPRST2: EPWM1RST Position       */
#define NUMAKER_SYS_IPRST2_BPWM0RST_Pos          (18)                                              /*!< SYS_T::IPRST2: BPWM0RST Position       */
#define NUMAKER_SYS_IPRST2_BPWM1RST_Pos          (19)                                              /*!< SYS_T::IPRST2: BPWM1RST Position       */
#define NUMAKER_SYS_IPRST2_TMR4RST_Pos           (20)                                              /*!< SYS_T::IPRST2: TMR4RST Position        */
#define NUMAKER_SYS_IPRST2_TMR5RST_Pos           (21)                                              /*!< SYS_T::IPRST2: TMR5RST Position        */
#define NUMAKER_SYS_IPRST2_QEI0RST_Pos           (22)                                              /*!< SYS_T::IPRST2: QEI0RST Position        */
#define NUMAKER_SYS_IPRST2_QEI1RST_Pos           (23)                                              /*!< SYS_T::IPRST2: QEI1RST Position        */
#define NUMAKER_SYS_IPRST2_ECAP0RST_Pos          (26)                                              /*!< SYS_T::IPRST2: ECAP0RST Position       */
#define NUMAKER_SYS_IPRST2_ECAP1RST_Pos          (27)                                              /*!< SYS_T::IPRST2: ECAP1RST Position       */

/* End of M2354 BSP sys_reg.h reset module copy */

/* Beginning of M2354 BSP sys.h reset module copy */


/*---------------------------------------------------------------------------------------------------------*/
/*  Module Reset Control Resister constant definitions.                                                    */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_PDMA0_RST   ((0x0UL<<24) | NUMAKER_SYS_IPRST0_PDMA0RST_Pos)     /*!< PDMA0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_EBI_RST     ((0x0UL<<24) | NUMAKER_SYS_IPRST0_EBIRST_Pos)       /*!< EBI reset is one of the SYS_ResetModule parameter */
#define NUMAKER_USBH_RST    ((0x0UL<<24) | NUMAKER_SYS_IPRST0_USBHRST_Pos)      /*!< USBH reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SDH0_RST    ((0x0UL<<24) | NUMAKER_SYS_IPRST0_SDH0RST_Pos)      /*!< SDH0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_CRC_RST     ((0x0UL<<24) | NUMAKER_SYS_IPRST0_CRCRST_Pos)       /*!< CRC reset is one of the SYS_ResetModule parameter */
#define NUMAKER_CRPT_RST    ((0x0UL<<24) | NUMAKER_SYS_IPRST0_CRPTRST_Pos)      /*!< CRPT reset is one of the SYS_ResetModule parameter */
#define NUMAKER_KS_RST      ((0x0UL<<24) | NUMAKER_SYS_IPRST0_KSRST_Pos)        /*!< KS reset is one of the SYS_ResetModule parameter */
#define NUMAKER_PDMA1_RST   ((0x0UL<<24) | NUMAKER_SYS_IPRST0_PDMA1RST_Pos)     /*!< PDMA1 reset is one of the SYS_ResetModule parameter */

#define NUMAKER_GPIO_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_GPIORST_Pos)      /*!< GPIO reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR0_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_TMR0RST_Pos)      /*!< TMR0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR1_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_TMR1RST_Pos)      /*!< TMR1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR2_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_TMR2RST_Pos)      /*!< TMR2 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR3_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_TMR3RST_Pos)      /*!< TMR3 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR4_RST    ((0x8UL<<24) | NUMAKER_SYS_IPRST2_TMR4RST_Pos)      /*!< TMR4 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TMR5_RST    ((0x8UL<<24) | NUMAKER_SYS_IPRST2_TMR5RST_Pos)      /*!< TMR5 reset is one of the SYS_ResetModule parameter */

#define NUMAKER_ACMP01_RST  ((0x4UL<<24) | NUMAKER_SYS_IPRST1_ACMP01RST_Pos)    /*!< ACMP01 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_I2C0_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_I2C0RST_Pos)      /*!< I2C0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_I2C1_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_I2C1RST_Pos)      /*!< I2C1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_I2C2_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_I2C2RST_Pos)      /*!< I2C2 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_QSPI0_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_QSPI0RST_Pos)     /*!< QSPI0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SPI0_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_SPI0RST_Pos)      /*!< SPI0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SPI1_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_SPI1RST_Pos)      /*!< SPI1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SPI2_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_SPI2RST_Pos)      /*!< SPI2 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART0_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART0RST_Pos)     /*!< UART0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART1_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART1RST_Pos)     /*!< UART1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART2_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART2RST_Pos)     /*!< UART2 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART3_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART3RST_Pos)     /*!< UART3 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART4_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART4RST_Pos)     /*!< UART4 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_UART5_RST   ((0x4UL<<24) | NUMAKER_SYS_IPRST1_UART5RST_Pos)     /*!< UART5 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_CAN0_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_CAN0RST_Pos)      /*!< CAN0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_OTG_RST     ((0x4UL<<24) | NUMAKER_SYS_IPRST1_OTGRST_Pos)       /*!< OTG reset is one of the SYS_ResetModule parameter */
#define NUMAKER_USBD_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_USBDRST_Pos)      /*!< USBD reset is one of the SYS_ResetModule parameter */
#define NUMAKER_EADC_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_EADCRST_Pos)      /*!< EADC reset is one of the SYS_ResetModule parameter */
#define NUMAKER_I2S0_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_I2S0RST_Pos)      /*!< I2S0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_LCD_RST     ((0x4UL<<24) | NUMAKER_SYS_IPRST1_LCDRST_Pos)       /*!< LCD reset is one of the SYS_ResetModule parameter */
#define NUMAKER_TRNG_RST    ((0x4UL<<24) | NUMAKER_SYS_IPRST1_TRNGRST_Pos)      /*!< TRNG reset is one of the SYS_ResetModule parameter */

#define NUMAKER_SC0_RST     ((0x8UL<<24) | NUMAKER_SYS_IPRST2_SC0RST_Pos)       /*!< SC0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SC1_RST     ((0x8UL<<24) | NUMAKER_SYS_IPRST2_SC1RST_Pos)       /*!< SC1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SC2_RST     ((0x8UL<<24) | NUMAKER_SYS_IPRST2_SC2RST_Pos)       /*!< SC2 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_SPI3_RST    ((0x8UL<<24) | NUMAKER_SYS_IPRST2_SPI3RST_Pos)      /*!< SPI3 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_USCI0_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_USCI0RST_Pos)     /*!< USCI0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_USCI1_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_USCI1RST_Pos)     /*!< USCI1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_DAC_RST     ((0x8UL<<24) | NUMAKER_SYS_IPRST2_DACRST_Pos)       /*!< DAC reset is one of the SYS_ResetModule parameter */
#define NUMAKER_EPWM0_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_EPWM0RST_Pos)     /*!< EPWM0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_EPWM1_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_EPWM1RST_Pos)     /*!< EPWM1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_BPWM0_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_BPWM0RST_Pos)     /*!< BPWM0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_BPWM1_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_BPWM1RST_Pos)     /*!< BPWM1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_QEI0_RST    ((0x8UL<<24) | NUMAKER_SYS_IPRST2_QEI0RST_Pos)      /*!< QEI0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_QEI1_RST    ((0x8UL<<24) | NUMAKER_SYS_IPRST2_QEI1RST_Pos)      /*!< QEI1 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_ECAP0_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_ECAP0RST_Pos)     /*!< ECAP0 reset is one of the SYS_ResetModule parameter */
#define NUMAKER_ECAP1_RST   ((0x8UL<<24) | NUMAKER_SYS_IPRST2_ECAP1RST_Pos)     /*!< ECAP1 reset is one of the SYS_ResetModule parameter */

/* End of M2354 BSP sys.h reset module copy */

#endif
