/*
 * Copyright (c) 2023 Nuvoton Technology Corporation.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_NUMAKER_M2354_PINCTRL_H
#define ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_NUMAKER_M2354_PINCTRL_H

/* Beginning of M2354 BSP sys_reg.h pin-mux module copy */

#define NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPL: PA0MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPL: PA1MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFPL: PA2MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos          (12)                                              /*!< SYS_T::GPA_MFPL: PA3MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos          (16)                                              /*!< SYS_T::GPA_MFPL: PA4MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos          (20)                                              /*!< SYS_T::GPA_MFPL: PA5MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos          (24)                                              /*!< SYS_T::GPA_MFPL: PA6MFP Position       */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos          (28)                                              /*!< SYS_T::GPA_MFPL: PA7MFP Position       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFPH: PA8MFP Position       */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos          (4)                                               /*!< SYS_T::GPA_MFPH: PA9MFP Position       */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos         (8)                                               /*!< SYS_T::GPA_MFPH: PA10MFP Position      */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos         (12)                                              /*!< SYS_T::GPA_MFPH: PA11MFP Position      */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos         (16)                                              /*!< SYS_T::GPA_MFPH: PA12MFP Position      */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos         (20)                                              /*!< SYS_T::GPA_MFPH: PA13MFP Position      */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos         (24)                                              /*!< SYS_T::GPA_MFPH: PA14MFP Position      */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos         (28)                                              /*!< SYS_T::GPA_MFPH: PA15MFP Position      */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPL: PB0MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPL: PB1MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFPL: PB2MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos          (12)                                              /*!< SYS_T::GPB_MFPL: PB3MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos          (16)                                              /*!< SYS_T::GPB_MFPL: PB4MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos          (20)                                              /*!< SYS_T::GPB_MFPL: PB5MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos          (24)                                              /*!< SYS_T::GPB_MFPL: PB6MFP Position       */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos          (28)                                              /*!< SYS_T::GPB_MFPL: PB7MFP Position       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFPH: PB8MFP Position       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos          (4)                                               /*!< SYS_T::GPB_MFPH: PB9MFP Position       */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos         (8)                                               /*!< SYS_T::GPB_MFPH: PB10MFP Position      */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos         (12)                                              /*!< SYS_T::GPB_MFPH: PB11MFP Position      */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos         (16)                                              /*!< SYS_T::GPB_MFPH: PB12MFP Position      */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos         (20)                                              /*!< SYS_T::GPB_MFPH: PB13MFP Position      */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos         (24)                                              /*!< SYS_T::GPB_MFPH: PB14MFP Position      */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos         (28)                                              /*!< SYS_T::GPB_MFPH: PB15MFP Position      */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFPL: PC0MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos          (4)                                               /*!< SYS_T::GPC_MFPL: PC1MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFPL: PC2MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos          (12)                                              /*!< SYS_T::GPC_MFPL: PC3MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos          (16)                                              /*!< SYS_T::GPC_MFPL: PC4MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos          (20)                                              /*!< SYS_T::GPC_MFPL: PC5MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos          (24)                                              /*!< SYS_T::GPC_MFPL: PC6MFP Position       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos          (28)                                              /*!< SYS_T::GPC_MFPL: PC7MFP Position       */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFPH: PC8MFP Position       */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos          (4)                                               /*!< SYS_T::GPC_MFPH: PC9MFP Position       */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos         (8)                                               /*!< SYS_T::GPC_MFPH: PC10MFP Position      */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos         (12)                                              /*!< SYS_T::GPC_MFPH: PC11MFP Position      */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos         (16)                                              /*!< SYS_T::GPC_MFPH: PC12MFP Position      */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos         (20)                                              /*!< SYS_T::GPC_MFPH: PC13MFP Position      */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFPL: PD0MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos          (4)                                               /*!< SYS_T::GPD_MFPL: PD1MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFPL: PD2MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos          (12)                                              /*!< SYS_T::GPD_MFPL: PD3MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos          (16)                                              /*!< SYS_T::GPD_MFPL: PD4MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos          (20)                                              /*!< SYS_T::GPD_MFPL: PD5MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos          (24)                                              /*!< SYS_T::GPD_MFPL: PD6MFP Position       */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos          (28)                                              /*!< SYS_T::GPD_MFPL: PD7MFP Position       */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFPH: PD8MFP Position       */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos          (4)                                               /*!< SYS_T::GPD_MFPH: PD9MFP Position       */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos         (8)                                               /*!< SYS_T::GPD_MFPH: PD10MFP Position      */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos         (12)                                              /*!< SYS_T::GPD_MFPH: PD11MFP Position      */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos         (16)                                              /*!< SYS_T::GPD_MFPH: PD12MFP Position      */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos         (24)                                              /*!< SYS_T::GPD_MFPH: PD14MFP Position      */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFPL: PE0MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos          (4)                                               /*!< SYS_T::GPE_MFPL: PE1MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos          (8)                                               /*!< SYS_T::GPE_MFPL: PE2MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos          (12)                                              /*!< SYS_T::GPE_MFPL: PE3MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos          (16)                                              /*!< SYS_T::GPE_MFPL: PE4MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos          (20)                                              /*!< SYS_T::GPE_MFPL: PE5MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos          (24)                                              /*!< SYS_T::GPE_MFPL: PE6MFP Position       */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos          (28)                                              /*!< SYS_T::GPE_MFPL: PE7MFP Position       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFPH: PE8MFP Position       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos          (4)                                               /*!< SYS_T::GPE_MFPH: PE9MFP Position       */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos         (8)                                               /*!< SYS_T::GPE_MFPH: PE10MFP Position      */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos         (12)                                              /*!< SYS_T::GPE_MFPH: PE11MFP Position      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos         (16)                                              /*!< SYS_T::GPE_MFPH: PE12MFP Position      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos         (20)                                              /*!< SYS_T::GPE_MFPH: PE13MFP Position      */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos         (24)                                              /*!< SYS_T::GPE_MFPH: PE14MFP Position      */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos         (28)                                              /*!< SYS_T::GPE_MFPH: PE15MFP Position      */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFPL: PF0MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos          (4)                                               /*!< SYS_T::GPF_MFPL: PF1MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFPL: PF2MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos          (12)                                              /*!< SYS_T::GPF_MFPL: PF3MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos          (16)                                              /*!< SYS_T::GPF_MFPL: PF4MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos          (20)                                              /*!< SYS_T::GPF_MFPL: PF5MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos          (24)                                              /*!< SYS_T::GPF_MFPL: PF6MFP Position       */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos          (28)                                              /*!< SYS_T::GPF_MFPL: PF7MFP Position       */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFPH: PF8MFP Position       */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos          (4)                                               /*!< SYS_T::GPF_MFPH: PF9MFP Position       */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos         (8)                                               /*!< SYS_T::GPF_MFPH: PF10MFP Position      */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos         (12)                                              /*!< SYS_T::GPF_MFPH: PF11MFP Position      */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos          (8)                                               /*!< SYS_T::GPG_MFPL: PG2MFP Position       */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos          (12)                                              /*!< SYS_T::GPG_MFPL: PG3MFP Position       */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos          (16)                                              /*!< SYS_T::GPG_MFPL: PG4MFP Position       */
#define NUMAKER_SYS_GPG_MFPH_PG9MFP_Pos          (4)                                               /*!< SYS_T::GPG_MFPH: PG9MFP Position       */
#define NUMAKER_SYS_GPG_MFPH_PG10MFP_Pos         (8)                                               /*!< SYS_T::GPG_MFPH: PG10MFP Position      */
#define NUMAKER_SYS_GPG_MFPH_PG11MFP_Pos         (12)                                              /*!< SYS_T::GPG_MFPH: PG11MFP Position      */
#define NUMAKER_SYS_GPG_MFPH_PG12MFP_Pos         (16)                                              /*!< SYS_T::GPG_MFPH: PG12MFP Position      */
#define NUMAKER_SYS_GPG_MFPH_PG13MFP_Pos         (20)                                              /*!< SYS_T::GPG_MFPH: PG13MFP Position      */
#define NUMAKER_SYS_GPG_MFPH_PG14MFP_Pos         (24)                                              /*!< SYS_T::GPG_MFPH: PG14MFP Position      */
#define NUMAKER_SYS_GPG_MFPH_PG15MFP_Pos         (28)                                              /*!< SYS_T::GPG_MFPH: PG15MFP Position      */
#define NUMAKER_SYS_GPH_MFPL_PH4MFP_Pos          (16)                                              /*!< SYS_T::GPH_MFPL: PH4MFP Position       */
#define NUMAKER_SYS_GPH_MFPL_PH5MFP_Pos          (20)                                              /*!< SYS_T::GPH_MFPL: PH5MFP Position       */
#define NUMAKER_SYS_GPH_MFPL_PH6MFP_Pos          (24)                                              /*!< SYS_T::GPH_MFPL: PH6MFP Position       */
#define NUMAKER_SYS_GPH_MFPL_PH7MFP_Pos          (28)                                              /*!< SYS_T::GPH_MFPL: PH7MFP Position       */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFPH: PH8MFP Position       */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos          (4)                                               /*!< SYS_T::GPH_MFPH: PH9MFP Position       */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos         (8)                                               /*!< SYS_T::GPH_MFPH: PH10MFP Position      */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos         (12)                                              /*!< SYS_T::GPH_MFPH: PH11MFP Position      */

/* End of M2354 BSP sys_reg.h pin-mux module copy */



/* Beginning of M2354 BSP sys.h pin-mux module copy */

/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/

/* How to use below #define?

Example: If user want to set PA.1 as UART0_TXD and PA.0 as UART0_RXD in initial function,
         user can issue following command to achieve it.

    SYS->GPA_MFPL = (SYS->GPA_MFPL & (~SYS_GPA_MFPL_PA0MFP_Msk)) | SYS_GPA_MFPL_PA0MFP_UART0_RXD;
    SYS->GPA_MFPL = (SYS->GPA_MFPL & (~SYS_GPA_MFPL_PA1MFP_Msk)) | SYS_GPA_MFPL_PA1MFP_UART0_TXD;
*/


/* PA.0 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_QSPI0_MOSI0     (0x3UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for QSPI0_MOSI0     */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_SPI0_MOSI       (0x4UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for SPI0_MOSI       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_LCD_COM6        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for LCD_COM6        */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_LCD_SEG14       (0x5UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for LCD_SEG14       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_SC0_CLK         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for SC0_CLK         */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_UART0_RXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for UART0_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_UART1_nRTS      (0x8UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for UART1_nRTS      */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_I2C2_SDA        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for I2C2_SDA        */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_LCD_SEG24       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for LCD_SEG24       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_BPWM0_CH0       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for BPWM0_CH0       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_EPWM0_CH5       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for EPWM0_CH5       */
#define NUMAKER_SYS_GPA_MFPL_PA0MFP_DAC0_ST         (0xFUL << NUMAKER_SYS_GPA_MFPL_PA0MFP_Pos)    /*!< GPA_MFPL PA0 setting for DAC0_ST         */

/* PA.1 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_QSPI0_MISO0     (0x3UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for QSPI0_MISO0     */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_SPI0_MISO       (0x4UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for SPI0_MISO       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_LCD_COM7        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for LCD_COM7        */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_LCD_SEG13       (0x5UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for LCD_SEG13       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_SC0_DAT         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for SC0_DAT         */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_UART0_TXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for UART0_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_UART1_nCTS      (0x8UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for UART1_nCTS      */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_I2C2_SCL        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for I2C2_SCL        */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_LCD_SEG25       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for LCD_SEG25       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_BPWM0_CH1       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for BPWM0_CH1       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_EPWM0_CH4       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for EPWM0_CH4       */
#define NUMAKER_SYS_GPA_MFPL_PA1MFP_DAC1_ST         (0xFUL << NUMAKER_SYS_GPA_MFPL_PA1MFP_Pos)    /*!< GPA_MFPL PA1 setting for DAC1_ST         */

/* PA.2 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_QSPI0_CLK       (0x3UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for QSPI0_CLK       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_SPI0_CLK        (0x4UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for SPI0_CLK        */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_LCD_SEG3        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for LCD_SEG3        */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_SC0_RST         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for SC0_RST         */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_UART4_RXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for UART4_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_UART1_RXD       (0x8UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for UART1_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_I2C1_SDA        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_I2C0_SMBSUS     (0xAUL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for I2C0_SMBSUS     */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_LCD_SEG26       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for LCD_SEG26       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_BPWM0_CH2       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for BPWM0_CH2       */
#define NUMAKER_SYS_GPA_MFPL_PA2MFP_EPWM0_CH3       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA2MFP_Pos)    /*!< GPA_MFPL PA2 setting for EPWM0_CH3       */

/* PA.3 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_QSPI0_SS        (0x3UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for QSPI0_SS        */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_SPI0_SS         (0x4UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for SPI0_SS         */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_LCD_SEG4        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for LCD_SEG4        */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_SC0_PWR         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for SC0_PWR         */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_UART4_TXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for UART4_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_UART1_TXD       (0x8UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for UART1_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_I2C1_SCL        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_I2C0_SMBAL      (0xAUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for I2C0_SMBAL      */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_LCD_SEG27       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for LCD_SEG27       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_BPWM0_CH3       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for BPWM0_CH3       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_EPWM0_CH2       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for EPWM0_CH2       */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_QEI0_B          (0xEUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for QEI0_B          */
#define NUMAKER_SYS_GPA_MFPL_PA3MFP_EPWM1_BRAKE1    (0xFUL << NUMAKER_SYS_GPA_MFPL_PA3MFP_Pos)    /*!< GPA_MFPL PA3 setting for EPWM1_BRAKE1    */

/* PA.4 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_QSPI0_MOSI1     (0x3UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for QSPI0_MOSI1     */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_SPI0_I2SMCLK    (0x4UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for SPI0_I2SMCLK    */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_LCD_SEG5        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for LCD_SEG5        */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_SC0_nCD         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for SC0_nCD         */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_UART0_nRTS      (0x7UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for UART0_nRTS      */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_UART5_RXD       (0x8UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for UART5_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_I2C0_SDA        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_CAN0_RXD        (0xAUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for CAN0_RXD        */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_UART0_RXD       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for UART0_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_BPWM0_CH4       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for BPWM0_CH4       */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_EPWM0_CH1       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for EPWM0_CH1       */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_QEI0_A          (0xEUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for QEI0_A          */
#define NUMAKER_SYS_GPA_MFPL_PA4MFP_LCD_SEG28       (0xFUL << NUMAKER_SYS_GPA_MFPL_PA4MFP_Pos)    /*!< GPA_MFPL PA4 setting for LCD_SEG28       */

/* PA.5 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_QSPI0_MISO1     (0x3UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for QSPI0_MISO1     */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_SPI1_I2SMCLK    (0x4UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for SPI1_I2SMCLK    */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_LCD_SEG6        (0x5UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for LCD_SEG6        */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_SC2_nCD         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for SC2_nCD         */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_UART0_nCTS      (0x7UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for UART0_nCTS      */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_UART5_TXD       (0x8UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for UART5_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_I2C0_SCL        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_CAN0_TXD        (0xAUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for CAN0_TXD        */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_UART0_TXD       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for UART0_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_BPWM0_CH5       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for BPWM0_CH5       */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_EPWM0_CH0       (0xDUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for EPWM0_CH0       */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_QEI0_INDEX      (0xEUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for QEI0_INDEX      */
#define NUMAKER_SYS_GPA_MFPL_PA5MFP_LCD_SEG29       (0xFUL << NUMAKER_SYS_GPA_MFPL_PA5MFP_Pos)    /*!< GPA_MFPL PA5 setting for LCD_SEG29       */

/* PA.6 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_EBI_AD6         (0x2UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for EBI_AD6         */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_SPI1_SS         (0x4UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for SPI1_SS         */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_SC2_CLK         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for SC2_CLK         */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_UART0_RXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for UART0_RXD       */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_I2C1_SDA        (0x8UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_LCD_SEG7        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for LCD_SEG7        */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_TM5             (0xAUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for TM5             */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_EPWM1_CH5       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for EPWM1_CH5       */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_BPWM1_CH3       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for BPWM1_CH3       */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_ACMP1_WLAT      (0xDUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for ACMP1_WLAT      */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_TM3             (0xEUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for TM3             */
#define NUMAKER_SYS_GPA_MFPL_PA6MFP_INT0            (0xFUL << NUMAKER_SYS_GPA_MFPL_PA6MFP_Pos)    /*!< GPA_MFPL PA6 setting for INT0            */

/* PA.7 MFP */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_EBI_AD7         (0x2UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for EBI_AD7         */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_SPI1_CLK        (0x4UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_SC2_DAT         (0x6UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for SC2_DAT         */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_UART0_TXD       (0x7UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for UART0_TXD       */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_I2C1_SCL        (0x8UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_LCD_SEG8        (0x9UL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for LCD_SEG8        */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_TM4             (0xAUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for TM4             */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_EPWM1_CH4       (0xBUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for EPWM1_CH4       */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_BPWM1_CH2       (0xCUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for BPWM1_CH2       */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_ACMP0_WLAT      (0xDUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for ACMP0_WLAT      */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_TM2             (0xEUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for TM2             */
#define NUMAKER_SYS_GPA_MFPL_PA7MFP_INT1            (0xFUL << NUMAKER_SYS_GPA_MFPL_PA7MFP_Pos)    /*!< GPA_MFPL PA7 setting for INT1            */

/* PA.8 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_EBI_ALE         (0x2UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for EBI_ALE         */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_SC2_CLK         (0x3UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for SC2_CLK         */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_SPI2_MOSI       (0x4UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for SPI2_MOSI       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_USCI0_CTL1      (0x6UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for USCI0_CTL1      */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_UART1_RXD       (0x7UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for UART1_RXD       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_BPWM0_CH3       (0x9UL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for BPWM0_CH3       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_QEI1_B          (0xAUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for QEI1_B          */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_ECAP0_IC2       (0xBUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for ECAP0_IC2       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_TM5_EXT         (0xCUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for TM5_EXT         */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_TM3_EXT         (0xDUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for TM3_EXT         */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_LCD_SEG11       (0xEUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for LCD_SEG11       */
#define NUMAKER_SYS_GPA_MFPH_PA8MFP_INT4            (0xFUL << NUMAKER_SYS_GPA_MFPH_PA8MFP_Pos)    /*!< GPA_MFPH PA8 setting for INT4            */

/* PA.9 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for GPIO            */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_EBI_MCLK        (0x2UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for EBI_MCLK        */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_SC2_DAT         (0x3UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for SC2_DAT         */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_SPI2_MISO       (0x4UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for SPI2_MISO       */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_USCI0_DAT1      (0x6UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for USCI0_DAT1      */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_UART1_TXD       (0x7UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for UART1_TXD       */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_BPWM0_CH2       (0x9UL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for BPWM0_CH2       */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_QEI1_A          (0xAUL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for QEI1_A          */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_ECAP0_IC1       (0xBUL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for ECAP0_IC1       */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_TM4_EXT         (0xCUL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for TM4_EXT         */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_TM2_EXT         (0xDUL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for TM2_EXT         */
#define NUMAKER_SYS_GPA_MFPH_PA9MFP_LCD_SEG12       (0xEUL << NUMAKER_SYS_GPA_MFPH_PA9MFP_Pos)    /*!< GPA_MFPH PA9 setting for LCD_SEG12       */

/* PA.10 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_ACMP1_P0       (0x1UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for ACMP1_P0       */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_EBI_nWR        (0x2UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for EBI_nWR        */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_SC2_RST        (0x3UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for SC2_RST        */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_SPI2_CLK       (0x4UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for SPI2_CLK       */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_USCI0_DAT0     (0x6UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for USCI0_DAT0     */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_I2C2_SDA       (0x7UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for I2C2_SDA       */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_BPWM0_CH1      (0x9UL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for BPWM0_CH1      */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_QEI1_INDEX     (0xAUL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for QEI1_INDEX     */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_ECAP0_IC0      (0xBUL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for ECAP0_IC0      */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_TM1_EXT        (0xDUL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for TM1_EXT        */
#define NUMAKER_SYS_GPA_MFPH_PA10MFP_DAC0_ST        (0xEUL << NUMAKER_SYS_GPA_MFPH_PA10MFP_Pos)   /*!< GPA_MFPH PA10 setting for DAC0_ST        */

/* PA.11 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_ACMP0_P0       (0x1UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for ACMP0_P0       */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_EBI_nRD        (0x2UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for EBI_nRD        */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_SC2_PWR        (0x3UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for SC2_PWR        */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_SPI2_SS        (0x4UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for SPI2_SS        */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_USCI0_CLK      (0x6UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for USCI0_CLK      */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_I2C2_SCL       (0x7UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for I2C2_SCL       */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_BPWM0_CH0      (0x9UL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for BPWM0_CH0      */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_EPWM0_SYNC_OUT (0xAUL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for EPWM0_SYNC_OUT */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_TM0_EXT        (0xDUL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for TM0_EXT        */
#define NUMAKER_SYS_GPA_MFPH_PA11MFP_DAC1_ST        (0xEUL << NUMAKER_SYS_GPA_MFPH_PA11MFP_Pos)   /*!< GPA_MFPH PA11 setting for DAC1_ST        */

/* PA.12 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_I2S0_BCLK      (0x2UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for I2S0_BCLK      */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_UART4_TXD      (0x3UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for UART4_TXD      */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_I2C1_SCL       (0x4UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for I2C1_SCL       */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_SPI2_SS        (0x5UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for SPI2_SS        */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_CAN0_TXD       (0x6UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for CAN0_TXD       */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_SC2_PWR        (0x7UL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for SC2_PWR        */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_BPWM1_CH2      (0xBUL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for BPWM1_CH2      */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_QEI1_INDEX     (0xCUL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for QEI1_INDEX     */
#define NUMAKER_SYS_GPA_MFPH_PA12MFP_USB_VBUS       (0xEUL << NUMAKER_SYS_GPA_MFPH_PA12MFP_Pos)   /*!< GPA_MFPH PA12 setting for USB_VBUS       */

/* PA.13 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_I2S0_MCLK      (0x2UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for I2S0_MCLK      */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_UART4_RXD      (0x3UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for UART4_RXD      */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_I2C1_SDA       (0x4UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for I2C1_SDA       */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_SPI2_CLK       (0x5UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for SPI2_CLK       */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_CAN0_RXD       (0x6UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for CAN0_RXD       */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_SC2_RST        (0x7UL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for SC2_RST        */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_BPWM1_CH3      (0xBUL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for BPWM1_CH3      */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_QEI1_A         (0xCUL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for QEI1_A         */
#define NUMAKER_SYS_GPA_MFPH_PA13MFP_USB_D_N        (0xEUL << NUMAKER_SYS_GPA_MFPH_PA13MFP_Pos)   /*!< GPA_MFPH PA13 setting for USB_D_N        */

/* PA.14 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_I2S0_DI        (0x2UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for I2S0_DI        */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_UART0_TXD      (0x3UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for UART0_TXD      */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_SPI2_MISO      (0x5UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for SPI2_MISO      */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_I2C2_SCL       (0x6UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for I2C2_SCL       */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_SC2_DAT        (0x7UL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for SC2_DAT        */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_BPWM1_CH4      (0xBUL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for BPWM1_CH4      */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_QEI1_B         (0xCUL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for QEI1_B         */
#define NUMAKER_SYS_GPA_MFPH_PA14MFP_USB_D_P        (0xEUL << NUMAKER_SYS_GPA_MFPH_PA14MFP_Pos)   /*!< GPA_MFPH PA14 setting for USB_D_P        */

/* PA.15 MFP */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_GPIO           (0x0UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for GPIO           */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_I2S0_DO        (0x2UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for I2S0_DO        */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_UART0_RXD      (0x3UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for UART0_RXD      */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_SPI2_MOSI      (0x5UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for SPI2_MOSI      */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_I2C2_SDA       (0x6UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for I2C2_SDA       */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_SC2_CLK        (0x7UL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for SC2_CLK        */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_BPWM1_CH5      (0xBUL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for BPWM1_CH5      */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_EPWM0_SYNC_IN  (0xCUL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for EPWM0_SYNC_IN  */
#define NUMAKER_SYS_GPA_MFPH_PA15MFP_USB_OTG_ID     (0xEUL << NUMAKER_SYS_GPA_MFPH_PA15MFP_Pos)   /*!< GPA_MFPH PA15 setting for USB_OTG_ID     */

/* PB.0 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_EADC0_CH0       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for EADC0_CH0       */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_EBI_ADR9        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for EBI_ADR9        */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_SD0_CMD         (0x3UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for SD0_CMD         */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_SPI2_I2SMCLK    (0x4UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for SPI2_I2SMCLK    */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_UART2_RXD       (0x7UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for UART2_RXD       */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_SPI0_I2SMCLK    (0x8UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for SPI0_I2SMCLK    */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_I2C1_SDA        (0x9UL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_EPWM0_CH5       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for EPWM0_CH5       */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_EPWM1_CH5       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for EPWM1_CH5       */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_EPWM0_BRAKE1    (0xDUL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for EPWM0_BRAKE1    */
#define NUMAKER_SYS_GPB_MFPL_PB0MFP_QSPI0_MOSI1     (0xFUL << NUMAKER_SYS_GPB_MFPL_PB0MFP_Pos)    /*!< GPB_MFPL PB0 setting for QSPI0_MOSI1     */

/* PB.1 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_EADC0_CH1       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for EADC0_CH1       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_EBI_ADR8        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for EBI_ADR8        */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_SD0_CLK         (0x3UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for SD0_CLK         */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_SPI1_I2SMCLK    (0x5UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for SPI1_I2SMCLK    */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_SPI3_I2SMCLK    (0x6UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for SPI3_I2SMCLK    */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_UART2_TXD       (0x7UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for UART2_TXD       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_USCI1_CLK       (0x8UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for USCI1_CLK       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_I2C1_SCL        (0x9UL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_I2S0_LRCK       (0xAUL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for I2S0_LRCK       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_EPWM0_CH4       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for EPWM0_CH4       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_EPWM1_CH4       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for EPWM1_CH4       */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_EPWM0_BRAKE0    (0xDUL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for EPWM0_BRAKE0    */
#define NUMAKER_SYS_GPB_MFPL_PB1MFP_QSPI0_MISO1     (0xFUL << NUMAKER_SYS_GPB_MFPL_PB1MFP_Pos)    /*!< GPB_MFPL PB1 setting for QSPI0_MISO1     */

/* PB.2 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_ACMP0_P1        (0x1UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for ACMP0_P1        */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_EADC0_CH2       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for EADC0_CH2       */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_EBI_ADR3        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for EBI_ADR3        */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_SD0_DAT0        (0x3UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for SD0_DAT0        */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_SPI1_SS         (0x5UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for SPI1_SS         */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_UART1_RXD       (0x6UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for UART1_RXD       */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_UART5_nCTS      (0x7UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for UART5_nCTS      */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_USCI1_DAT0      (0x8UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for USCI1_DAT0      */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_SC0_PWR         (0x9UL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for SC0_PWR         */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_I2S0_DO         (0xAUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for I2S0_DO         */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_EPWM0_CH3       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for EPWM0_CH3       */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_I2C1_SDA        (0xCUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_TM5             (0xDUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for TM5             */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_TM3             (0xEUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for TM3             */
#define NUMAKER_SYS_GPB_MFPL_PB2MFP_INT3            (0xFUL << NUMAKER_SYS_GPB_MFPL_PB2MFP_Pos)    /*!< GPB_MFPL PB2 setting for INT3            */

/* PB.3 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_ACMP0_N         (0x1UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for ACMP0_N         */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_EADC0_CH3       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for EADC0_CH3       */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_EBI_ADR2        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for EBI_ADR2        */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_SD0_DAT1        (0x3UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for SD0_DAT1        */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_SPI1_CLK        (0x5UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_UART1_TXD       (0x6UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for UART1_TXD       */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_UART5_nRTS      (0x7UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for UART5_nRTS      */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_USCI1_DAT1      (0x8UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for USCI1_DAT1      */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_SC0_RST         (0x9UL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for SC0_RST         */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_I2S0_DI         (0xAUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for I2S0_DI         */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_EPWM0_CH2       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for EPWM0_CH2       */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_I2C1_SCL        (0xCUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_TM4             (0xDUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for TM4             */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_TM2             (0xEUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for TM2             */
#define NUMAKER_SYS_GPB_MFPL_PB3MFP_INT2            (0xFUL << NUMAKER_SYS_GPB_MFPL_PB3MFP_Pos)    /*!< GPB_MFPL PB3 setting for INT2            */

/* PB.4 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_ACMP1_P1        (0x1UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for ACMP1_P1        */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_EADC0_CH4       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for EADC0_CH4       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_EBI_ADR1        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for EBI_ADR1        */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_SD0_DAT2        (0x3UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for SD0_DAT2        */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_SPI1_MOSI       (0x5UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_I2C0_SDA        (0x6UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_UART5_RXD       (0x7UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for UART5_RXD       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_USCI1_CTL1      (0x8UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for USCI1_CTL1      */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_SC0_DAT         (0x9UL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for SC0_DAT         */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_I2S0_MCLK       (0xAUL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for I2S0_MCLK       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_EPWM0_CH1       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for EPWM0_CH1       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_UART2_RXD       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for UART2_RXD       */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_TM1             (0xEUL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for TM1             */
#define NUMAKER_SYS_GPB_MFPL_PB4MFP_INT1            (0xFUL << NUMAKER_SYS_GPB_MFPL_PB4MFP_Pos)    /*!< GPB_MFPL PB4 setting for INT1            */

/* PB.5 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_ACMP1_N         (0x1UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for ACMP1_N         */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_EADC0_CH5       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for EADC0_CH5       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_EBI_ADR0        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for EBI_ADR0        */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_SD0_DAT3        (0x3UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for SD0_DAT3        */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_SPI1_MISO       (0x5UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_I2C0_SCL        (0x6UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_UART5_TXD       (0x7UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for UART5_TXD       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_USCI1_CTL0      (0x8UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for USCI1_CTL0      */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_SC0_CLK         (0x9UL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for SC0_CLK         */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_I2S0_BCLK       (0xAUL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for I2S0_BCLK       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_EPWM0_CH0       (0xBUL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for EPWM0_CH0       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_UART2_TXD       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for UART2_TXD       */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_TM0             (0xEUL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for TM0             */
#define NUMAKER_SYS_GPB_MFPL_PB5MFP_INT0            (0xFUL << NUMAKER_SYS_GPB_MFPL_PB5MFP_Pos)    /*!< GPB_MFPL PB5 setting for INT0            */

/* PB.6 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_EADC0_CH6       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for EADC0_CH6       */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_EBI_nWRH        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for EBI_nWRH        */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_USCI1_DAT1      (0x4UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for USCI1_DAT1      */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_UART1_RXD       (0x6UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for UART1_RXD       */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_EBI_nCS1        (0x8UL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for EBI_nCS1        */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_BPWM1_CH5       (0xAUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for BPWM1_CH5       */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_EPWM1_BRAKE1    (0xBUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for EPWM1_BRAKE1    */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_EPWM1_CH5       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for EPWM1_CH5       */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_INT4            (0xDUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for INT4            */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_USB_VBUS_EN     (0xEUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for USB_VBUS_EN     */
#define NUMAKER_SYS_GPB_MFPL_PB6MFP_ACMP1_O         (0xFUL << NUMAKER_SYS_GPB_MFPL_PB6MFP_Pos)    /*!< GPB_MFPL PB6 setting for ACMP1_O         */

/* PB.7 MFP */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_EADC0_CH7       (0x1UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for EADC0_CH7       */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_EBI_nWRL        (0x2UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for EBI_nWRL        */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_USCI1_DAT0      (0x4UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for USCI1_DAT0      */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_UART1_TXD       (0x6UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for UART1_TXD       */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_EBI_nCS0        (0x8UL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for EBI_nCS0        */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_BPWM1_CH4       (0xAUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for BPWM1_CH4       */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_EPWM1_BRAKE0    (0xBUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for EPWM1_BRAKE0    */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_EPWM1_CH4       (0xCUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for EPWM1_CH4       */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_INT5            (0xDUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for INT5            */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_USB_VBUS_ST     (0xEUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for USB_VBUS_ST     */
#define NUMAKER_SYS_GPB_MFPL_PB7MFP_ACMP0_O         (0xFUL << NUMAKER_SYS_GPB_MFPL_PB7MFP_Pos)    /*!< GPB_MFPL PB7 setting for ACMP0_O         */

/* PB.8 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_EADC0_CH8       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for EADC0_CH8       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_EBI_ADR19       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for EBI_ADR19       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_USCI1_CLK       (0x4UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for USCI1_CLK       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_UART0_RXD       (0x5UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for UART0_RXD       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_UART1_nRTS      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for UART1_nRTS      */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_I2C1_SMBSUS     (0x7UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for I2C1_SMBSUS     */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_I2C0_SDA        (0x9UL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_BPWM1_CH3       (0xAUL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for BPWM1_CH3       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_SPI3_MOSI       (0xBUL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for SPI3_MOSI       */
#define NUMAKER_SYS_GPB_MFPH_PB8MFP_INT6            (0xDUL << NUMAKER_SYS_GPB_MFPH_PB8MFP_Pos)    /*!< GPB_MFPH PB8 setting for INT6            */

/* PB.9 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for GPIO            */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_EADC0_CH9       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for EADC0_CH9       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_EBI_ADR18       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for EBI_ADR18       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_USCI1_CTL1      (0x4UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for USCI1_CTL1      */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_UART0_TXD       (0x5UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for UART0_TXD       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_UART1_nCTS      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for UART1_nCTS      */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_I2C1_SMBAL      (0x7UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for I2C1_SMBAL      */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_I2C0_SCL        (0x9UL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_BPWM1_CH2       (0xAUL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for BPWM1_CH2       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_SPI3_MISO       (0xBUL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for SPI3_MISO       */
#define NUMAKER_SYS_GPB_MFPH_PB9MFP_INT7            (0xDUL << NUMAKER_SYS_GPB_MFPH_PB9MFP_Pos)    /*!< GPB_MFPH PB9 setting for INT7            */

/* PB.10 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_EADC0_CH10     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for EADC0_CH10     */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_EBI_ADR17      (0x2UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for EBI_ADR17      */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_USCI1_CTL0     (0x4UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for USCI1_CTL0     */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_UART0_nRTS     (0x5UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for UART0_nRTS     */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_UART4_RXD      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for UART4_RXD      */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_I2C1_SDA       (0x7UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for I2C1_SDA       */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_CAN0_RXD       (0x8UL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for CAN0_RXD       */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_BPWM1_CH1      (0xAUL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for BPWM1_CH1      */
#define NUMAKER_SYS_GPB_MFPH_PB10MFP_SPI3_SS        (0xBUL << NUMAKER_SYS_GPB_MFPH_PB10MFP_Pos)   /*!< GPB_MFPH PB10 setting for SPI3_SS        */

/* PB.11 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_EADC0_CH11     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for EADC0_CH11     */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_EBI_ADR16      (0x2UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for EBI_ADR16      */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_UART0_nCTS     (0x5UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for UART0_nCTS     */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_UART4_TXD      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for UART4_TXD      */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_I2C1_SCL       (0x7UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for I2C1_SCL       */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_CAN0_TXD       (0x8UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for CAN0_TXD       */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_SPI0_I2SMCLK   (0x9UL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for SPI0_I2SMCLK   */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_BPWM1_CH0      (0xAUL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for BPWM1_CH0      */
#define NUMAKER_SYS_GPB_MFPH_PB11MFP_SPI3_CLK       (0xBUL << NUMAKER_SYS_GPB_MFPH_PB11MFP_Pos)   /*!< GPB_MFPH PB11 setting for SPI3_CLK       */

/* PB.12 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_ACMP0_P2       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for ACMP0_P2       */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_ACMP1_P2       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for ACMP1_P2       */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_DAC0_OUT       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for DAC0_OUT       */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_EADC0_CH12     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for EADC0_CH12     */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_EBI_AD15       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for EBI_AD15       */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_SC1_CLK        (0x3UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for SC1_CLK        */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_SPI0_MOSI      (0x4UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for SPI0_MOSI      */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_USCI0_CLK      (0x5UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for USCI0_CLK      */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_UART0_RXD      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for UART0_RXD      */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_UART3_nCTS     (0x7UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for UART3_nCTS     */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_I2C2_SDA       (0x8UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for I2C2_SDA       */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_SD0_nCD        (0x9UL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for SD0_nCD        */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_EPWM1_CH3      (0xBUL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for EPWM1_CH3      */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_TM3_EXT        (0xDUL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for TM3_EXT        */
#define NUMAKER_SYS_GPB_MFPH_PB12MFP_TM5_EXT        (0xEUL << NUMAKER_SYS_GPB_MFPH_PB12MFP_Pos)   /*!< GPB_MFPH PB12 setting for TM5_EXT        */

/* PB.13 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_ACMP0_P3       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for ACMP0_P3       */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_ACMP1_P3       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for ACMP1_P3       */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_DAC1_OUT       (0x1UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for DAC1_OUT       */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_EADC0_CH13     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for EADC0_CH13     */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_EBI_AD14       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for EBI_AD14       */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_SC1_DAT        (0x3UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for SC1_DAT        */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_SPI0_MISO      (0x4UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for SPI0_MISO      */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_USCI0_DAT0     (0x5UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for USCI0_DAT0     */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_UART0_TXD      (0x6UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for UART0_TXD      */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_UART3_nRTS     (0x7UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for UART3_nRTS     */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_I2C2_SCL       (0x8UL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for I2C2_SCL       */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_EPWM1_CH2      (0xBUL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for EPWM1_CH2      */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_TM2_EXT        (0xDUL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for TM2_EXT        */
#define NUMAKER_SYS_GPB_MFPH_PB13MFP_TM4_EXT        (0xEUL << NUMAKER_SYS_GPB_MFPH_PB13MFP_Pos)   /*!< GPB_MFPH PB13 setting for TM4_EXT        */

/* PB.14 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_EADC0_CH14     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for EADC0_CH14     */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_EBI_AD13       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for EBI_AD13       */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_SC1_RST        (0x3UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for SC1_RST        */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_SPI0_CLK       (0x4UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for SPI0_CLK       */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_USCI0_DAT1     (0x5UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for USCI0_DAT1     */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_UART0_nRTS     (0x6UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for UART0_nRTS     */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_UART3_RXD      (0x7UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for UART3_RXD      */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_I2C2_SMBSUS    (0x8UL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for I2C2_SMBSUS    */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_EPWM0_BRAKE1   (0xAUL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for EPWM0_BRAKE1   */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_EPWM1_CH1      (0xBUL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for EPWM1_CH1      */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_TM1_EXT        (0xDUL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for TM1_EXT        */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_CLKO           (0xEUL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for CLKO           */
#define NUMAKER_SYS_GPB_MFPH_PB14MFP_USB_VBUS_ST    (0xFUL << NUMAKER_SYS_GPB_MFPH_PB14MFP_Pos)   /*!< GPB_MFPH PB14 setting for USB_VBUS_ST    */

/* PB.15 MFP */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_GPIO           (0x0UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for GPIO           */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_EADC0_CH15     (0x1UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for EADC0_CH15     */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_EBI_AD12       (0x2UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for EBI_AD12       */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_SC1_PWR        (0x3UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for SC1_PWR        */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_SPI0_SS        (0x4UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for SPI0_SS        */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_USCI0_CTL1     (0x5UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for USCI0_CTL1     */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_UART0_nCTS     (0x6UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for UART0_nCTS     */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_UART3_TXD      (0x7UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for UART3_TXD      */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_I2C2_SMBAL     (0x8UL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for I2C2_SMBAL     */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_EPWM1_CH0      (0xBUL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for EPWM1_CH0      */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_TM0_EXT        (0xDUL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for TM0_EXT        */
#define NUMAKER_SYS_GPB_MFPH_PB15MFP_USB_VBUS_EN    (0xEUL << NUMAKER_SYS_GPB_MFPH_PB15MFP_Pos)   /*!< GPB_MFPH PB15 setting for USB_VBUS_EN    */

/* PC.0 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_EBI_AD0         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for EBI_AD0         */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_QSPI0_MOSI0     (0x4UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for QSPI0_MOSI0     */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_SC1_CLK         (0x5UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for SC1_CLK         */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_I2S0_LRCK       (0x6UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for I2S0_LRCK       */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_SPI1_SS         (0x7UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for SPI1_SS         */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_UART2_RXD       (0x8UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for UART2_RXD       */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_I2C0_SDA        (0x9UL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_EPWM1_CH5       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for EPWM1_CH5       */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_LCD_COM0        (0xDUL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for LCD_COM0        */
#define NUMAKER_SYS_GPC_MFPL_PC0MFP_ACMP1_O         (0xEUL << NUMAKER_SYS_GPC_MFPL_PC0MFP_Pos)    /*!< GPC_MFPL PC0 setting for ACMP1_O         */

/* PC.1 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_EBI_AD1         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for EBI_AD1         */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_QSPI0_MISO0     (0x4UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for QSPI0_MISO0     */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_SC1_DAT         (0x5UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for SC1_DAT         */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_I2S0_DO         (0x6UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for I2S0_DO         */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_SPI1_CLK        (0x7UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_UART2_TXD       (0x8UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for UART2_TXD       */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_I2C0_SCL        (0x9UL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_EPWM1_CH4       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for EPWM1_CH4       */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_LCD_COM1        (0xDUL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for LCD_COM1        */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_ACMP0_O         (0xEUL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for ACMP0_O         */
#define NUMAKER_SYS_GPC_MFPL_PC1MFP_EADC0_ST        (0xFUL << NUMAKER_SYS_GPC_MFPL_PC1MFP_Pos)    /*!< GPC_MFPL PC1 setting for EADC0_ST        */

/* PC.2 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_EBI_AD2         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for EBI_AD2         */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_QSPI0_CLK       (0x4UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for QSPI0_CLK       */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_SC1_RST         (0x5UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for SC1_RST         */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_I2S0_DI         (0x6UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for I2S0_DI         */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_SPI1_MOSI       (0x7UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_UART2_nCTS      (0x8UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for UART2_nCTS      */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_I2C0_SMBSUS     (0x9UL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for I2C0_SMBSUS     */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_UART3_RXD       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for UART3_RXD       */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_EPWM1_CH3       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for EPWM1_CH3       */
#define NUMAKER_SYS_GPC_MFPL_PC2MFP_LCD_COM2        (0xFUL << NUMAKER_SYS_GPC_MFPL_PC2MFP_Pos)    /*!< GPC_MFPL PC2 setting for LCD_COM2        */

/* PC.3 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_EBI_AD3         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for EBI_AD3         */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_QSPI0_SS        (0x4UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for QSPI0_SS        */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_SC1_PWR         (0x5UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for SC1_PWR         */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_I2S0_MCLK       (0x6UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for I2S0_MCLK       */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_SPI1_MISO       (0x7UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_UART2_nRTS      (0x8UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for UART2_nRTS      */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_I2C0_SMBAL      (0x9UL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for I2C0_SMBAL      */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_UART3_TXD       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for UART3_TXD       */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_EPWM1_CH2       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for EPWM1_CH2       */
#define NUMAKER_SYS_GPC_MFPL_PC3MFP_LCD_COM3        (0xFUL << NUMAKER_SYS_GPC_MFPL_PC3MFP_Pos)    /*!< GPC_MFPL PC3 setting for LCD_COM3        */

/* PC.4 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_EBI_AD4         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for EBI_AD4         */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_QSPI0_MOSI1     (0x4UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for QSPI0_MOSI1     */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_SC1_nCD         (0x5UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for SC1_nCD         */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_I2S0_BCLK       (0x6UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for I2S0_BCLK       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_SPI1_I2SMCLK    (0x7UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for SPI1_I2SMCLK    */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_UART2_RXD       (0x8UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for UART2_RXD       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_I2C1_SDA        (0x9UL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_CAN0_RXD        (0xAUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for CAN0_RXD        */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_UART4_RXD       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for UART4_RXD       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_EPWM1_CH1       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for EPWM1_CH1       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_LCD_SEG16       (0xEUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for LCD_SEG16       */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_LCD_COM4        (0xFUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for LCD_COM4        */
#define NUMAKER_SYS_GPC_MFPL_PC4MFP_LCD_SEG43       (0xFUL << NUMAKER_SYS_GPC_MFPL_PC4MFP_Pos)    /*!< GPC_MFPL PC4 setting for LCD_SEG43       */

/* PC.5 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_EBI_AD5         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for EBI_AD5         */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_QSPI0_MISO1     (0x4UL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for QSPI0_MISO1     */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_UART2_TXD       (0x8UL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for UART2_TXD       */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_I2C1_SCL        (0x9UL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_CAN0_TXD        (0xAUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for CAN0_TXD        */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_UART4_TXD       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for UART4_TXD       */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_EPWM1_CH0       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for EPWM1_CH0       */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_LCD_SEG15       (0xEUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for LCD_SEG15       */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_LCD_COM5        (0xFUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for LCD_COM5        */
#define NUMAKER_SYS_GPC_MFPL_PC5MFP_LCD_SEG42       (0xFUL << NUMAKER_SYS_GPC_MFPL_PC5MFP_Pos)    /*!< GPC_MFPL PC5 setting for LCD_SEG42       */

/* PC.6 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_EBI_AD8         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for EBI_AD8         */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_SPI1_MOSI       (0x4UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_UART4_RXD       (0x5UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for UART4_RXD       */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_SC2_RST         (0x6UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for SC2_RST         */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_UART0_nRTS      (0x7UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for UART0_nRTS      */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_I2C1_SMBSUS     (0x8UL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for I2C1_SMBSUS     */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_EPWM1_CH3       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for EPWM1_CH3       */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_BPWM1_CH1       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for BPWM1_CH1       */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_LCD_SEG9        (0xDUL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for LCD_SEG9        */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_TM1             (0xEUL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for TM1             */
#define NUMAKER_SYS_GPC_MFPL_PC6MFP_INT2            (0xFUL << NUMAKER_SYS_GPC_MFPL_PC6MFP_Pos)    /*!< GPC_MFPL PC6 setting for INT2            */

/* PC.7 MFP */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_EBI_AD9         (0x2UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for EBI_AD9         */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_SPI1_MISO       (0x4UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_UART4_TXD       (0x5UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for UART4_TXD       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_SC2_PWR         (0x6UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for SC2_PWR         */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_UART0_nCTS      (0x7UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for UART0_nCTS      */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_I2C1_SMBAL      (0x8UL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for I2C1_SMBAL      */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_EPWM1_CH2       (0xBUL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for EPWM1_CH2       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_BPWM1_CH0       (0xCUL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for BPWM1_CH0       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_LCD_SEG10       (0xDUL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for LCD_SEG10       */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_TM0             (0xEUL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for TM0             */
#define NUMAKER_SYS_GPC_MFPL_PC7MFP_INT3            (0xFUL << NUMAKER_SYS_GPC_MFPL_PC7MFP_Pos)    /*!< GPC_MFPL PC7 setting for INT3            */

/* PC.8 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_EBI_ADR16       (0x2UL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for EBI_ADR16       */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_I2C0_SDA        (0x4UL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_UART4_nCTS      (0x5UL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for UART4_nCTS      */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_UART1_RXD       (0x8UL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for UART1_RXD       */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_EPWM1_CH1       (0xBUL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for EPWM1_CH1       */
#define NUMAKER_SYS_GPC_MFPH_PC8MFP_BPWM1_CH4       (0xCUL << NUMAKER_SYS_GPC_MFPH_PC8MFP_Pos)    /*!< GPC_MFPH PC8 setting for BPWM1_CH4       */

/* PC.9 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos)    /*!< GPC_MFPH PC9 setting for GPIO            */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_EBI_ADR7        (0x2UL << NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos)    /*!< GPC_MFPH PC9 setting for EBI_ADR7        */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_SPI3_SS         (0x6UL << NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos)    /*!< GPC_MFPH PC9 setting for SPI3_SS         */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_UART3_RXD       (0x7UL << NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos)    /*!< GPC_MFPH PC9 setting for UART3_RXD       */
#define NUMAKER_SYS_GPC_MFPH_PC9MFP_EPWM1_CH3       (0xCUL << NUMAKER_SYS_GPC_MFPH_PC9MFP_Pos)    /*!< GPC_MFPH PC9 setting for EPWM1_CH3       */

/* PC.10 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for GPIO           */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_EBI_ADR6       (0x2UL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for EBI_ADR6       */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_SPI3_CLK       (0x6UL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for SPI3_CLK       */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_UART3_TXD      (0x7UL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for UART3_TXD      */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_ECAP1_IC0      (0xBUL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for ECAP1_IC0      */
#define NUMAKER_SYS_GPC_MFPH_PC10MFP_EPWM1_CH2      (0xCUL << NUMAKER_SYS_GPC_MFPH_PC10MFP_Pos)   /*!< GPC_MFPH PC10 setting for EPWM1_CH2      */

/* PC.11 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for GPIO           */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_EBI_ADR5       (0x2UL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for EBI_ADR5       */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_UART0_RXD      (0x3UL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for UART0_RXD      */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_I2C0_SDA       (0x4UL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for I2C0_SDA       */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_SPI3_MOSI      (0x6UL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for SPI3_MOSI      */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_ECAP1_IC1      (0xBUL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for ECAP1_IC1      */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_EPWM1_CH1      (0xCUL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for EPWM1_CH1      */
#define NUMAKER_SYS_GPC_MFPH_PC11MFP_ACMP1_O        (0xEUL << NUMAKER_SYS_GPC_MFPH_PC11MFP_Pos)   /*!< GPC_MFPH PC11 setting for ACMP1_O        */

/* PC.12 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for GPIO           */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_EBI_ADR4       (0x2UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for EBI_ADR4       */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_UART0_TXD      (0x3UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for UART0_TXD      */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_I2C0_SCL       (0x4UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for I2C0_SCL       */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_SPI3_MISO      (0x6UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for SPI3_MISO      */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_SC0_nCD        (0x9UL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for SC0_nCD        */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_ECAP1_IC2      (0xBUL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for ECAP1_IC2      */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_EPWM1_CH0      (0xCUL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for EPWM1_CH0      */
#define NUMAKER_SYS_GPC_MFPH_PC12MFP_ACMP0_O        (0xEUL << NUMAKER_SYS_GPC_MFPH_PC12MFP_Pos)   /*!< GPC_MFPH PC12 setting for ACMP0_O        */

/* PC.13 MFP */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_GPIO           (0x0UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for GPIO           */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_EBI_ADR10      (0x2UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for EBI_ADR10      */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_SC2_nCD        (0x3UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for SC2_nCD        */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_SPI2_I2SMCLK   (0x4UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for SPI2_I2SMCLK   */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_USCI0_CTL0     (0x6UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for USCI0_CTL0     */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_UART2_TXD      (0x7UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for UART2_TXD      */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_BPWM0_CH4      (0x9UL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for BPWM0_CH4      */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_CLKO           (0xDUL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for CLKO           */
#define NUMAKER_SYS_GPC_MFPH_PC13MFP_EADC0_ST       (0xEUL << NUMAKER_SYS_GPC_MFPH_PC13MFP_Pos)   /*!< GPC_MFPH PC13 setting for EADC0_ST       */

/* PD.0 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_EBI_AD13        (0x2UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for EBI_AD13        */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_USCI0_CLK       (0x3UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for USCI0_CLK       */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_SPI0_MOSI       (0x4UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for SPI0_MOSI       */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_UART3_RXD       (0x5UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for UART3_RXD       */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_I2C2_SDA        (0x6UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for I2C2_SDA        */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_SC2_CLK         (0x7UL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for SC2_CLK         */
#define NUMAKER_SYS_GPD_MFPL_PD0MFP_TM2             (0xEUL << NUMAKER_SYS_GPD_MFPL_PD0MFP_Pos)    /*!< GPD_MFPL PD0 setting for TM2             */

/* PD.1 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_EBI_AD12        (0x2UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for EBI_AD12        */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_USCI0_DAT0      (0x3UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for USCI0_DAT0      */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_SPI0_MISO       (0x4UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for SPI0_MISO       */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_UART3_TXD       (0x5UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for UART3_TXD       */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_I2C2_SCL        (0x6UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for I2C2_SCL        */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_SC2_DAT         (0x7UL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for SC2_DAT         */
#define NUMAKER_SYS_GPD_MFPL_PD1MFP_LCD_SEG0        (0xFUL << NUMAKER_SYS_GPD_MFPL_PD1MFP_Pos)    /*!< GPD_MFPL PD1 setting for LCD_SEG0        */

/* PD.2 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_EBI_AD11        (0x2UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for EBI_AD11        */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_USCI0_DAT1      (0x3UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for USCI0_DAT1      */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_SPI0_CLK        (0x4UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for SPI0_CLK        */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_UART3_nCTS      (0x5UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for UART3_nCTS      */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_SC2_RST         (0x7UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for SC2_RST         */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_UART0_RXD       (0x9UL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for UART0_RXD       */
#define NUMAKER_SYS_GPD_MFPL_PD2MFP_LCD_SEG1        (0xFUL << NUMAKER_SYS_GPD_MFPL_PD2MFP_Pos)    /*!< GPD_MFPL PD2 setting for LCD_SEG1        */

/* PD.3 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_EBI_AD10        (0x2UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for EBI_AD10        */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_USCI0_CTL1      (0x3UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for USCI0_CTL1      */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_SPI0_SS         (0x4UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for SPI0_SS         */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_UART3_nRTS      (0x5UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for UART3_nRTS      */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_USCI1_CTL0      (0x6UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for USCI1_CTL0      */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_SC2_PWR         (0x7UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for SC2_PWR         */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_SC1_nCD         (0x8UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for SC1_nCD         */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_UART0_TXD       (0x9UL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for UART0_TXD       */
#define NUMAKER_SYS_GPD_MFPL_PD3MFP_LCD_SEG2        (0xFUL << NUMAKER_SYS_GPD_MFPL_PD3MFP_Pos)    /*!< GPD_MFPL PD3 setting for LCD_SEG2        */

/* PD.4 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_USCI0_CTL0      (0x3UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for USCI0_CTL0      */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_I2C1_SDA        (0x4UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_SPI1_SS         (0x5UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for SPI1_SS         */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_USCI1_CTL1      (0x6UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for USCI1_CTL1      */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_SC1_CLK         (0x8UL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for SC1_CLK         */
#define NUMAKER_SYS_GPD_MFPL_PD4MFP_USB_VBUS_ST     (0xEUL << NUMAKER_SYS_GPD_MFPL_PD4MFP_Pos)    /*!< GPD_MFPL PD4 setting for USB_VBUS_ST     */

/* PD.5 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos)    /*!< GPD_MFPL PD5 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_I2C1_SCL        (0x4UL << NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos)    /*!< GPD_MFPL PD5 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_SPI1_CLK        (0x5UL << NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos)    /*!< GPD_MFPL PD5 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_USCI1_DAT0      (0x6UL << NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos)    /*!< GPD_MFPL PD5 setting for USCI1_DAT0      */
#define NUMAKER_SYS_GPD_MFPL_PD5MFP_SC1_DAT         (0x8UL << NUMAKER_SYS_GPD_MFPL_PD5MFP_Pos)    /*!< GPD_MFPL PD5 setting for SC1_DAT         */

/* PD.6 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_UART1_RXD       (0x3UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for UART1_RXD       */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_I2C0_SDA        (0x4UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_SPI1_MOSI       (0x5UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_USCI1_DAT1      (0x6UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for USCI1_DAT1      */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_SC1_RST         (0x8UL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for SC1_RST         */
#define NUMAKER_SYS_GPD_MFPL_PD6MFP_LCD_SEG13       (0xFUL << NUMAKER_SYS_GPD_MFPL_PD6MFP_Pos)    /*!< GPD_MFPL PD6 setting for LCD_SEG13       */

/* PD.7 MFP */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_UART1_TXD       (0x3UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for UART1_TXD       */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_I2C0_SCL        (0x4UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_SPI1_MISO       (0x5UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_USCI1_CLK       (0x6UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for USCI1_CLK       */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_SC1_PWR         (0x8UL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for SC1_PWR         */
#define NUMAKER_SYS_GPD_MFPL_PD7MFP_LCD_SEG14       (0xFUL << NUMAKER_SYS_GPD_MFPL_PD7MFP_Pos)    /*!< GPD_MFPL PD7 setting for LCD_SEG14       */

/* PD.8 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_EBI_AD6         (0x2UL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for EBI_AD6         */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_I2C2_SDA        (0x3UL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for I2C2_SDA        */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_UART2_nRTS      (0x4UL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for UART2_nRTS      */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_LCD_COM6        (0xFUL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for LCD_COM6        */
#define NUMAKER_SYS_GPD_MFPH_PD8MFP_LCD_SEG41       (0xFUL << NUMAKER_SYS_GPD_MFPH_PD8MFP_Pos)    /*!< GPD_MFPH PD8 setting for LCD_SEG41       */

/* PD.9 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for GPIO            */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_EBI_AD7         (0x2UL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for EBI_AD7         */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_I2C2_SCL        (0x3UL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for I2C2_SCL        */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_UART2_nCTS      (0x4UL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for UART2_nCTS      */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_LCD_COM7        (0xFUL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for LCD_COM7        */
#define NUMAKER_SYS_GPD_MFPH_PD9MFP_LCD_SEG40       (0xFUL << NUMAKER_SYS_GPD_MFPH_PD9MFP_Pos)    /*!< GPD_MFPH PD9 setting for LCD_SEG40       */

/* PD.10 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for GPIO           */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_EBI_nCS2       (0x2UL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for EBI_nCS2       */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_UART1_RXD      (0x3UL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for UART1_RXD      */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_CAN0_RXD       (0x4UL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for CAN0_RXD       */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_QEI0_B         (0xAUL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for QEI0_B         */
#define NUMAKER_SYS_GPD_MFPH_PD10MFP_INT7           (0xFUL << NUMAKER_SYS_GPD_MFPH_PD10MFP_Pos)   /*!< GPD_MFPH PD10 setting for INT7           */

/* PD.11 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for GPIO           */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_EBI_nCS1       (0x2UL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for EBI_nCS1       */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_UART1_TXD      (0x3UL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for UART1_TXD      */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_CAN0_TXD       (0x4UL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for CAN0_TXD       */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_QEI0_A         (0xAUL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for QEI0_A         */
#define NUMAKER_SYS_GPD_MFPH_PD11MFP_INT6           (0xFUL << NUMAKER_SYS_GPD_MFPH_PD11MFP_Pos)   /*!< GPD_MFPH PD11 setting for INT6           */

/* PD.12 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for GPIO           */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_EBI_nCS0       (0x2UL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for EBI_nCS0       */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_UART2_RXD      (0x7UL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for UART2_RXD      */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_BPWM0_CH5      (0x9UL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for BPWM0_CH5      */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_QEI0_INDEX     (0xAUL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for QEI0_INDEX     */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_CLKO           (0xDUL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for CLKO           */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_EADC0_ST       (0xEUL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for EADC0_ST       */
#define NUMAKER_SYS_GPD_MFPH_PD12MFP_INT5           (0xFUL << NUMAKER_SYS_GPD_MFPH_PD12MFP_Pos)   /*!< GPD_MFPH PD12 setting for INT5           */

/* PD.14 MFP */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_GPIO           (0x0UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for GPIO           */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_EBI_nCS0       (0x2UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for EBI_nCS0       */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_SPI3_I2SMCLK   (0x3UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for SPI3_I2SMCLK   */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_SC1_nCD        (0x4UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for SC1_nCD        */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_USCI0_CTL0     (0x5UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for USCI0_CTL0     */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_SPI0_I2SMCLK   (0x6UL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for SPI0_I2SMCLK   */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_EPWM0_CH4      (0xBUL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for EPWM0_CH4      */
#define NUMAKER_SYS_GPD_MFPH_PD14MFP_LCD_SEG0       (0xFUL << NUMAKER_SYS_GPD_MFPH_PD14MFP_Pos)   /*!< GPD_MFPH PD14 setting for LCD_SEG0       */

/* PE.0 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_EBI_AD11        (0x2UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for EBI_AD11        */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_QSPI0_MOSI0     (0x3UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for QSPI0_MOSI0     */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_SC2_CLK         (0x4UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for SC2_CLK         */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_I2S0_MCLK       (0x5UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for I2S0_MCLK       */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_SPI1_MOSI       (0x6UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_UART3_RXD       (0x7UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for UART3_RXD       */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_I2C1_SDA        (0x8UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_UART4_nRTS      (0x9UL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for UART4_nRTS      */
#define NUMAKER_SYS_GPE_MFPL_PE0MFP_LCD_SEG5        (0xFUL << NUMAKER_SYS_GPE_MFPL_PE0MFP_Pos)    /*!< GPE_MFPL PE0 setting for LCD_SEG5        */

/* PE.1 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_EBI_AD10        (0x2UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for EBI_AD10        */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_QSPI0_MISO0     (0x3UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for QSPI0_MISO0     */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_SC2_DAT         (0x4UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for SC2_DAT         */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_I2S0_BCLK       (0x5UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for I2S0_BCLK       */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_SPI1_MISO       (0x6UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_UART3_TXD       (0x7UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for UART3_TXD       */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_I2C1_SCL        (0x8UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_UART4_nCTS      (0x9UL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for UART4_nCTS      */
#define NUMAKER_SYS_GPE_MFPL_PE1MFP_LCD_SEG6        (0xFUL << NUMAKER_SYS_GPE_MFPL_PE1MFP_Pos)    /*!< GPE_MFPL PE1 setting for LCD_SEG6        */

/* PE.2 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_EBI_ALE         (0x2UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for EBI_ALE         */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_SD0_DAT0        (0x3UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for SD0_DAT0        */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_SPI3_MOSI       (0x5UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for SPI3_MOSI       */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_SC0_CLK         (0x6UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for SC0_CLK         */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_USCI0_CLK       (0x7UL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for USCI0_CLK       */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_QEI0_B          (0xBUL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for QEI0_B          */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_EPWM0_CH5       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for EPWM0_CH5       */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_BPWM0_CH0       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for BPWM0_CH0       */
#define NUMAKER_SYS_GPE_MFPL_PE2MFP_LCD_SEG7        (0xFUL << NUMAKER_SYS_GPE_MFPL_PE2MFP_Pos)    /*!< GPE_MFPL PE2 setting for LCD_SEG7        */

/* PE.3 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_EBI_MCLK        (0x2UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for EBI_MCLK        */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_SD0_DAT1        (0x3UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for SD0_DAT1        */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_SPI3_MISO       (0x5UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for SPI3_MISO       */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_SC0_DAT         (0x6UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for SC0_DAT         */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_USCI0_DAT0      (0x7UL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for USCI0_DAT0      */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_QEI0_A          (0xBUL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for QEI0_A          */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_EPWM0_CH4       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for EPWM0_CH4       */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_BPWM0_CH1       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for BPWM0_CH1       */
#define NUMAKER_SYS_GPE_MFPL_PE3MFP_LCD_SEG8        (0xFUL << NUMAKER_SYS_GPE_MFPL_PE3MFP_Pos)    /*!< GPE_MFPL PE3 setting for LCD_SEG8        */

/* PE.4 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_EBI_nWR         (0x2UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for EBI_nWR         */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_SD0_DAT2        (0x3UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for SD0_DAT2        */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_SPI3_CLK        (0x5UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for SPI3_CLK        */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_SC0_RST         (0x6UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for SC0_RST         */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_USCI0_DAT1      (0x7UL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for USCI0_DAT1      */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_QEI0_INDEX      (0xBUL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for QEI0_INDEX      */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_EPWM0_CH3       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for EPWM0_CH3       */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_BPWM0_CH2       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for BPWM0_CH2       */
#define NUMAKER_SYS_GPE_MFPL_PE4MFP_LCD_SEG9        (0xFUL << NUMAKER_SYS_GPE_MFPL_PE4MFP_Pos)    /*!< GPE_MFPL PE4 setting for LCD_SEG9        */

/* PE.5 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_EBI_nRD         (0x2UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for EBI_nRD         */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_SD0_DAT3        (0x3UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for SD0_DAT3        */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_SPI3_SS         (0x5UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for SPI3_SS         */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_SC0_PWR         (0x6UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for SC0_PWR         */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_USCI0_CTL1      (0x7UL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for USCI0_CTL1      */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_QEI1_B          (0xBUL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for QEI1_B          */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_EPWM0_CH2       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for EPWM0_CH2       */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_BPWM0_CH3       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for BPWM0_CH3       */
#define NUMAKER_SYS_GPE_MFPL_PE5MFP_LCD_SEG10       (0xFUL << NUMAKER_SYS_GPE_MFPL_PE5MFP_Pos)    /*!< GPE_MFPL PE5 setting for LCD_SEG10       */

/* PE.6 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_SD0_CLK         (0x3UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for SD0_CLK         */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_SPI3_I2SMCLK    (0x5UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for SPI3_I2SMCLK    */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_SC0_nCD         (0x6UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for SC0_nCD         */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_USCI0_CTL0      (0x7UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for USCI0_CTL0      */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_UART5_RXD       (0x8UL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for UART5_RXD       */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_QEI1_A          (0xBUL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for QEI1_A          */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_EPWM0_CH1       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for EPWM0_CH1       */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_BPWM0_CH4       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for BPWM0_CH4       */
#define NUMAKER_SYS_GPE_MFPL_PE6MFP_LCD_SEG11       (0xFUL << NUMAKER_SYS_GPE_MFPL_PE6MFP_Pos)    /*!< GPE_MFPL PE6 setting for LCD_SEG11       */

/* PE.7 MFP */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_SD0_CMD         (0x3UL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for SD0_CMD         */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_UART5_TXD       (0x8UL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for UART5_TXD       */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_QEI1_INDEX      (0xBUL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for QEI1_INDEX      */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_EPWM0_CH0       (0xCUL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for EPWM0_CH0       */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_BPWM0_CH5       (0xDUL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for BPWM0_CH5       */
#define NUMAKER_SYS_GPE_MFPL_PE7MFP_LCD_SEG12       (0xFUL << NUMAKER_SYS_GPE_MFPL_PE7MFP_Pos)    /*!< GPE_MFPL PE7 setting for LCD_SEG12       */

/* PE.8 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_EBI_ADR10       (0x2UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for EBI_ADR10       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_I2S0_BCLK       (0x4UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for I2S0_BCLK       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_SPI2_CLK        (0x5UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for SPI2_CLK        */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_USCI1_CTL1      (0x6UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for USCI1_CTL1      */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_UART2_TXD       (0x7UL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for UART2_TXD       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_EPWM0_CH0       (0xAUL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for EPWM0_CH0       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_EPWM0_BRAKE0    (0xBUL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for EPWM0_BRAKE0    */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_ECAP0_IC0       (0xCUL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for ECAP0_IC0       */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_TRACE_DATA3     (0xEUL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for TRACE_DATA3     */
#define NUMAKER_SYS_GPE_MFPH_PE8MFP_LCD_SEG32       (0xFUL << NUMAKER_SYS_GPE_MFPH_PE8MFP_Pos)    /*!< GPE_MFPH PE8 setting for LCD_SEG32       */

/* PE.9 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for GPIO            */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_EBI_ADR11       (0x2UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for EBI_ADR11       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_I2S0_MCLK       (0x4UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for I2S0_MCLK       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_SPI2_MISO       (0x5UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for SPI2_MISO       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_USCI1_CTL0      (0x6UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for USCI1_CTL0      */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_UART2_RXD       (0x7UL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for UART2_RXD       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_EPWM0_CH1       (0xAUL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for EPWM0_CH1       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_EPWM0_BRAKE1    (0xBUL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for EPWM0_BRAKE1    */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_ECAP0_IC1       (0xCUL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for ECAP0_IC1       */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_TRACE_DATA2     (0xEUL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for TRACE_DATA2     */
#define NUMAKER_SYS_GPE_MFPH_PE9MFP_LCD_SEG31       (0xFUL << NUMAKER_SYS_GPE_MFPH_PE9MFP_Pos)    /*!< GPE_MFPH PE9 setting for LCD_SEG31       */

/* PE.10 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_EBI_ADR12      (0x2UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for EBI_ADR12      */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_I2S0_DI        (0x4UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for I2S0_DI        */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_SPI2_MOSI      (0x5UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for SPI2_MOSI      */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_USCI1_DAT0     (0x6UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for USCI1_DAT0     */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_UART3_TXD      (0x7UL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for UART3_TXD      */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_EPWM0_CH2      (0xAUL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for EPWM0_CH2      */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_EPWM1_BRAKE0   (0xBUL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for EPWM1_BRAKE0   */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_ECAP0_IC2      (0xCUL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for ECAP0_IC2      */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_TRACE_DATA1    (0xEUL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for TRACE_DATA1    */
#define NUMAKER_SYS_GPE_MFPH_PE10MFP_LCD_SEG30      (0xFUL << NUMAKER_SYS_GPE_MFPH_PE10MFP_Pos)   /*!< GPE_MFPH PE10 setting for LCD_SEG30      */

/* PE.11 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_EBI_ADR13      (0x2UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for EBI_ADR13      */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_I2S0_DO        (0x4UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for I2S0_DO        */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_SPI2_SS        (0x5UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for SPI2_SS        */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_USCI1_DAT1     (0x6UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for USCI1_DAT1     */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_UART3_RXD      (0x7UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for UART3_RXD      */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_UART1_nCTS     (0x8UL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for UART1_nCTS     */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_EPWM0_CH3      (0xAUL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for EPWM0_CH3      */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_EPWM1_BRAKE1   (0xBUL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for EPWM1_BRAKE1   */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_ECAP1_IC2      (0xDUL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for ECAP1_IC2      */
#define NUMAKER_SYS_GPE_MFPH_PE11MFP_TRACE_DATA0    (0xEUL << NUMAKER_SYS_GPE_MFPH_PE11MFP_Pos)   /*!< GPE_MFPH PE11 setting for TRACE_DATA0    */

/* PE.12 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_EBI_ADR14      (0x2UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for EBI_ADR14      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_I2S0_LRCK      (0x4UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for I2S0_LRCK      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_SPI2_I2SMCLK   (0x5UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for SPI2_I2SMCLK   */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_USCI1_CLK      (0x6UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for USCI1_CLK      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_UART1_nRTS     (0x8UL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for UART1_nRTS     */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_EPWM0_CH4      (0xAUL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for EPWM0_CH4      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_ECAP1_IC1      (0xDUL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for ECAP1_IC1      */
#define NUMAKER_SYS_GPE_MFPH_PE12MFP_TRACE_CLK      (0xEUL << NUMAKER_SYS_GPE_MFPH_PE12MFP_Pos)   /*!< GPE_MFPH PE12 setting for TRACE_CLK      */

/* PE.13 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_EBI_ADR15      (0x2UL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for EBI_ADR15      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_I2C0_SCL       (0x4UL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for I2C0_SCL       */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_UART4_nRTS     (0x5UL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for UART4_nRTS     */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_UART1_TXD      (0x8UL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for UART1_TXD      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_EPWM0_CH5      (0xAUL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for EPWM0_CH5      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_EPWM1_CH0      (0xBUL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for EPWM1_CH0      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_BPWM1_CH5      (0xCUL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for BPWM1_CH5      */
#define NUMAKER_SYS_GPE_MFPH_PE13MFP_ECAP1_IC0      (0xDUL << NUMAKER_SYS_GPE_MFPH_PE13MFP_Pos)   /*!< GPE_MFPH PE13 setting for ECAP1_IC0      */

/* PE.14 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos)   /*!< GPE_MFPH PE14 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_EBI_AD8        (0x2UL << NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos)   /*!< GPE_MFPH PE14 setting for EBI_AD8        */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_UART2_TXD      (0x3UL << NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos)   /*!< GPE_MFPH PE14 setting for UART2_TXD      */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_CAN0_TXD       (0x4UL << NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos)   /*!< GPE_MFPH PE14 setting for CAN0_TXD       */
#define NUMAKER_SYS_GPE_MFPH_PE14MFP_LCD_SEG23      (0xFUL << NUMAKER_SYS_GPE_MFPH_PE14MFP_Pos)   /*!< GPE_MFPH PE14 setting for LCD_SEG23      */

/* PE.15 MFP */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_GPIO           (0x0UL << NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos)   /*!< GPE_MFPH PE15 setting for GPIO           */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_EBI_AD9        (0x2UL << NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos)   /*!< GPE_MFPH PE15 setting for EBI_AD9        */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_UART2_RXD      (0x3UL << NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos)   /*!< GPE_MFPH PE15 setting for UART2_RXD      */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_CAN0_RXD       (0x4UL << NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos)   /*!< GPE_MFPH PE15 setting for CAN0_RXD       */
#define NUMAKER_SYS_GPE_MFPH_PE15MFP_LCD_SEG22      (0xFUL << NUMAKER_SYS_GPE_MFPH_PE15MFP_Pos)   /*!< GPE_MFPH PE15 setting for LCD_SEG22      */

/* PF.0 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_UART1_TXD       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for UART1_TXD       */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_I2C1_SCL        (0x3UL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_UART0_TXD       (0x4UL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for UART0_TXD       */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_BPWM1_CH0       (0xCUL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for BPWM1_CH0       */
#define NUMAKER_SYS_GPF_MFPL_PF0MFP_ICE_DAT         (0xEUL << NUMAKER_SYS_GPF_MFPL_PF0MFP_Pos)    /*!< GPF_MFPL PF0 setting for ICE_DAT         */

/* PF.1 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_UART1_RXD       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for UART1_RXD       */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_I2C1_SDA        (0x3UL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_UART0_RXD       (0x4UL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for UART0_RXD       */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_BPWM1_CH1       (0xCUL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for BPWM1_CH1       */
#define NUMAKER_SYS_GPF_MFPL_PF1MFP_ICE_CLK         (0xEUL << NUMAKER_SYS_GPF_MFPL_PF1MFP_Pos)    /*!< GPF_MFPL PF1 setting for ICE_CLK         */

/* PF.2 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_EBI_nCS1        (0x2UL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for EBI_nCS1        */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_UART0_RXD       (0x3UL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for UART0_RXD       */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_I2C0_SDA        (0x4UL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for I2C0_SDA        */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_QSPI0_CLK       (0x5UL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for QSPI0_CLK       */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_XT1_OUT         (0xAUL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for XT1_OUT         */
#define NUMAKER_SYS_GPF_MFPL_PF2MFP_BPWM1_CH1       (0xBUL << NUMAKER_SYS_GPF_MFPL_PF2MFP_Pos)    /*!< GPF_MFPL PF2 setting for BPWM1_CH1       */

/* PF.3 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_EBI_nCS0        (0x2UL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for EBI_nCS0        */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_UART0_TXD       (0x3UL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for UART0_TXD       */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_I2C0_SCL        (0x4UL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for I2C0_SCL        */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_XT1_IN          (0xAUL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for XT1_IN          */
#define NUMAKER_SYS_GPF_MFPL_PF3MFP_BPWM1_CH0       (0xBUL << NUMAKER_SYS_GPF_MFPL_PF3MFP_Pos)    /*!< GPF_MFPL PF3 setting for BPWM1_CH0       */

/* PF.4 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_UART2_TXD       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for UART2_TXD       */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_UART2_nRTS      (0x4UL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for UART2_nRTS      */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_EPWM0_CH1       (0x7UL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for EPWM0_CH1       */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_BPWM0_CH5       (0x8UL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for BPWM0_CH5       */
#define NUMAKER_SYS_GPF_MFPL_PF4MFP_X32_OUT         (0xAUL << NUMAKER_SYS_GPF_MFPL_PF4MFP_Pos)    /*!< GPF_MFPL PF4 setting for X32_OUT         */

/* PF.5 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_UART2_RXD       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for UART2_RXD       */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_UART2_nCTS      (0x4UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for UART2_nCTS      */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_EPWM0_CH0       (0x7UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for EPWM0_CH0       */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_BPWM0_CH4       (0x8UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for BPWM0_CH4       */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_EPWM0_SYNC_OUT  (0x9UL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for EPWM0_SYNC_OUT  */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_X32_IN          (0xAUL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for X32_IN          */
#define NUMAKER_SYS_GPF_MFPL_PF5MFP_EADC0_ST        (0xBUL << NUMAKER_SYS_GPF_MFPL_PF5MFP_Pos)    /*!< GPF_MFPL PF5 setting for EADC0_ST        */

/* PF.6 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_EBI_ADR19       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for EBI_ADR19       */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_SC0_CLK         (0x3UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for SC0_CLK         */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_I2S0_LRCK       (0x4UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for I2S0_LRCK       */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_SPI0_MOSI       (0x5UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for SPI0_MOSI       */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_UART4_RXD       (0x6UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for UART4_RXD       */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_EBI_nCS0        (0x7UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for EBI_nCS0        */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_SPI3_I2SMCLK    (0x9UL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for SPI3_I2SMCLK    */
#define NUMAKER_SYS_GPF_MFPL_PF6MFP_TAMPER0         (0xAUL << NUMAKER_SYS_GPF_MFPL_PF6MFP_Pos)    /*!< GPF_MFPL PF6 setting for TAMPER0         */

/* PF.7 MFP */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_EBI_ADR18       (0x2UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for EBI_ADR18       */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_SC0_DAT         (0x3UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for SC0_DAT         */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_I2S0_DO         (0x4UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for I2S0_DO         */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_SPI0_MISO       (0x5UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for SPI0_MISO       */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_UART4_TXD       (0x6UL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for UART4_TXD       */
#define NUMAKER_SYS_GPF_MFPL_PF7MFP_TAMPER1         (0xAUL << NUMAKER_SYS_GPF_MFPL_PF7MFP_Pos)    /*!< GPF_MFPL PF7 setting for TAMPER1         */

/* PF.8 MFP */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_EBI_ADR17       (0x2UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for EBI_ADR17       */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_SC0_RST         (0x3UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for SC0_RST         */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_I2S0_DI         (0x4UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for I2S0_DI         */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_SPI0_CLK        (0x5UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for SPI0_CLK        */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_UART5_nCTS      (0x6UL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for UART5_nCTS      */
#define NUMAKER_SYS_GPF_MFPH_PF8MFP_TAMPER2         (0xAUL << NUMAKER_SYS_GPF_MFPH_PF8MFP_Pos)    /*!< GPF_MFPH PF8 setting for TAMPER2         */

/* PF.9 MFP */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for GPIO            */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_EBI_ADR16       (0x2UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for EBI_ADR16       */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_SC0_PWR         (0x3UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for SC0_PWR         */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_I2S0_MCLK       (0x4UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for I2S0_MCLK       */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_SPI0_SS         (0x5UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for SPI0_SS         */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_UART5_nRTS      (0x6UL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for UART5_nRTS      */
#define NUMAKER_SYS_GPF_MFPH_PF9MFP_TAMPER3         (0xAUL << NUMAKER_SYS_GPF_MFPH_PF9MFP_Pos)    /*!< GPF_MFPH PF9 setting for TAMPER3         */

/* PF.10 MFP */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for GPIO           */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_EBI_ADR15      (0x2UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for EBI_ADR15      */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_SC0_nCD        (0x3UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for SC0_nCD        */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_I2S0_BCLK      (0x4UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for I2S0_BCLK      */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_SPI0_I2SMCLK   (0x5UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for SPI0_I2SMCLK   */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_UART5_RXD      (0x6UL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for UART5_RXD      */
#define NUMAKER_SYS_GPF_MFPH_PF10MFP_TAMPER4        (0xAUL << NUMAKER_SYS_GPF_MFPH_PF10MFP_Pos)   /*!< GPF_MFPH PF10 setting for TAMPER4        */

/* PF.11 MFP */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for GPIO           */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_EBI_ADR14      (0x2UL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for EBI_ADR14      */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_SPI2_MOSI      (0x3UL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for SPI2_MOSI      */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_UART5_TXD      (0x6UL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for UART5_TXD      */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_TAMPER5        (0xAUL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for TAMPER5        */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_TM5            (0xCUL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for TM5            */
#define NUMAKER_SYS_GPF_MFPH_PF11MFP_TM3            (0xDUL << NUMAKER_SYS_GPF_MFPH_PF11MFP_Pos)   /*!< GPF_MFPH PF11 setting for TM3            */

/* PG.2 MFP */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_GPIO            (0x0UL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for GPIO            */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_EBI_ADR11       (0x2UL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for EBI_ADR11       */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_SPI2_SS         (0x3UL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for SPI2_SS         */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_I2C0_SMBAL      (0x4UL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for I2C0_SMBAL      */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_I2C1_SCL        (0x5UL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for I2C1_SCL        */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_TM0             (0xDUL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for TM0             */
#define NUMAKER_SYS_GPG_MFPL_PG2MFP_LCD_SEG39       (0xFUL << NUMAKER_SYS_GPG_MFPL_PG2MFP_Pos)    /*!< GPG_MFPL PG2 setting for LCD_SEG39       */

/* PG.3 MFP */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_GPIO            (0x0UL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for GPIO            */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_EBI_ADR12       (0x2UL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for EBI_ADR12       */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_SPI2_CLK        (0x3UL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for SPI2_CLK        */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_I2C0_SMBSUS     (0x4UL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for I2C0_SMBSUS     */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_I2C1_SDA        (0x5UL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for I2C1_SDA        */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_TM1             (0xDUL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for TM1             */
#define NUMAKER_SYS_GPG_MFPL_PG3MFP_LCD_SEG38       (0xFUL << NUMAKER_SYS_GPG_MFPL_PG3MFP_Pos)    /*!< GPG_MFPL PG3 setting for LCD_SEG38       */

/* PG.4 MFP */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for GPIO            */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_EBI_ADR13       (0x2UL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for EBI_ADR13       */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_SPI2_MISO       (0x3UL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for SPI2_MISO       */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_TM4             (0xCUL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for TM4             */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_TM2             (0xDUL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for TM2             */
#define NUMAKER_SYS_GPG_MFPL_PG4MFP_LCD_SEG37       (0xFUL << NUMAKER_SYS_GPG_MFPL_PG4MFP_Pos)    /*!< GPG_MFPL PG4 setting for LCD_SEG37       */

/* PG.9 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPG_MFPH_PG9MFP_Pos)    /*!< GPG_MFPH PG9 setting for GPIO            */
#define NUMAKER_SYS_GPG_MFPH_PG9MFP_EBI_AD0         (0x2UL << NUMAKER_SYS_GPG_MFPH_PG9MFP_Pos)    /*!< GPG_MFPH PG9 setting for EBI_AD0         */
#define NUMAKER_SYS_GPG_MFPH_PG9MFP_BPWM0_CH5       (0xCUL << NUMAKER_SYS_GPG_MFPH_PG9MFP_Pos)    /*!< GPG_MFPH PG9 setting for BPWM0_CH5       */
#define NUMAKER_SYS_GPG_MFPH_PG9MFP_LCD_SEG21       (0xFUL << NUMAKER_SYS_GPG_MFPH_PG9MFP_Pos)    /*!< GPG_MFPH PG9 setting for LCD_SEG21       */

/* PG.10 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG10MFP_Pos)   /*!< GPG_MFPH PG10 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG10MFP_EBI_AD1        (0x2UL << NUMAKER_SYS_GPG_MFPH_PG10MFP_Pos)   /*!< GPG_MFPH PG10 setting for EBI_AD1        */
#define NUMAKER_SYS_GPG_MFPH_PG10MFP_BPWM0_CH4      (0xCUL << NUMAKER_SYS_GPG_MFPH_PG10MFP_Pos)   /*!< GPG_MFPH PG10 setting for BPWM0_CH4      */
#define NUMAKER_SYS_GPG_MFPH_PG10MFP_LCD_SEG20      (0xFUL << NUMAKER_SYS_GPG_MFPH_PG10MFP_Pos)   /*!< GPG_MFPH PG10 setting for LCD_SEG20      */

/* PG.11 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG11MFP_Pos)   /*!< GPG_MFPH PG11 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG11MFP_EBI_AD2        (0x2UL << NUMAKER_SYS_GPG_MFPH_PG11MFP_Pos)   /*!< GPG_MFPH PG11 setting for EBI_AD2        */
#define NUMAKER_SYS_GPG_MFPH_PG11MFP_BPWM0_CH3      (0xCUL << NUMAKER_SYS_GPG_MFPH_PG11MFP_Pos)   /*!< GPG_MFPH PG11 setting for BPWM0_CH3      */
#define NUMAKER_SYS_GPG_MFPH_PG11MFP_LCD_SEG19      (0xFUL << NUMAKER_SYS_GPG_MFPH_PG11MFP_Pos)   /*!< GPG_MFPH PG11 setting for LCD_SEG19      */

/* PG.12 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG12MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG12MFP_Pos)   /*!< GPG_MFPH PG12 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG12MFP_EBI_AD3        (0x2UL << NUMAKER_SYS_GPG_MFPH_PG12MFP_Pos)   /*!< GPG_MFPH PG12 setting for EBI_AD3        */
#define NUMAKER_SYS_GPG_MFPH_PG12MFP_BPWM0_CH2      (0xCUL << NUMAKER_SYS_GPG_MFPH_PG12MFP_Pos)   /*!< GPG_MFPH PG12 setting for BPWM0_CH2      */
#define NUMAKER_SYS_GPG_MFPH_PG12MFP_LCD_SEG18      (0xFUL << NUMAKER_SYS_GPG_MFPH_PG12MFP_Pos)   /*!< GPG_MFPH PG12 setting for LCD_SEG18      */

/* PG.13 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG13MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG13MFP_Pos)   /*!< GPG_MFPH PG13 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG13MFP_EBI_AD4        (0x2UL << NUMAKER_SYS_GPG_MFPH_PG13MFP_Pos)   /*!< GPG_MFPH PG13 setting for EBI_AD4        */
#define NUMAKER_SYS_GPG_MFPH_PG13MFP_BPWM0_CH1      (0xCUL << NUMAKER_SYS_GPG_MFPH_PG13MFP_Pos)   /*!< GPG_MFPH PG13 setting for BPWM0_CH1      */
#define NUMAKER_SYS_GPG_MFPH_PG13MFP_LCD_SEG17      (0xFUL << NUMAKER_SYS_GPG_MFPH_PG13MFP_Pos)   /*!< GPG_MFPH PG13 setting for LCD_SEG17      */

/* PG.14 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG14MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG14MFP_Pos)   /*!< GPG_MFPH PG14 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG14MFP_EBI_AD5        (0x2UL << NUMAKER_SYS_GPG_MFPH_PG14MFP_Pos)   /*!< GPG_MFPH PG14 setting for EBI_AD5        */
#define NUMAKER_SYS_GPG_MFPH_PG14MFP_BPWM0_CH0      (0xCUL << NUMAKER_SYS_GPG_MFPH_PG14MFP_Pos)   /*!< GPG_MFPH PG14 setting for BPWM0_CH0      */
#define NUMAKER_SYS_GPG_MFPH_PG14MFP_LCD_SEG16      (0xFUL << NUMAKER_SYS_GPG_MFPH_PG14MFP_Pos)   /*!< GPG_MFPH PG14 setting for LCD_SEG16      */

/* PG.15 MFP */
#define NUMAKER_SYS_GPG_MFPH_PG15MFP_GPIO           (0x0UL << NUMAKER_SYS_GPG_MFPH_PG15MFP_Pos)   /*!< GPG_MFPH PG15 setting for GPIO           */
#define NUMAKER_SYS_GPG_MFPH_PG15MFP_LCD_SEG15      (0xDUL << NUMAKER_SYS_GPG_MFPH_PG15MFP_Pos)   /*!< GPG_MFPH PG15 setting for LCD_SEG15      */
#define NUMAKER_SYS_GPG_MFPH_PG15MFP_CLKO           (0xEUL << NUMAKER_SYS_GPG_MFPH_PG15MFP_Pos)   /*!< GPG_MFPH PG15 setting for CLKO           */
#define NUMAKER_SYS_GPG_MFPH_PG15MFP_EADC0_ST       (0xFUL << NUMAKER_SYS_GPG_MFPH_PG15MFP_Pos)   /*!< GPG_MFPH PG15 setting for EADC0_ST       */

/* PH.4 MFP */
#define NUMAKER_SYS_GPH_MFPL_PH4MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPL_PH4MFP_Pos)    /*!< GPH_MFPL PH4 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPL_PH4MFP_EBI_ADR3        (0x2UL << NUMAKER_SYS_GPH_MFPL_PH4MFP_Pos)    /*!< GPH_MFPL PH4 setting for EBI_ADR3        */
#define NUMAKER_SYS_GPH_MFPL_PH4MFP_SPI1_MISO       (0x3UL << NUMAKER_SYS_GPH_MFPL_PH4MFP_Pos)    /*!< GPH_MFPL PH4 setting for SPI1_MISO       */
#define NUMAKER_SYS_GPH_MFPL_PH4MFP_LCD_SEG36       (0xFUL << NUMAKER_SYS_GPH_MFPL_PH4MFP_Pos)    /*!< GPH_MFPL PH4 setting for LCD_SEG36       */

/* PH.5 MFP */
#define NUMAKER_SYS_GPH_MFPL_PH5MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPL_PH5MFP_Pos)    /*!< GPH_MFPL PH5 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPL_PH5MFP_EBI_ADR2        (0x2UL << NUMAKER_SYS_GPH_MFPL_PH5MFP_Pos)    /*!< GPH_MFPL PH5 setting for EBI_ADR2        */
#define NUMAKER_SYS_GPH_MFPL_PH5MFP_SPI1_MOSI       (0x3UL << NUMAKER_SYS_GPH_MFPL_PH5MFP_Pos)    /*!< GPH_MFPL PH5 setting for SPI1_MOSI       */
#define NUMAKER_SYS_GPH_MFPL_PH5MFP_LCD_SEG35       (0xFUL << NUMAKER_SYS_GPH_MFPL_PH5MFP_Pos)    /*!< GPH_MFPL PH5 setting for LCD_SEG35       */

/* PH.6 MFP */
#define NUMAKER_SYS_GPH_MFPL_PH6MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPL_PH6MFP_Pos)    /*!< GPH_MFPL PH6 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPL_PH6MFP_EBI_ADR1        (0x2UL << NUMAKER_SYS_GPH_MFPL_PH6MFP_Pos)    /*!< GPH_MFPL PH6 setting for EBI_ADR1        */
#define NUMAKER_SYS_GPH_MFPL_PH6MFP_SPI1_CLK        (0x3UL << NUMAKER_SYS_GPH_MFPL_PH6MFP_Pos)    /*!< GPH_MFPL PH6 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPH_MFPL_PH6MFP_LCD_SEG34       (0xFUL << NUMAKER_SYS_GPH_MFPL_PH6MFP_Pos)    /*!< GPH_MFPL PH6 setting for LCD_SEG34       */

/* PH.7 MFP */
#define NUMAKER_SYS_GPH_MFPL_PH7MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPL_PH7MFP_Pos)    /*!< GPH_MFPL PH7 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPL_PH7MFP_EBI_ADR0        (0x2UL << NUMAKER_SYS_GPH_MFPL_PH7MFP_Pos)    /*!< GPH_MFPL PH7 setting for EBI_ADR0        */
#define NUMAKER_SYS_GPH_MFPL_PH7MFP_SPI1_SS         (0x3UL << NUMAKER_SYS_GPH_MFPL_PH7MFP_Pos)    /*!< GPH_MFPL PH7 setting for SPI1_SS         */
#define NUMAKER_SYS_GPH_MFPL_PH7MFP_LCD_SEG33       (0xFUL << NUMAKER_SYS_GPH_MFPL_PH7MFP_Pos)    /*!< GPH_MFPL PH7 setting for LCD_SEG33       */

/* PH.8 MFP */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_EBI_AD12        (0x2UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for EBI_AD12        */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_QSPI0_CLK       (0x3UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for QSPI0_CLK       */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_SC2_PWR         (0x4UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for SC2_PWR         */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_I2S0_DI         (0x5UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for I2S0_DI         */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_SPI1_CLK        (0x6UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for SPI1_CLK        */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_UART3_nRTS      (0x7UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for UART3_nRTS      */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_I2C1_SMBAL      (0x8UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for I2C1_SMBAL      */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_I2C2_SCL        (0x9UL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for I2C2_SCL        */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_UART1_TXD       (0xAUL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for UART1_TXD       */
#define NUMAKER_SYS_GPH_MFPH_PH8MFP_LCD_SEG4        (0xFUL << NUMAKER_SYS_GPH_MFPH_PH8MFP_Pos)    /*!< GPH_MFPH PH8 setting for LCD_SEG4        */

/* PH.9 MFP */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_GPIO            (0x0UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for GPIO            */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_EBI_AD13        (0x2UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for EBI_AD13        */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_QSPI0_SS        (0x3UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for QSPI0_SS        */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_SC2_RST         (0x4UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for SC2_RST         */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_I2S0_DO         (0x5UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for I2S0_DO         */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_SPI1_SS         (0x6UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for SPI1_SS         */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_UART3_nCTS      (0x7UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for UART3_nCTS      */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_I2C1_SMBSUS     (0x8UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for I2C1_SMBSUS     */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_I2C2_SDA        (0x9UL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for I2C2_SDA        */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_UART1_RXD       (0xAUL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for UART1_RXD       */
#define NUMAKER_SYS_GPH_MFPH_PH9MFP_LCD_SEG3        (0xFUL << NUMAKER_SYS_GPH_MFPH_PH9MFP_Pos)    /*!< GPH_MFPH PH9 setting for LCD_SEG3        */

/* PH.10 MFP */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_GPIO           (0x0UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for GPIO           */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_EBI_AD14       (0x2UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for EBI_AD14       */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_QSPI0_MISO1    (0x3UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for QSPI0_MISO1    */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_SC2_nCD        (0x4UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for SC2_nCD        */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_I2S0_LRCK      (0x5UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for I2S0_LRCK      */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_SPI1_I2SMCLK   (0x6UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for SPI1_I2SMCLK   */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_UART4_TXD      (0x7UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for UART4_TXD      */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_UART0_TXD      (0x8UL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for UART0_TXD      */
#define NUMAKER_SYS_GPH_MFPH_PH10MFP_LCD_SEG2       (0xFUL << NUMAKER_SYS_GPH_MFPH_PH10MFP_Pos)   /*!< GPH_MFPH PH10 setting for LCD_SEG2       */

/* PH.11 MFP */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_GPIO           (0x0UL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for GPIO           */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_EBI_AD15       (0x2UL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for EBI_AD15       */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_QSPI0_MOSI1    (0x3UL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for QSPI0_MOSI1    */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_UART4_RXD      (0x7UL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for UART4_RXD      */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_UART0_RXD      (0x8UL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for UART0_RXD      */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_EPWM0_CH5      (0xBUL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for EPWM0_CH5      */
#define NUMAKER_SYS_GPH_MFPH_PH11MFP_LCD_SEG1       (0xFUL << NUMAKER_SYS_GPH_MFPH_PH11MFP_Pos)   /*!< GPH_MFPH PH11 setting for LCD_SEG1       */

/* End of M2354 BSP sys.h pin-mux module copy */

#endif
