/*
 * Copyright (c) 2023 Nuvoton Technology Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_NUMAKER_M46X_CLOCK_H
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_NUMAKER_M46X_CLOCK_H

/* Beginning of M2354 BSP NUMAKER_CLK_reg.h copy */


#define NUMAKER_CLK_PWRCTL_HXTEN_Pos             (0)                                               /*!< NUMAKER_CLK_T::PWRCTL: HXTEN Position          */
#define NUMAKER_CLK_PWRCTL_LXTEN_Pos             (1)                                               /*!< NUMAKER_CLK_T::PWRCTL: LXTEN Position          */
#define NUMAKER_CLK_PWRCTL_HIRCEN_Pos            (2)                                               /*!< NUMAKER_CLK_T::PWRCTL: HIRCEN Position         */
#define NUMAKER_CLK_PWRCTL_LIRCEN_Pos            (3)                                               /*!< NUMAKER_CLK_T::PWRCTL: LIRCEN Position         */
#define NUMAKER_CLK_PWRCTL_PDWKIEN_Pos           (5)                                               /*!< NUMAKER_CLK_T::PWRCTL: PDWKIEN Position        */
#define NUMAKER_CLK_PWRCTL_PDWKIF_Pos            (6)                                               /*!< NUMAKER_CLK_T::PWRCTL: PDWKIF Position         */
#define NUMAKER_CLK_PWRCTL_PDEN_Pos              (7)                                               /*!< NUMAKER_CLK_T::PWRCTL: PDEN Position           */
#define NUMAKER_CLK_PWRCTL_HXTGAIN_Pos           (10)                                              /*!< NUMAKER_CLK_T::PWRCTL: HXTGAIN Position        */
#define NUMAKER_CLK_PWRCTL_HXTSELTYP_Pos         (12)                                              /*!< NUMAKER_CLK_T::PWRCTL: HXTSELTYP Position      */
#define NUMAKER_CLK_PWRCTL_HXTTBEN_Pos           (13)                                              /*!< NUMAKER_CLK_T::PWRCTL: HXTTBEN Position        */
#define NUMAKER_CLK_PWRCTL_HIRC48EN_Pos          (18)                                              /*!< NUMAKER_CLK_T::PWRCTL: HIRC48EN Position       */
#define NUMAKER_CLK_PWRCTL_MIRC1P2MEN_Pos        (20)                                              /*!< NUMAKER_CLK_T::PWRCTL: MIRC1P2MEN Position     */
#define NUMAKER_CLK_PWRCTL_MIRCEN_Pos            (21)                                              /*!< NUMAKER_CLK_T::PWRCTL: MIRCEN Position         */
#define NUMAKER_CLK_AHBCLK_PDMA0CKEN_Pos         (0)                                               /*!< NUMAKER_CLK_T::AHBCLK: PDMA0CKEN Position      */
#define NUMAKER_CLK_AHBCLK_PDMA1CKEN_Pos         (1)                                               /*!< NUMAKER_CLK_T::AHBCLK: PDMA1CKEN Position      */
#define NUMAKER_CLK_AHBCLK_ISPCKEN_Pos           (2)                                               /*!< NUMAKER_CLK_T::AHBCLK: ISPCKEN Position        */
#define NUMAKER_CLK_AHBCLK_EBICKEN_Pos           (3)                                               /*!< NUMAKER_CLK_T::AHBCLK: EBICKEN Position        */
#define NUMAKER_CLK_AHBCLK_EXSTCKEN_Pos          (4)                                               /*!< NUMAKER_CLK_T::AHBCLK: EXSTCKEN Position       */
#define NUMAKER_CLK_AHBCLK_SDH0CKEN_Pos          (6)                                               /*!< NUMAKER_CLK_T::AHBCLK: SDH0CKEN Position       */
#define NUMAKER_CLK_AHBCLK_CRCCKEN_Pos           (7)                                               /*!< NUMAKER_CLK_T::AHBCLK: CRCCKEN Position        */
#define NUMAKER_CLK_AHBCLK_CRPTCKEN_Pos          (12)                                              /*!< NUMAKER_CLK_T::AHBCLK: CRPTCKEN Position       */
#define NUMAKER_CLK_AHBCLK_KSCKEN_Pos            (13)                                              /*!< NUMAKER_CLK_T::AHBCLK: KSCKEN Position         */
#define NUMAKER_CLK_AHBCLK_TRACECKEN_Pos         (14)                                              /*!< NUMAKER_CLK_T::AHBCLK: TRACECKEN Position      */
#define NUMAKER_CLK_AHBCLK_FMCIDLE_Pos           (15)                                              /*!< NUMAKER_CLK_T::AHBCLK: FMCIDLE Position        */
#define NUMAKER_CLK_AHBCLK_USBHCKEN_Pos          (16)                                              /*!< NUMAKER_CLK_T::AHBCLK: USBHCKEN Position       */
#define NUMAKER_CLK_AHBCLK_SRAM0CKEN_Pos         (20)                                              /*!< NUMAKER_CLK_T::AHBCLK: SRAM0CKEN Position      */
#define NUMAKER_CLK_AHBCLK_SRAM1CKEN_Pos         (21)                                              /*!< NUMAKER_CLK_T::AHBCLK: SRAM1CKEN Position      */
#define NUMAKER_CLK_AHBCLK_SRAM2CKEN_Pos         (22)                                              /*!< NUMAKER_CLK_T::AHBCLK: SRAM2CKEN Position      */
#define NUMAKER_CLK_AHBCLK_GPACKEN_Pos           (24)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPACKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPBCKEN_Pos           (25)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPBCKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPCCKEN_Pos           (26)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPCCKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPDCKEN_Pos           (27)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPDCKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPECKEN_Pos           (28)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPECKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPFCKEN_Pos           (29)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPFCKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPGCKEN_Pos           (30)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPGCKEN Position        */
#define NUMAKER_CLK_AHBCLK_GPHCKEN_Pos           (31)                                              /*!< NUMAKER_CLK_T::AHBCLK: GPHCKEN Position        */
#define NUMAKER_CLK_APBCLK0_WDTCKEN_Pos          (0)                                               /*!< NUMAKER_CLK_T::APBCLK0: WDTCKEN Position       */
#define NUMAKER_CLK_APBCLK0_RTCCKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::APBCLK0: RTCCKEN Position       */
#define NUMAKER_CLK_APBCLK0_TMR0CKEN_Pos         (2)                                               /*!< NUMAKER_CLK_T::APBCLK0: TMR0CKEN Position      */
#define NUMAKER_CLK_APBCLK0_TMR1CKEN_Pos         (3)                                               /*!< NUMAKER_CLK_T::APBCLK0: TMR1CKEN Position      */
#define NUMAKER_CLK_APBCLK0_TMR2CKEN_Pos         (4)                                               /*!< NUMAKER_CLK_T::APBCLK0: TMR2CKEN Position      */
#define NUMAKER_CLK_APBCLK0_TMR3CKEN_Pos         (5)                                               /*!< NUMAKER_CLK_T::APBCLK0: TMR3CKEN Position      */
#define NUMAKER_CLK_APBCLK0_CLKOCKEN_Pos         (6)                                               /*!< NUMAKER_CLK_T::APBCLK0: CLKOCKEN Position      */
#define NUMAKER_CLK_APBCLK0_ACMP01CKEN_Pos       (7)                                               /*!< NUMAKER_CLK_T::APBCLK0: ACMP01CKEN Position    */
#define NUMAKER_CLK_APBCLK0_I2C0CKEN_Pos         (8)                                               /*!< NUMAKER_CLK_T::APBCLK0: I2C0CKEN Position      */
#define NUMAKER_CLK_APBCLK0_I2C1CKEN_Pos         (9)                                               /*!< NUMAKER_CLK_T::APBCLK0: I2C1CKEN Position      */
#define NUMAKER_CLK_APBCLK0_I2C2CKEN_Pos         (10)                                              /*!< NUMAKER_CLK_T::APBCLK0: I2C2CKEN Position      */
#define NUMAKER_CLK_APBCLK0_QSPI0CKEN_Pos        (12)                                              /*!< NUMAKER_CLK_T::APBCLK0: QSPI0CKEN Position     */
#define NUMAKER_CLK_APBCLK0_SPI0CKEN_Pos         (13)                                              /*!< NUMAKER_CLK_T::APBCLK0: SPI0CKEN Position      */
#define NUMAKER_CLK_APBCLK0_SPI1CKEN_Pos         (14)                                              /*!< NUMAKER_CLK_T::APBCLK0: SPI1CKEN Position      */
#define NUMAKER_CLK_APBCLK0_SPI2CKEN_Pos         (15)                                              /*!< NUMAKER_CLK_T::APBCLK0: SPI2CKEN Position      */
#define NUMAKER_CLK_APBCLK0_UART0CKEN_Pos        (16)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART0CKEN Position     */
#define NUMAKER_CLK_APBCLK0_UART1CKEN_Pos        (17)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART1CKEN Position     */
#define NUMAKER_CLK_APBCLK0_UART2CKEN_Pos        (18)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART2CKEN Position     */
#define NUMAKER_CLK_APBCLK0_UART3CKEN_Pos        (19)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART3CKEN Position     */
#define NUMAKER_CLK_APBCLK0_UART4CKEN_Pos        (20)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART4CKEN Position     */
#define NUMAKER_CLK_APBCLK0_UART5CKEN_Pos        (21)                                              /*!< NUMAKER_CLK_T::APBCLK0: UART5CKEN Position     */
#define NUMAKER_CLK_APBCLK0_TAMPERCKEN_Pos       (22)                                              /*!< NUMAKER_CLK_T::APBCLK0: TAMPERCKEN Position    */
#define NUMAKER_CLK_APBCLK0_CAN0CKEN_Pos         (24)                                              /*!< NUMAKER_CLK_T::APBCLK0: CAN0CKEN Position      */
#define NUMAKER_CLK_APBCLK0_OTGCKEN_Pos          (26)                                              /*!< NUMAKER_CLK_T::APBCLK0: OTGCKEN Position       */
#define NUMAKER_CLK_APBCLK0_USBDCKEN_Pos         (27)                                              /*!< NUMAKER_CLK_T::APBCLK0: USBDCKEN Position      */
#define NUMAKER_CLK_APBCLK0_USBDCKEN_Pos         (27)                                              /*!< NUMAKER_CLK_T::APBCLK0: USBDCKEN Position      */
#define NUMAKER_CLK_APBCLK0_EADCCKEN_Pos         (28)                                              /*!< NUMAKER_CLK_T::APBCLK0: EADCCKEN Position      */
#define NUMAKER_CLK_APBCLK0_I2S0CKEN_Pos         (29)                                              /*!< NUMAKER_CLK_T::APBCLK0: I2S0CKEN Position      */
#define NUMAKER_CLK_APBCLK0_EWDTCKEN_Pos         (31)                                              /*!< NUMAKER_CLK_T::APBCLK0: EWDTCKEN Position      */
#define NUMAKER_CLK_APBCLK1_SC0CKEN_Pos          (0)                                               /*!< NUMAKER_CLK_T::APBCLK1: SC0CKEN Position       */
#define NUMAKER_CLK_APBCLK1_SC1CKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::APBCLK1: SC1CKEN Position       */
#define NUMAKER_CLK_APBCLK1_SC2CKEN_Pos          (2)                                               /*!< NUMAKER_CLK_T::APBCLK1: SC2CKEN Position       */
#define NUMAKER_CLK_APBCLK1_TMR4CKEN_Pos         (4)                                               /*!< NUMAKER_CLK_T::APBCLK1: TMR4CKEN Position      */
#define NUMAKER_CLK_APBCLK1_TMR5CKEN_Pos         (5)                                               /*!< NUMAKER_CLK_T::APBCLK1: TMR5CKEN Position      */
#define NUMAKER_CLK_APBCLK1_SPI3CKEN_Pos         (6)                                               /*!< NUMAKER_CLK_T::APBCLK1: SPI3CKEN Position      */
#define NUMAKER_CLK_APBCLK1_USCI0CKEN_Pos        (8)                                               /*!< NUMAKER_CLK_T::APBCLK1: USCI0CKEN Position     */
#define NUMAKER_CLK_APBCLK1_USCI1CKEN_Pos        (9)                                               /*!< NUMAKER_CLK_T::APBCLK1: USCI1CKEN Position     */
#define NUMAKER_CLK_APBCLK1_DACCKEN_Pos          (12)                                              /*!< NUMAKER_CLK_T::APBCLK1: DACCKEN Position       */
#define NUMAKER_CLK_APBCLK1_EPWM0CKEN_Pos        (16)                                              /*!< NUMAKER_CLK_T::APBCLK1: EPWM0CKEN Position     */
#define NUMAKER_CLK_APBCLK1_EPWM1CKEN_Pos        (17)                                              /*!< NUMAKER_CLK_T::APBCLK1: EPWM1CKEN Position     */
#define NUMAKER_CLK_APBCLK1_BPWM0CKEN_Pos        (18)                                              /*!< NUMAKER_CLK_T::APBCLK1: BPWM0CKEN Position     */
#define NUMAKER_CLK_APBCLK1_BPWM1CKEN_Pos        (19)                                              /*!< NUMAKER_CLK_T::APBCLK1: BPWM1CKEN Position     */
#define NUMAKER_CLK_APBCLK1_QEI0CKEN_Pos         (22)                                              /*!< NUMAKER_CLK_T::APBCLK1: QEI0CKEN Position      */
#define NUMAKER_CLK_APBCLK1_QEI1CKEN_Pos         (23)                                              /*!< NUMAKER_CLK_T::APBCLK1: QEI1CKEN Position      */
#define NUMAKER_CLK_APBCLK1_LCDCKEN_Pos          (24)                                              /*!< NUMAKER_CLK_T::APBCLK1: LCDCKEN Position       */
#define NUMAKER_CLK_APBCLK1_TRNGCKEN_Pos         (25)                                              /*!< NUMAKER_CLK_T::APBCLK1: TRNGCKEN Position      */
#define NUMAKER_CLK_APBCLK1_ECAP0CKEN_Pos        (26)                                              /*!< NUMAKER_CLK_T::APBCLK1: ECAP0CKEN Position     */
#define NUMAKER_CLK_APBCLK1_ECAP1CKEN_Pos        (27)                                              /*!< NUMAKER_CLK_T::APBCLK1: ECAP1CKEN Position     */
#define NUMAKER_CLK_APBCLK1_LCDCPCKEN_Pos        (28)                                              /*!< NUMAKER_CLK_T::APBCLK1: LCDCPCKEN Position     */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos          (0)                                               /*!< NUMAKER_CLK_T::CLKSEL0: HCLKSEL Position       */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos         (3)                                               /*!< NUMAKER_CLK_T::CLKSEL0: STCLKSEL Position      */
#define NUMAKER_CLK_CLKSEL0_USBSEL_Pos           (8)                                               /*!< NUMAKER_CLK_T::CLKSEL0: USBSEL Position        */
#define NUMAKER_CLK_CLKSEL0_SDH0SEL_Pos          (20)                                              /*!< NUMAKER_CLK_T::CLKSEL0: SDH0SEL Position       */
#define NUMAKER_CLK_CLKSEL1_WDTSEL_Pos           (0)                                               /*!< NUMAKER_CLK_T::CLKSEL1: WDTSEL Position        */
#define NUMAKER_CLK_CLKSEL1_LCDSEL_Pos           (2)                                               /*!< NUMAKER_CLK_T::CLKSEL1: LCDSEL Position        */
#define NUMAKER_CLK_CLKSEL1_LCDCPSEL_Pos         (3)                                               /*!< NUMAKER_CLK_T::CLKSEL1: LCDCPSEL Position      */
#define NUMAKER_CLK_CLKSEL1_EWDTSEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::CLKSEL1: EWDTSEL Position       */
#define NUMAKER_CLK_CLKSEL1_EWWDTSEL_Pos         (6)                                               /*!< NUMAKER_CLK_T::CLKSEL1: EWWDTSEL Position      */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos          (8)                                               /*!< NUMAKER_CLK_T::CLKSEL1: TMR0SEL Position       */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos          (12)                                              /*!< NUMAKER_CLK_T::CLKSEL1: TMR1SEL Position       */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos          (16)                                              /*!< NUMAKER_CLK_T::CLKSEL1: TMR2SEL Position       */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos          (20)                                              /*!< NUMAKER_CLK_T::CLKSEL1: TMR3SEL Position       */
#define NUMAKER_CLK_CLKSEL1_CLKOSEL_Pos          (28)                                              /*!< NUMAKER_CLK_T::CLKSEL1: CLKOSEL Position       */
#define NUMAKER_CLK_CLKSEL1_WWDTSEL_Pos          (30)                                              /*!< NUMAKER_CLK_T::CLKSEL1: WWDTSEL Position       */
#define NUMAKER_CLK_CLKSEL2_EPWM0SEL_Pos         (0)                                               /*!< NUMAKER_CLK_T::CLKSEL2: EPWM0SEL Position      */
#define NUMAKER_CLK_CLKSEL2_EPWM1SEL_Pos         (1)                                               /*!< NUMAKER_CLK_T::CLKSEL2: EPWM1SEL Position      */
#define NUMAKER_CLK_CLKSEL2_QSPI0SEL_Pos         (2)                                               /*!< NUMAKER_CLK_T::CLKSEL2: QSPI0SEL Position      */
#define NUMAKER_CLK_CLKSEL2_SPI0SEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::CLKSEL2: SPI0SEL Position       */
#define NUMAKER_CLK_CLKSEL2_SPI1SEL_Pos          (6)                                               /*!< NUMAKER_CLK_T::CLKSEL2: SPI1SEL Position       */
#define NUMAKER_CLK_CLKSEL2_SPI2SEL_Pos          (10)                                              /*!< NUMAKER_CLK_T::CLKSEL2: SPI2SEL Position       */
#define NUMAKER_CLK_CLKSEL2_BPWM0SEL_Pos         (8)                                               /*!< NUMAKER_CLK_T::CLKSEL2: BPWM0SEL Position      */
#define NUMAKER_CLK_CLKSEL2_BPWM1SEL_Pos         (9)                                               /*!< NUMAKER_CLK_T::CLKSEL2: BPWM1SEL Position      */
#define NUMAKER_CLK_CLKSEL2_SPI3SEL_Pos          (12)                                              /*!< NUMAKER_CLK_T::CLKSEL2: SPI3SEL Position       */
#define NUMAKER_CLK_CLKSEL2_UART0SEL_Pos         (16)                                              /*!< NUMAKER_CLK_T::CLKSEL2: UART0SEL Position      */
#define NUMAKER_CLK_CLKSEL2_UART1SEL_Pos         (20)                                              /*!< NUMAKER_CLK_T::CLKSEL2: UART1SEL Position      */
#define NUMAKER_CLK_CLKSEL2_UART2SEL_Pos         (24)                                              /*!< NUMAKER_CLK_T::CLKSEL2: UART2SEL Position      */
#define NUMAKER_CLK_CLKSEL2_UART3SEL_Pos         (28)                                              /*!< NUMAKER_CLK_T::CLKSEL2: UART3SEL Position      */
#define NUMAKER_CLK_CLKSEL3_SC0SEL_Pos           (0)                                               /*!< NUMAKER_CLK_T::CLKSEL3: SC0SEL Position        */
#define NUMAKER_CLK_CLKSEL3_SC1SEL_Pos           (2)                                               /*!< NUMAKER_CLK_T::CLKSEL3: SC1SEL Position        */
#define NUMAKER_CLK_CLKSEL3_SC2SEL_Pos           (4)                                               /*!< NUMAKER_CLK_T::CLKSEL3: SC2SEL Position        */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos          (8)                                               /*!< NUMAKER_CLK_T::CLKSEL3: TMR4SEL Position       */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos          (12)                                              /*!< NUMAKER_CLK_T::CLKSEL3: TMR5SEL Position       */
#define NUMAKER_CLK_CLKSEL3_I2S0SEL_Pos          (16)                                              /*!< NUMAKER_CLK_T::CLKSEL3: I2S0SEL Position       */
#define NUMAKER_CLK_CLKSEL3_UART4SEL_Pos         (24)                                              /*!< NUMAKER_CLK_T::CLKSEL3: UART4SEL Position      */
#define NUMAKER_CLK_CLKSEL3_UART5SEL_Pos         (28)                                              /*!< NUMAKER_CLK_T::CLKSEL3: UART5SEL Position      */
#define NUMAKER_CLK_CLKDIV0_HCLKDIV_Pos          (0)                                               /*!< NUMAKER_CLK_T::CLKDIV0: HCLKDIV Position       */
#define NUMAKER_CLK_CLKDIV0_USBDIV_Pos           (4)                                               /*!< NUMAKER_CLK_T::CLKDIV0: USBDIV Position        */
#define NUMAKER_CLK_CLKDIV0_UART0DIV_Pos         (8)                                               /*!< NUMAKER_CLK_T::CLKDIV0: UART0DIV Position      */
#define NUMAKER_CLK_CLKDIV0_UART1DIV_Pos         (12)                                              /*!< NUMAKER_CLK_T::CLKDIV0: UART1DIV Position      */
#define NUMAKER_CLK_CLKDIV0_EADCDIV_Pos          (16)                                              /*!< NUMAKER_CLK_T::CLKDIV0: EADCDIV Position       */
#define NUMAKER_CLK_CLKDIV0_SDH0DIV_Pos          (24)                                              /*!< NUMAKER_CLK_T::CLKDIV0: SDH0DIV Position       */
#define NUMAKER_CLK_CLKDIV1_SC0DIV_Pos           (0)                                               /*!< NUMAKER_CLK_T::CLKDIV1: SC0DIV Position        */
#define NUMAKER_CLK_CLKDIV1_SC1DIV_Pos           (8)                                               /*!< NUMAKER_CLK_T::CLKDIV1: SC1DIV Position        */
#define NUMAKER_CLK_CLKDIV1_SC2DIV_Pos           (16)                                              /*!< NUMAKER_CLK_T::CLKDIV1: SC2DIV Position        */
#define NUMAKER_CLK_CLKDIV4_UART2DIV_Pos         (0)                                               /*!< NUMAKER_CLK_T::CLKDIV4: UART2DIV Position      */
#define NUMAKER_CLK_CLKDIV4_UART3DIV_Pos         (4)                                               /*!< NUMAKER_CLK_T::CLKDIV4: UART3DIV Position      */
#define NUMAKER_CLK_CLKDIV4_UART4DIV_Pos         (8)                                               /*!< NUMAKER_CLK_T::CLKDIV4: UART4DIV Position      */
#define NUMAKER_CLK_CLKDIV4_UART5DIV_Pos         (12)                                              /*!< NUMAKER_CLK_T::CLKDIV4: UART5DIV Position      */
#define NUMAKER_CLK_PLLCTL_FBDIV_Pos             (0)                                               /*!< NUMAKER_CLK_T::PLLCTL: FBDIV Position          */
#define NUMAKER_CLK_PLLCTL_INDIV_Pos             (9)                                               /*!< NUMAKER_CLK_T::PLLCTL: INDIV Position          */
#define NUMAKER_CLK_PLLCTL_OUTDIV_Pos            (14)                                              /*!< NUMAKER_CLK_T::PLLCTL: OUTDIV Position         */
#define NUMAKER_CLK_PLLCTL_PD_Pos                (16)                                              /*!< NUMAKER_CLK_T::PLLCTL: PD Position             */
#define NUMAKER_CLK_PLLCTL_BP_Pos                (17)                                              /*!< NUMAKER_CLK_T::PLLCTL: BP Position             */
#define NUMAKER_CLK_PLLCTL_PLLSRC_Pos            (19)                                              /*!< NUMAKER_CLK_T::PLLCTL: PLLSRC Position         */
#define NUMAKER_CLK_PLLCTL_STBSEL_Pos            (23)                                              /*!< NUMAKER_CLK_T::PLLCTL: STBSEL Position         */
#define NUMAKER_CLK_STATUS_HXTSTB_Pos            (0)                                               /*!< NUMAKER_CLK_T::STATUS: HXTSTB Position         */
#define NUMAKER_CLK_STATUS_LXTSTB_Pos            (1)                                               /*!< NUMAKER_CLK_T::STATUS: LXTSTB Position         */
#define NUMAKER_CLK_STATUS_PLLSTB_Pos            (2)                                               /*!< NUMAKER_CLK_T::STATUS: PLLSTB Position         */
#define NUMAKER_CLK_STATUS_LIRCSTB_Pos           (3)                                               /*!< NUMAKER_CLK_T::STATUS: LIRCSTB Position        */
#define NUMAKER_CLK_STATUS_HIRCSTB_Pos           (4)                                               /*!< NUMAKER_CLK_T::STATUS: HIRCSTB Position        */
#define NUMAKER_CLK_STATUS_MIRCSTB_Pos           (5)                                               /*!< NUMAKER_CLK_T::STATUS: MIRCSTB Position        */
#define NUMAKER_CLK_STATUS_HIRC48STB_Pos         (6)                                               /*!< NUMAKER_CLK_T::STATUS: HIRC48STB Position      */
#define NUMAKER_CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< NUMAKER_CLK_T::STATUS: CLKSFAIL Position       */
#define NUMAKER_CLK_STATUS_EXTLXTSTB_Pos         (8)                                               /*!< NUMAKER_CLK_T::STATUS: EXTLXTSTB Position      */
#define NUMAKER_CLK_STATUS_LIRC32STB_Pos         (9)                                               /*!< NUMAKER_CLK_T::STATUS: LIRC32STB Position      */
#define NUMAKER_CLK_CLKOCTL_FREQSEL_Pos          (0)                                               /*!< NUMAKER_CLK_T::CLKOCTL: FREQSEL Position       */
#define NUMAKER_CLK_CLKOCTL_CLKOEN_Pos           (4)                                               /*!< NUMAKER_CLK_T::CLKOCTL: CLKOEN Position        */
#define NUMAKER_CLK_CLKOCTL_DIV1EN_Pos           (5)                                               /*!< NUMAKER_CLK_T::CLKOCTL: DIV1EN Position        */
#define NUMAKER_CLK_CLKOCTL_CLK1HZEN_Pos         (6)                                               /*!< NUMAKER_CLK_T::CLKOCTL: CLK1HZEN Position      */
#define NUMAKER_CLK_CLKDCTL_HXTFDEN_Pos          (4)                                               /*!< NUMAKER_CLK_T::CLKDCTL: HXTFDEN Position       */
#define NUMAKER_CLK_CLKDCTL_HXTFIEN_Pos          (5)                                               /*!< NUMAKER_CLK_T::CLKDCTL: HXTFIEN Position       */
#define NUMAKER_CLK_CLKDCTL_HXTFDSEL_Pos         (6)                                               /*!< NUMAKER_CLK_T::CLKDCTL: HXTFDSEL Position      */
#define NUMAKER_CLK_CLKDCTL_LXTFDEN_Pos          (12)                                              /*!< NUMAKER_CLK_T::CLKDCTL: LXTFDEN Position       */
#define NUMAKER_CLK_CLKDCTL_LXTFIEN_Pos          (13)                                              /*!< NUMAKER_CLK_T::CLKDCTL: LXTFIEN Position       */
#define NUMAKER_CLK_CLKDCTL_HXTFQDEN_Pos         (16)                                              /*!< NUMAKER_CLK_T::CLKDCTL: HXTFQDEN Position      */
#define NUMAKER_CLK_CLKDCTL_HXTFQIEN_Pos         (17)                                              /*!< NUMAKER_CLK_T::CLKDCTL: HXTFQIEN Position      */
#define NUMAKER_CLK_CLKDSTS_HXTFIF_Pos           (0)                                               /*!< NUMAKER_CLK_T::CLKDSTS: HXTFIF Position        */
#define NUMAKER_CLK_CLKDSTS_LXTFIF_Pos           (1)                                               /*!< NUMAKER_CLK_T::CLKDSTS: LXTFIF Position        */
#define NUMAKER_CLK_CLKDSTS_HXTFQIF_Pos          (8)                                               /*!< NUMAKER_CLK_T::CLKDSTS: HXTFQIF Position       */
#define NUMAKER_CLK_CDUPB_UPERBD_Pos             (0)                                               /*!< NUMAKER_CLK_T::CDUPB: UPERBD Position          */
#define NUMAKER_CLK_CDLOWB_LOWERBD_Pos           (0)                                               /*!< NUMAKER_CLK_T::CDLOWB: LOWERBD Position        */
#define NUMAKER_CLK_PMUCTL_PDMSEL_Pos            (0)                                               /*!< NUMAKER_CLK_T::PMUCTL: PDMSEL Position         */
#define NUMAKER_CLK_PMUCTL_VDROPEN_Pos           (4)                                               /*!< NUMAKER_CLK_T::PMUCTL: VDROPEN Position        */
#define NUMAKER_CLK_PMUCTL_WRBUSY_Pos            (7)                                               /*!< NUMAKER_CLK_T::PMUCTL: WRBUSY Position         */
#define NUMAKER_CLK_PMUCTL_WKTMREN_Pos           (8)                                               /*!< NUMAKER_CLK_T::PMUCTL: WKTMREN Position        */
#define NUMAKER_CLK_PMUCTL_WKTMRIS_Pos           (9)                                               /*!< NUMAKER_CLK_T::PMUCTL: WKTMRIS Position        */
#define NUMAKER_CLK_PMUCTL_WKPINEN_Pos           (16)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN Position        */
#define NUMAKER_CLK_PMUCTL_WKPINEN0_Pos          (16)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN0 Position       */
#define NUMAKER_CLK_PMUCTL_ACMPSPWK_Pos          (18)                                              /*!< NUMAKER_CLK_T::PMUCTL: ACMPSPWK Position       */
#define NUMAKER_CLK_PMUCTL_TAMPERWK_Pos          (19)                                              /*!< NUMAKER_CLK_T::PMUCTL: TAMPERWK Position       */
#define NUMAKER_CLK_PMUCTL_RTCWKEN_Pos           (23)                                              /*!< NUMAKER_CLK_T::PMUCTL: RTCWKEN Position        */
#define NUMAKER_CLK_PMUCTL_WKPINEN1_Pos          (24)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN1 Position       */
#define NUMAKER_CLK_PMUCTL_WKPINEN2_Pos          (26)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN2 Position       */
#define NUMAKER_CLK_PMUCTL_WKPINEN3_Pos          (28)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN3 Position       */
#define NUMAKER_CLK_PMUCTL_WKPINEN4_Pos          (30)                                              /*!< NUMAKER_CLK_T::PMUCTL: WKPINEN4 Position       */
#define NUMAKER_CLK_PMUSTS_PINWK0_Pos            (0)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK0 Position         */
#define NUMAKER_CLK_PMUSTS_PINWK_Pos             (0)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK Position          */
#define NUMAKER_CLK_PMUSTS_TMRWK_Pos             (1)                                               /*!< NUMAKER_CLK_T::PMUSTS: TMRWK Position          */
#define NUMAKER_CLK_PMUSTS_RTCWK_Pos             (2)                                               /*!< NUMAKER_CLK_T::PMUSTS: RTCWK Position          */
#define NUMAKER_CLK_PMUSTS_PINWK1_Pos            (3)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK1 Position         */
#define NUMAKER_CLK_PMUSTS_PINWK2_Pos            (4)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK2 Position         */
#define NUMAKER_CLK_PMUSTS_PINWK3_Pos            (5)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK3 Position         */
#define NUMAKER_CLK_PMUSTS_PINWK4_Pos            (6)                                               /*!< NUMAKER_CLK_T::PMUSTS: PINWK4 Position         */
#define NUMAKER_CLK_PMUSTS_GPAWK_Pos             (8)                                               /*!< NUMAKER_CLK_T::PMUSTS: GPAWK Position          */
#define NUMAKER_CLK_PMUSTS_GPBWK_Pos             (9)                                               /*!< NUMAKER_CLK_T::PMUSTS: GPBWK Position          */
#define NUMAKER_CLK_PMUSTS_GPCWK_Pos             (10)                                              /*!< NUMAKER_CLK_T::PMUSTS: GPCWK Position          */
#define NUMAKER_CLK_PMUSTS_GPDWK_Pos             (11)                                              /*!< NUMAKER_CLK_T::PMUSTS: GPDWK Position          */
#define NUMAKER_CLK_PMUSTS_LVRWK_Pos             (12)                                              /*!< NUMAKER_CLK_T::PMUSTS: LVRWK Position          */
#define NUMAKER_CLK_PMUSTS_BODWK_Pos             (13)                                              /*!< NUMAKER_CLK_T::PMUSTS: BODWK Position          */
#define NUMAKER_CLK_PMUSTS_ACMPWK_Pos            (14)                                              /*!< NUMAKER_CLK_T::PMUSTS: ACMPWK Position         */
#define NUMAKER_CLK_PMUSTS_TAMPERWK_Pos          (15)                                              /*!< NUMAKER_CLK_T::PMUSTS: TAMPERWK Position       */
#define NUMAKER_CLK_PMUSTS_CLRWK_Pos             (31)                                              /*!< NUMAKER_CLK_T::PMUSTS: CLRWK Position          */
#define NUMAKER_CLK_SWKDBCTL_SWKDBCLKSEL_Pos     (0)                                               /*!< NUMAKER_CLK_T::SWKDBCTL: SWKDBCLKSEL Position  */
#define NUMAKER_CLK_PASWKCTL_WKEN_Pos            (0)                                               /*!< NUMAKER_CLK_T::PASWKCTL: WKEN Position         */
#define NUMAKER_CLK_PASWKCTL_PRWKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::PASWKCTL: PRWKEN Position       */
#define NUMAKER_CLK_PASWKCTL_PFWKEN_Pos          (2)                                               /*!< NUMAKER_CLK_T::PASWKCTL: PFWKEN Position       */
#define NUMAKER_CLK_PASWKCTL_WKPSEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::PASWKCTL: WKPSEL Position       */
#define NUMAKER_CLK_PASWKCTL_DBEN_Pos            (8)                                               /*!< NUMAKER_CLK_T::PASWKCTL: DBEN Position         */
#define NUMAKER_CLK_PBSWKCTL_WKEN_Pos            (0)                                               /*!< NUMAKER_CLK_T::PBSWKCTL: WKEN Position         */
#define NUMAKER_CLK_PBSWKCTL_PRWKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::PBSWKCTL: PRWKEN Position       */
#define NUMAKER_CLK_PBSWKCTL_PFWKEN_Pos          (2)                                               /*!< NUMAKER_CLK_T::PBSWKCTL: PFWKEN Position       */
#define NUMAKER_CLK_PBSWKCTL_WKPSEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::PBSWKCTL: WKPSEL Position       */
#define NUMAKER_CLK_PBSWKCTL_DBEN_Pos            (8)                                               /*!< NUMAKER_CLK_T::PBSWKCTL: DBEN Position         */
#define NUMAKER_CLK_PCSWKCTL_WKEN_Pos            (0)                                               /*!< NUMAKER_CLK_T::PCSWKCTL: WKEN Position         */
#define NUMAKER_CLK_PCSWKCTL_PRWKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::PCSWKCTL: PRWKEN Position       */
#define NUMAKER_CLK_PCSWKCTL_PFWKEN_Pos          (2)                                               /*!< NUMAKER_CLK_T::PCSWKCTL: PFWKEN Position       */
#define NUMAKER_CLK_PCSWKCTL_WKPSEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::PCSWKCTL: WKPSEL Position       */
#define NUMAKER_CLK_PCSWKCTL_DBEN_Pos            (8)                                               /*!< NUMAKER_CLK_T::PCSWKCTL: DBEN Position         */
#define NUMAKER_CLK_PDSWKCTL_WKEN_Pos            (0)                                               /*!< NUMAKER_CLK_T::PDSWKCTL: WKEN Position         */
#define NUMAKER_CLK_PDSWKCTL_PRWKEN_Pos          (1)                                               /*!< NUMAKER_CLK_T::PDSWKCTL: PRWKEN Position       */
#define NUMAKER_CLK_PDSWKCTL_PFWKEN_Pos          (2)                                               /*!< NUMAKER_CLK_T::PDSWKCTL: PFWKEN Position       */
#define NUMAKER_CLK_PDSWKCTL_WKPSEL_Pos          (4)                                               /*!< NUMAKER_CLK_T::PDSWKCTL: WKPSEL Position       */
#define NUMAKER_CLK_PDSWKCTL_DBEN_Pos            (8)                                               /*!< NUMAKER_CLK_T::PDSWKCTL: DBEN Position         */
#define NUMAKER_CLK_IOPDCTL_IOHR_Pos             (0)                                               /*!< NUMAKER_CLK_T::IOPDCTL: IOHR Position          */
#define NUMAKER_CLK_HXTFSEL_HXTFSEL_Pos          (0)                                               /*!< NUMAKER_CLK_T::HXTFSEL: HXTFSEL Position       */

/* End of M2354 BSP NUMAKER_CLK_reg.h copy */

/* Beginning of M2354 BSP clk.h copy */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_HXT         (0x00UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as HXT */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_LXT         (0x01UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as LXT */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_PLL         (0x02UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as PLL */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_LIRC        (0x03UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as LIRC */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_HIRC48      (0x05UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as HIRC48 */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_MIRC        (0x06UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as MIRC */
#define NUMAKER_CLK_CLKSEL0_HCLKSEL_HIRC        (0x07UL << NUMAKER_CLK_CLKSEL0_HCLKSEL_Pos) /*!< Setting HCLK clock source as HIRC */

#define NUMAKER_CLK_CLKSEL0_STCLKSEL_HXT        (0x00UL << NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos) /*!< Setting SysTick clock source as HXT */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_LXT        (0x01UL << NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos) /*!< Setting SysTick clock source as LXT */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_HXT_DIV2   (0x02UL << NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos) /*!< Setting SysTick clock source as HXT */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_HCLK_DIV2  (0x03UL << NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos) /*!< Setting SysTick clock source as HCLK/2 */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_HIRC_DIV2  (0x07UL << NUMAKER_CLK_CLKSEL0_STCLKSEL_Pos) /*!< Setting SysTick clock source as HIRC/2 */
#define NUMAKER_CLK_CLKSEL0_STCLKSEL_HCLK       (0x01UL<<SysTick_CTRL_CLKSOURCE_Pos) /*!< Setting SysTick clock source as HCLK */

#define NUMAKER_CLK_CLKSEL0_SDH0SEL_HXT         (0x00UL << NUMAKER_CLK_CLKSEL0_SDH0SEL_Pos) /*!< Setting SDH0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL0_SDH0SEL_PLL         (0x01UL << NUMAKER_CLK_CLKSEL0_SDH0SEL_Pos) /*!< Setting SDH0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL0_SDH0SEL_HCLK        (0x02UL << NUMAKER_CLK_CLKSEL0_SDH0SEL_Pos) /*!< Setting SDH0 clock source as HCLK */
#define NUMAKER_CLK_CLKSEL0_SDH0SEL_HIRC        (0x03UL << NUMAKER_CLK_CLKSEL0_SDH0SEL_Pos) /*!< Setting SDH0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL0_USBSEL_HIRC48       (0x00UL << NUMAKER_CLK_CLKSEL0_USBSEL_Pos)  /*!< Setting USB clock source as HIRC48 */
#define NUMAKER_CLK_CLKSEL0_USBSEL_PLL          (0x01UL << NUMAKER_CLK_CLKSEL0_USBSEL_Pos)  /*!< Setting USB clock source as PLL */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKSEL1_WDTSEL_LXT           (0x1UL << NUMAKER_CLK_CLKSEL1_WDTSEL_Pos)  /*!< Setting WDT clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_WDTSEL_HCLK_DIV2048  (0x2UL << NUMAKER_CLK_CLKSEL1_WDTSEL_Pos)  /*!< Setting WDT clock source as HCLK/2048 */
#define NUMAKER_CLK_CLKSEL1_WDTSEL_LIRC          (0x3UL << NUMAKER_CLK_CLKSEL1_WDTSEL_Pos)  /*!< Setting WDT clock source as LIRC */

#define NUMAKER_CLK_CLKSEL1_LCDSEL_LIRC          (0x0UL << NUMAKER_CLK_CLKSEL1_LCDSEL_Pos)  /*!< Setting LCD clock source as LIRC */
#define NUMAKER_CLK_CLKSEL1_LCDSEL_LXT           (0x1UL << NUMAKER_CLK_CLKSEL1_LCDSEL_Pos)  /*!< Setting LCD clock source as LXT */

#define NUMAKER_CLK_CLKSEL1_LCDCPSEL_MIRC1P2M    (0x0UL << NUMAKER_CLK_CLKSEL1_LCDCPSEL_Pos) /*!< Setting LCD charge pump clock source as MIRC1P2M */
#define NUMAKER_CLK_CLKSEL1_LCDCPSEL_MIRC        (0x1UL << NUMAKER_CLK_CLKSEL1_LCDCPSEL_Pos) /*!< Setting LCD charge pump clock source as MIRC */

#define NUMAKER_CLK_CLKSEL1_EWDTSEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_EWDTSEL_Pos) /*!< Setting EWDT clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_EWDTSEL_HCLK_DIV2048 (0x2UL << NUMAKER_CLK_CLKSEL1_EWDTSEL_Pos) /*!< Setting EWDT clock source as HCLK/2048 */
#define NUMAKER_CLK_CLKSEL1_EWDTSEL_LIRC         (0x3UL << NUMAKER_CLK_CLKSEL1_EWDTSEL_Pos) /*!< Setting EWDT clock source as LIRC */

#define NUMAKER_CLK_CLKSEL1_EWWDTSEL_HCLK_DIV2048 (0x2UL << NUMAKER_CLK_CLKSEL1_EWWDTSEL_Pos) /*!< Setting EWWDT clock source as HCLK/2048 */
#define NUMAKER_CLK_CLKSEL1_EWWDTSEL_LIRC         (0x3UL << NUMAKER_CLK_CLKSEL1_EWWDTSEL_Pos) /*!< Setting EWWDT clock source as LIRC */

#define NUMAKER_CLK_CLKSEL1_TMR0SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL1_TMR0SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL1_TMR0SEL_Pos) /*!< Setting Timer 0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL1_TMR1SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as HXT */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL1_TMR1SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL1_TMR1SEL_Pos) /*!< Setting Timer 1 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL1_TMR2SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as HXT */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_PCLK1        (0x2UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL1_TMR2SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL1_TMR2SEL_Pos) /*!< Setting Timer 2 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL1_TMR3SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as HXT */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_PCLK1        (0x2UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL1_TMR3SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL1_TMR3SEL_Pos) /*!< Setting Timer 3 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL1_CLKOSEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL1_CLKOSEL_Pos) /*!< Setting CLKO clock source as HXT */
#define NUMAKER_CLK_CLKSEL1_CLKOSEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL1_CLKOSEL_Pos) /*!< Setting CLKO clock source as LXT */
#define NUMAKER_CLK_CLKSEL1_CLKOSEL_HCLK         (0x2UL << NUMAKER_CLK_CLKSEL1_CLKOSEL_Pos) /*!< Setting CLKO clock source as HCLK */
#define NUMAKER_CLK_CLKSEL1_CLKOSEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL1_CLKOSEL_Pos) /*!< Setting CLKO clock source as HIRC */

#define NUMAKER_CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048 (0x2UL << NUMAKER_CLK_CLKSEL1_WWDTSEL_Pos) /*!< Setting WWDT clock source as HCLK/2048 */
#define NUMAKER_CLK_CLKSEL1_WWDTSEL_LIRC         (0x3UL << NUMAKER_CLK_CLKSEL1_WWDTSEL_Pos) /*!< Setting WWDT clock source as LIRC */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL2 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKSEL2_EPWM0SEL_PCLK0       (0x1UL << NUMAKER_CLK_CLKSEL2_EPWM0SEL_Pos) /*!< Setting EPWM0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL2_EPWM1SEL_PCLK1       (0x1UL << NUMAKER_CLK_CLKSEL2_EPWM1SEL_Pos) /*!< Setting EPWM1 clock source as PCLK1 */

#define NUMAKER_CLK_CLKSEL2_BPWM0SEL_PCLK0       (0x1UL << NUMAKER_CLK_CLKSEL2_BPWM0SEL_Pos) /*!< Setting BPWM0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL2_BPWM1SEL_PCLK1       (0x1UL << NUMAKER_CLK_CLKSEL2_BPWM1SEL_Pos) /*!< Setting BPWM1 clock source as PCLK1 */

#define NUMAKER_CLK_CLKSEL2_QSPI0SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL2_QSPI0SEL_Pos) /*!< Setting QSPI0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_QSPI0SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL2_QSPI0SEL_Pos) /*!< Setting QSPI0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_QSPI0SEL_PCLK0       (0x2UL << NUMAKER_CLK_CLKSEL2_QSPI0SEL_Pos) /*!< Setting QSPI0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL2_QSPI0SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL2_QSPI0SEL_Pos) /*!< Setting QSPI0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL2_SPI0SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL2_SPI0SEL_Pos) /*!< Setting SPI0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_SPI0SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL2_SPI0SEL_Pos) /*!< Setting SPI0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_SPI0SEL_PCLK1        (0x2UL << NUMAKER_CLK_CLKSEL2_SPI0SEL_Pos) /*!< Setting SPI0 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL2_SPI0SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL2_SPI0SEL_Pos) /*!< Setting SPI0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL2_SPI1SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL2_SPI1SEL_Pos) /*!< Setting SPI1 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_SPI1SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL2_SPI1SEL_Pos) /*!< Setting SPI1 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_SPI1SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL2_SPI1SEL_Pos) /*!< Setting SPI1 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL2_SPI1SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL2_SPI1SEL_Pos) /*!< Setting SPI1 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL2_SPI2SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL2_SPI2SEL_Pos) /*!< Setting SPI2 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_SPI2SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL2_SPI2SEL_Pos) /*!< Setting SPI2 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_SPI2SEL_PCLK1        (0x2UL << NUMAKER_CLK_CLKSEL2_SPI2SEL_Pos) /*!< Setting SPI2 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL2_SPI2SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL2_SPI2SEL_Pos) /*!< Setting SPI2 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL2_SPI3SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL2_SPI3SEL_Pos) /*!< Setting SPI3 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_SPI3SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL2_SPI3SEL_Pos) /*!< Setting SPI3 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_SPI3SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL2_SPI3SEL_Pos) /*!< Setting SPI3 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL2_SPI3SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL2_SPI3SEL_Pos) /*!< Setting SPI3 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL2_UART0SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL2_UART0SEL_Pos) /*!< Setting UART0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_UART0SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL2_UART0SEL_Pos) /*!< Setting UART0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_UART0SEL_LXT         (0x2UL << NUMAKER_CLK_CLKSEL2_UART0SEL_Pos) /*!< Setting UART0 clock source as LXT */
#define NUMAKER_CLK_CLKSEL2_UART0SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL2_UART0SEL_Pos) /*!< Setting UART0 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL2_UART0SEL_PCLK0       (0x4UL << NUMAKER_CLK_CLKSEL2_UART0SEL_Pos) /*!< Setting UART0 clock source as PCLK0 */

#define NUMAKER_CLK_CLKSEL2_UART1SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL2_UART1SEL_Pos) /*!< Setting UART1 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_UART1SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL2_UART1SEL_Pos) /*!< Setting UART1 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_UART1SEL_LXT         (0x2UL << NUMAKER_CLK_CLKSEL2_UART1SEL_Pos) /*!< Setting UART1 clock source as LXT */
#define NUMAKER_CLK_CLKSEL2_UART1SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL2_UART1SEL_Pos) /*!< Setting UART1 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL2_UART1SEL_PCLK1       (0x4UL << NUMAKER_CLK_CLKSEL2_UART1SEL_Pos) /*!< Setting UART1 clock source as PCLK1 */

#define NUMAKER_CLK_CLKSEL2_UART2SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL2_UART2SEL_Pos) /*!< Setting UART2 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_UART2SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL2_UART2SEL_Pos) /*!< Setting UART2 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_UART2SEL_LXT         (0x2UL << NUMAKER_CLK_CLKSEL2_UART2SEL_Pos) /*!< Setting UART2 clock source as LXT */
#define NUMAKER_CLK_CLKSEL2_UART2SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL2_UART2SEL_Pos) /*!< Setting UART2 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL2_UART2SEL_PCLK0       (0x4UL << NUMAKER_CLK_CLKSEL2_UART2SEL_Pos) /*!< Setting UART2 clock source as PCLK0 */

#define NUMAKER_CLK_CLKSEL2_UART3SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL2_UART3SEL_Pos) /*!< Setting UART3 clock source as HXT */
#define NUMAKER_CLK_CLKSEL2_UART3SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL2_UART3SEL_Pos) /*!< Setting UART3 clock source as PLL */
#define NUMAKER_CLK_CLKSEL2_UART3SEL_LXT         (0x2UL << NUMAKER_CLK_CLKSEL2_UART3SEL_Pos) /*!< Setting UART3 clock source as LXT */
#define NUMAKER_CLK_CLKSEL2_UART3SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL2_UART3SEL_Pos) /*!< Setting UART3 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL2_UART3SEL_PCLK1       (0x4UL << NUMAKER_CLK_CLKSEL2_UART3SEL_Pos) /*!< Setting UART3 clock source as PCLK1 */



/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL3 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKSEL3_SC0SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL3_SC0SEL_Pos) /*!< Setting SC0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_SC0SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL3_SC0SEL_Pos) /*!< Setting SC0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_SC0SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL3_SC0SEL_Pos) /*!< Setting SC0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL3_SC0SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL3_SC0SEL_Pos) /*!< Setting SC0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_SC1SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL3_SC1SEL_Pos) /*!< Setting SC1 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_SC1SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL3_SC1SEL_Pos) /*!< Setting SC1 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_SC1SEL_PCLK1        (0x2UL << NUMAKER_CLK_CLKSEL3_SC1SEL_Pos) /*!< Setting SC1 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL3_SC1SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL3_SC1SEL_Pos) /*!< Setting SC1 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_SC2SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL3_SC2SEL_Pos) /*!< Setting SC2 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_SC2SEL_PLL          (0x1UL << NUMAKER_CLK_CLKSEL3_SC2SEL_Pos) /*!< Setting SC2 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_SC2SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL3_SC2SEL_Pos) /*!< Setting SC2 clock source as PCLK1 */
#define NUMAKER_CLK_CLKSEL3_SC2SEL_HIRC         (0x3UL << NUMAKER_CLK_CLKSEL3_SC2SEL_Pos) /*!< Setting SC2 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_TMR4SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as LXT */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_MIRC         (0x4UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as MIRC */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL3_TMR4SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL3_TMR4SEL_Pos) /*!< Setting Timer 4 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_TMR5SEL_HXT          (0x0UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_LXT          (0x1UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as LXT */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_PCLK0        (0x2UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_EXT_TRG      (0x3UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as external trigger */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_MIRC         (0x4UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as MIRC */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_LIRC         (0x5UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as LIRC */
#define NUMAKER_CLK_CLKSEL3_TMR5SEL_HIRC         (0x7UL << NUMAKER_CLK_CLKSEL3_TMR5SEL_Pos) /*!< Setting Timer 5 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_I2S0SEL_HXT         (0x0UL << NUMAKER_CLK_CLKSEL3_I2S0SEL_Pos) /*!< Setting I2S0 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_I2S0SEL_PLL         (0x1UL << NUMAKER_CLK_CLKSEL3_I2S0SEL_Pos) /*!< Setting I2S0 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_I2S0SEL_PCLK0       (0x2UL << NUMAKER_CLK_CLKSEL3_I2S0SEL_Pos) /*!< Setting I2S0 clock source as PCLK0 */
#define NUMAKER_CLK_CLKSEL3_I2S0SEL_HIRC        (0x3UL << NUMAKER_CLK_CLKSEL3_I2S0SEL_Pos) /*!< Setting I2S0 clock source as HIRC */

#define NUMAKER_CLK_CLKSEL3_UART4SEL_HXT        (0x0UL << NUMAKER_CLK_CLKSEL3_UART4SEL_Pos) /*!< Setting UART4 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_UART4SEL_PLL        (0x1UL << NUMAKER_CLK_CLKSEL3_UART4SEL_Pos) /*!< Setting UART4 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_UART4SEL_LXT        (0x2UL << NUMAKER_CLK_CLKSEL3_UART4SEL_Pos) /*!< Setting UART4 clock source as LXT */
#define NUMAKER_CLK_CLKSEL3_UART4SEL_HIRC       (0x3UL << NUMAKER_CLK_CLKSEL3_UART4SEL_Pos) /*!< Setting UART4 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL3_UART4SEL_PCLK0       (0x4UL << NUMAKER_CLK_CLKSEL3_UART4SEL_Pos) /*!< Setting UART4 clock source as PCLK0 */

#define NUMAKER_CLK_CLKSEL3_UART5SEL_HXT        (0x0UL << NUMAKER_CLK_CLKSEL3_UART5SEL_Pos) /*!< Setting UART5 clock source as HXT */
#define NUMAKER_CLK_CLKSEL3_UART5SEL_PLL        (0x1UL << NUMAKER_CLK_CLKSEL3_UART5SEL_Pos) /*!< Setting UART5 clock source as PLL */
#define NUMAKER_CLK_CLKSEL3_UART5SEL_LXT        (0x2UL << NUMAKER_CLK_CLKSEL3_UART5SEL_Pos) /*!< Setting UART5 clock source as LXT */
#define NUMAKER_CLK_CLKSEL3_UART5SEL_HIRC       (0x3UL << NUMAKER_CLK_CLKSEL3_UART5SEL_Pos) /*!< Setting UART5 clock source as HIRC */
#define NUMAKER_CLK_CLKSEL3_UART5SEL_PCLK1      (0x4UL << NUMAKER_CLK_CLKSEL3_UART5SEL_Pos) /*!< Setting UART5 clock source as PCLK1 */

#define RTC_LXTCTL_RTCCKSEL_LXT         (0x0UL<<RTC_LXTCTL_RTCCKSEL_Pos)  /*!< Setting RTC clock source as LXT */
#define RTC_LXTCTL_RTCCKSEL_LIRC        (0x1UL<<RTC_LXTCTL_RTCCKSEL_Pos)  /*!< Setting RTC clock source as LIRC */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKDIV0_HCLK(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV0_HCLKDIV_Pos)  /*!< CLKDIV0 Setting for HCLK clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV0_USB(x)      (((x)-1UL) << NUMAKER_CLK_CLKDIV0_USBDIV_Pos)   /*!< CLKDIV0 Setting for USB clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV0_UART0(x)    (((x)-1UL) << NUMAKER_CLK_CLKDIV0_UART0DIV_Pos) /*!< CLKDIV0 Setting for UART0 clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV0_UART1(x)    (((x)-1UL) << NUMAKER_CLK_CLKDIV0_UART1DIV_Pos) /*!< CLKDIV0 Setting for UART1 clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV0_EADC(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV0_EADCDIV_Pos)  /*!< CLKDIV0 Setting for EADC clock divider. It could be 1~256 */
#define NUMAKER_CLK_CLKDIV0_SDH0(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV0_SDH0DIV_Pos)  /*!< CLKDIV0 Setting for SDH0 clock divider. It could be 1~256 */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKDIV1_SC0(x)      (((x)-1UL) << NUMAKER_CLK_CLKDIV1_SC0DIV_Pos)  /*!< CLKDIV1 Setting for SC0 clock divider. It could be 1~256 */
#define NUMAKER_CLK_CLKDIV1_SC1(x)      (((x)-1UL) << NUMAKER_CLK_CLKDIV1_SC1DIV_Pos)  /*!< CLKDIV1 Setting for SC1 clock divider. It could be 1~256 */
#define NUMAKER_CLK_CLKDIV1_SC2(x)      (((x)-1UL) << NUMAKER_CLK_CLKDIV1_SC2DIV_Pos)  /*!< CLKDIV1 Setting for SC2 clock divider. It could be 1~256 */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV4 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define NUMAKER_CLK_CLKDIV4_UART2(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV4_UART2DIV_Pos)  /*!< CLKDIV4 Setting for UART2 clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV4_UART3(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV4_UART3DIV_Pos)  /*!< CLKDIV4 Setting for UART3 clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV4_UART4(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV4_UART4DIV_Pos)  /*!< CLKDIV4 Setting for UART4 clock divider. It could be 1~16 */
#define NUMAKER_CLK_CLKDIV4_UART5(x)     (((x)-1UL) << NUMAKER_CLK_CLKDIV4_UART5DIV_Pos)  /*!< CLKDIV4 Setting for UART5 clock divider. It could be 1~16 */

/*---------------------------------------------------------------------------------------------------------*/
/*  MODULE constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
/* APBCLK(31:30)|CLKSEL(29:28)|CLKSEL_Msk(27:25) |CLKSEL_Pos(24:20)|CLKDIV(19:18)|CLKDIV_Msk(17:10)|CLKDIV_Pos(9:5)|IP_EN_Pos(4:0) */
#define NUMAKER_MODULE_NoMsk            0x0UL                   /*!< Not mask on MODULE index */
#define NUMAKER_NA                      NUMAKER_MODULE_NoMsk            /*!< Not Available */


#define NUMAKER_MODULE_APBCLK(x)        (((x) >>30) & 0x3UL)    /*!< Calculate AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1 */
#define NUMAKER_MODULE_CLKSEL(x)        (((x) >>28) & 0x3UL)    /*!< Calculate CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 */
#define NUMAKER_MODULE_CLKSEL_Msk(x)    (((x) >>25) & 0x7UL)    /*!< Calculate CLKSEL mask offset on MODULE index */
#define NUMAKER_MODULE_CLKSEL_Pos(x)    (((x) >>20) & 0x1fUL)   /*!< Calculate CLKSEL position offset on MODULE index */
#define NUMAKER_MODULE_CLKDIV(x)        (((x) >>18) & 0x3UL)    /*!< Calculate APBCLK CLKDIV on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV1, 0x4:CLKDIV4 */
#define NUMAKER_MODULE_CLKDIV_Msk(x)    (((x) >>10) & 0xffUL)   /*!< Calculate CLKDIV mask offset on MODULE index */
#define NUMAKER_MODULE_CLKDIV_Pos(x)    (((x) >>5 ) & 0x1fUL)   /*!< Calculate CLKDIV position offset on MODULE index */
#define NUMAKER_MODULE_IP_EN_Pos(x)     (((x) >>0 ) & 0x1fUL)   /*!< Calculate APBCLK offset on MODULE index */

#define NUMAKER_MODULE_APBCLK_ENC(x)        (((x) & 0x03UL) << 30)   /*!< MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1 */
#define NUMAKER_MODULE_CLKSEL_ENC(x)        (((x) & 0x03UL) << 28)   /*!< CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 */
#define NUMAKER_MODULE_CLKSEL_Msk_ENC(x)    (((x) & 0x07UL) << 25)   /*!< CLKSEL mask offset on MODULE index */
#define NUMAKER_MODULE_CLKSEL_Pos_ENC(x)    (((x) & 0x1fUL) << 20)   /*!< CLKSEL position offset on MODULE index */
#define NUMAKER_MODULE_CLKDIV_ENC(x)        (((x) & 0x03UL) << 18)   /*!< APBCLK CLKDIV on MODULE index, 0x0:CLKDIV, 0x1:CLKDIV1, 0x4:CLKDIV4 */
#define NUMAKER_MODULE_CLKDIV_Msk_ENC(x)    (((x) & 0xffUL) << 10)   /*!< CLKDIV mask offset on MODULE index */
#define NUMAKER_MODULE_CLKDIV_Pos_ENC(x)    (((x) & 0x1fUL) <<  5)   /*!< CLKDIV position offset on MODULE index */
#define NUMAKER_MODULE_IP_EN_Pos_ENC(x)     (((x) & 0x1fUL) <<  0)   /*!< AHBCLK/APBCLK offset on MODULE index */


/* AHBCLK */
#define NUMAKER_PDMA0_MODULE   \
	(NUMAKER_MODULE_APBCLK_ENC(0UL) | \
	 NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_PDMA0CKEN_Pos) | \
     	 NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA) | NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA) | \
	 NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA) | NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA) | \
	 NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA) | NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< PDMA0 Module */

#define NUMAKER_PDMA1_MODULE   \
	(NUMAKER_MODULE_APBCLK_ENC(0UL) | \
	 NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_PDMA1CKEN_Pos)|\
         NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
         NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< PDMA1 Module */

#define NUMAKER_ISP_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_ISPCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< ISP Module */

#define NUMAKER_EBI_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_EBICKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< EBI Module */

#define NUMAKER_EXST_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_EXSTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< EXST Module */

#define NUMAKER_SDH0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_SDH0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 0UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(20UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(24UL))/*!< SDH0 Module */

#define NUMAKER_CRC_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_CRCCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC( NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))       /*!< CRC Module */

#define NUMAKER_CRPT_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_CRPTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< CRPT Module */

#define NUMAKER_KS_MODULE	\
      (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_KSCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< KS Module */

#define NUMAKER_TRACE_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_TRACECKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< TRACE Module */

#define NUMAKER_FMCIDLE_MODULE	\
 (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_FMCIDLE_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< FMCIDLE Module */

#define NUMAKER_USBH_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_USBHCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 0UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(  1UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 4UL))  /*!< USBH Module */

#define NUMAKER_SRAM0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_SRAM0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< SRAM0 Module */

#define NUMAKER_SRAM1_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_SRAM1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< SRAM1 Module */

#define NUMAKER_SRAM2_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_SRAM2CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< SRAM2 Module */

#define NUMAKER_GPA_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPACKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPA Module */

#define NUMAKER_GPB_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPBCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPB Module */

#define NUMAKER_GPC_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPCCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPC Module */

#define NUMAKER_GPD_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPDCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPD Module */

#define NUMAKER_GPE_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPECKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPE Module */

#define NUMAKER_GPF_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPFCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPF Module */

#define NUMAKER_GPG_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPGCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPG Module */

#define NUMAKER_GPH_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 0UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_AHBCLK_GPHCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< GPH Module */

/* APBCLK0 */
#define NUMAKER_WDT_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_WDTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 0UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC( NA))    /*!< WDT Module */

#define NUMAKER_WWDT_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_WDTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(30UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))     /*!< WWDT Module */

#define NUMAKER_RTC_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_RTCCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC( NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC( NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC( NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))       /*!< RTC Module */

#define NUMAKER_TMR0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_TMR0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< TMR0 Module */

#define NUMAKER_TMR1_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_TMR1CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(12UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR1 Module */

#define NUMAKER_TMR2_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_TMR2CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(16UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(    NA))    /*!< TMR2 Module */

#define NUMAKER_TMR3_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_TMR3CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(20UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR3 Module */

#define NUMAKER_TMR4_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_TMR4CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(8UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR4 Module */

#define NUMAKER_TMR5_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_TMR5CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(12UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR5 Module */

#define NUMAKER_CLKO_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_CLKOCKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(28UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(   NA))     /*!< CLKO Module */

#define NUMAKER_ACMP01_MODULE	\
  (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_ACMP01CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))        /*!< ACMP01 Module */

#define NUMAKER_I2C0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_I2C0CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))        /*!< I2C0 Module */

#define NUMAKER_I2C1_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_I2C1CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))        /*!< I2C1 Module */

#define NUMAKER_I2C2_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_I2C2CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))        /*!< I2C2 Module */

#define NUMAKER_QSPI0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_QSPI0CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 2UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< QSPI0 Module */

#define NUMAKER_SPI0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC(1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_SPI0CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC(2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 4UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))     /*!< SPI0 Module */

#define NUMAKER_SPI1_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_SPI1CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 6UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< SPI1 Module */

#define NUMAKER_SPI2_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_SPI2CKEN_Pos) |\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(10UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< SPI2 Module */

#define NUMAKER_UART0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(16UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 8UL))  /*!< UART0 Module */

#define NUMAKER_UART1_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(20UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(12UL))  /*!< UART1 Module */

#define NUMAKER_UART2_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART2CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(24UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 3UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 0UL))  /*!< UART2 Module */

#define NUMAKER_UART3_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART3CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(28UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 3UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 4UL))  /*!< UART3 Module */

#define NUMAKER_UART4_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART4CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(24UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 3UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 8UL))  /*!< UART4 Module */

#define NUMAKER_UART5_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_UART5CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(   7UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(28UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 3UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(12UL))  /*!< UART5 Module */

#define NUMAKER_TAMPER_MODULE	\
  (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_TAMPERCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< TAMPER Module */

#define NUMAKER_CAN0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_CAN0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))        /*!< CAN0 Module */

#define NUMAKER_OTG_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_OTGCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 0UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(  1UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 4UL))  /*!< OTG Module */

#define NUMAKER_USBD_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_USBDCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 0UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(  1UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0x0FUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(4UL))   /*!< USBD Module */

#define NUMAKER_EADC_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_EADCCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(    NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 0UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(16UL))  /*!< EADC Module */

#define NUMAKER_I2S0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_I2S0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(16UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(   NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))    /*!< I2S0 Module */

#define NUMAKER_EWDT_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_EWDTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 4UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC( NA))     /*!< EWDT Module */

#define NUMAKER_EWWDT_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 1UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK0_EWDTCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 6UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< EWWDT Module */


/* APBCLK1 */
#define NUMAKER_SC0_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_SC0CKEN_Pos)  |\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 0UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 1UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 0UL))    /*!< SC0 Module */

#define NUMAKER_SC1_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_SC1CKEN_Pos)  |\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 2UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 1UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC( 8UL))    /*!< SC1 Module */

#define NUMAKER_SC2_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_SC2CKEN_Pos)  |\
                        NUMAKER_MODULE_CLKSEL_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC( 4UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC( 1UL)|NUMAKER_MODULE_CLKDIV_Msk_ENC(0xFFUL)|NUMAKER_MODULE_CLKDIV_Pos_ENC(16UL))    /*!< SC2 Module */

#define NUMAKER_SPI3_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_SPI3CKEN_Pos)  |\
                        NUMAKER_MODULE_CLKSEL_ENC( 2UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC( 3UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(12UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< SPI3 Module */

#define NUMAKER_USCI0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_USCI0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< USCI0 Module */

#define NUMAKER_USCI1_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_USCI1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< USCI1 Module */

#define NUMAKER_DAC_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_DACCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< DAC Module */

#define NUMAKER_EPWM0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_EPWM0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< EPWM0 Module */

#define NUMAKER_EPWM1_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_EPWM1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< EPWM1 Module */

#define NUMAKER_BPWM0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_BPWM0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< BPWM0 Module */

#define NUMAKER_BPWM1_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_BPWM1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< BPWM1 Module */

#define NUMAKER_QEI0_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_QEI0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< QEI0 Module */

#define NUMAKER_QEI1_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_QEI1CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< QEI1 Module */

#define NUMAKER_LCD_MODULE	\
     (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_LCDCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(1UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(2UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< LCD Module */

#define NUMAKER_LCDCP_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_LCDCPCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC( 1UL)|NUMAKER_MODULE_CLKSEL_Msk_ENC(1UL)|NUMAKER_MODULE_CLKSEL_Pos_ENC(3UL)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< LCDCP Module */

#define NUMAKER_TRNG_MODULE	\
    (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_TRNGCKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< TRNG Module */

#define NUMAKER_ECAP0_MODULE	\
   (NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_ECAP0CKEN_Pos)|\
                        NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
                        NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< ECAP0 Module */

#define NUMAKER_ECAP1_MODULE	\
   	(NUMAKER_MODULE_APBCLK_ENC( 2UL)|NUMAKER_MODULE_IP_EN_Pos_ENC(NUMAKER_CLK_APBCLK1_ECAP1CKEN_Pos)|\
	 NUMAKER_MODULE_CLKSEL_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKSEL_Pos_ENC(NUMAKER_NA)|\
         NUMAKER_MODULE_CLKDIV_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Msk_ENC(NUMAKER_NA)|NUMAKER_MODULE_CLKDIV_Pos_ENC(NUMAKER_NA))      /*!< ECAP1 Module */

/* End of M2354 BSP clk.h copy */

#endif
