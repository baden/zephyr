# Copyright (c) 2023 Nuvoton Technology Corporation.
#
# SPDX-License-Identifier: Apache-2.0

zephyr_sources(soc.c soc.S)

#set(SOC_LINKER_SCRIPT ${ZEPHYR_BASE}/include/zephyr/arch/arm/cortex_m/scripts/linker.ld CACHE INTERNAL "")
set(SOC_LINKER_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/linker.ld CACHE INTERNAL "")
