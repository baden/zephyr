/****************************************************************************//**
 * @file     startup_M2354.S
 * @version  V1.00
 * @brief    CMSIS Device Startup File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/



    .syntax unified
    .arch   armv8 - m.base


    .align  2
    .thumb_func
    .global __PC
    .type   __PC, % function
__PC:

    MOV     r0, lr
    BLX     lr
    .size   __PC, . - __PC


    .end
