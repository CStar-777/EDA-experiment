/* system.h
 *
 * Machine generated for a CPU named "cpu_0" as defined in:
 * d:\clock\software\hello_world_6_syslib\..\..\nioscpu.ptf
 *
 * Generated: 2021-12-03 14:27:02.816
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "nioscpu"
#define ALT_CPU_NAME "cpu_0"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "CYCLONEIII"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x018010e0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x018010e0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x018010e0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 50000000
#define ALT_IRQ_BASE NULL

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_BIG_ENDIAN 0

#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x00800020
#define NIOS2_RESET_ADDR 0x01400000
#define NIOS2_BREAK_ADDR 0x01800820

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_AVALON_CFI_FLASH
#define __ALTERA_AVALON_TRI_STATE_BRIDGE
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER

/*
 * cfi_flash_0 configuration
 *
 */

#define CFI_FLASH_0_NAME "/dev/cfi_flash_0"
#define CFI_FLASH_0_TYPE "altera_avalon_cfi_flash"
#define CFI_FLASH_0_BASE 0x01400000
#define CFI_FLASH_0_SPAN 4194304
#define CFI_FLASH_0_SETUP_VALUE 40
#define CFI_FLASH_0_WAIT_VALUE 160
#define CFI_FLASH_0_HOLD_VALUE 40
#define CFI_FLASH_0_TIMING_UNITS "ns"
#define CFI_FLASH_0_UNIT_MULTIPLIER 1
#define CFI_FLASH_0_SIZE 4194304
#define ALT_MODULE_CLASS_cfi_flash_0 altera_avalon_cfi_flash

/*
 * tri_state_bridge_0 configuration
 *
 */

#define TRI_STATE_BRIDGE_0_NAME "/dev/tri_state_bridge_0"
#define TRI_STATE_BRIDGE_0_TYPE "altera_avalon_tri_state_bridge"
#define ALT_MODULE_CLASS_tri_state_bridge_0 altera_avalon_tri_state_bridge

/*
 * jtag_uart_0 configuration
 *
 */

#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_BASE 0x018010e0
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_READ_CHAR_STREAM ""
#define JTAG_UART_0_SHOWASCII 1
#define JTAG_UART_0_READ_LE 0
#define JTAG_UART_0_WRITE_LE 0
#define JTAG_UART_0_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 0
#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart

/*
 * button_pio configuration
 *
 */

#define BUTTON_PIO_NAME "/dev/button_pio"
#define BUTTON_PIO_TYPE "altera_avalon_pio"
#define BUTTON_PIO_BASE 0x01801050
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_IRQ 1
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 8
#define BUTTON_PIO_RESET_VALUE 0
#define BUTTON_PIO_EDGE_TYPE "ANY"
#define BUTTON_PIO_IRQ_TYPE "EDGE"
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_FREQ 50000000
#define ALT_MODULE_CLASS_button_pio altera_avalon_pio

/*
 * sdram_0 configuration
 *
 */

#define SDRAM_0_NAME "/dev/sdram_0"
#define SDRAM_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_0_BASE 0x00800000
#define SDRAM_0_SPAN 8388608
#define SDRAM_0_REGISTER_DATA_IN 1
#define SDRAM_0_SIM_MODEL_BASE 1
#define SDRAM_0_SDRAM_DATA_WIDTH 16
#define SDRAM_0_SDRAM_ADDR_WIDTH 12
#define SDRAM_0_SDRAM_ROW_WIDTH 12
#define SDRAM_0_SDRAM_COL_WIDTH 8
#define SDRAM_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_0_SDRAM_NUM_BANKS 4
#define SDRAM_0_REFRESH_PERIOD 15.625
#define SDRAM_0_POWERUP_DELAY 100.0
#define SDRAM_0_CAS_LATENCY 3
#define SDRAM_0_T_RFC 70.0
#define SDRAM_0_T_RP 20.0
#define SDRAM_0_T_MRD 3
#define SDRAM_0_T_RCD 20.0
#define SDRAM_0_T_AC 5.5
#define SDRAM_0_T_WR 14.0
#define SDRAM_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_0_INIT_NOP_DELAY 0.0
#define SDRAM_0_SHARED_DATA 0
#define SDRAM_0_SDRAM_BANK_WIDTH 2
#define SDRAM_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_0_STARVATION_INDICATOR 0
#define SDRAM_0_IS_INITIALIZED 1
#define ALT_MODULE_CLASS_sdram_0 altera_avalon_new_sdram_controller

/*
 * led_pio configuration
 *
 */

#define LED_PIO_NAME "/dev/led_pio"
#define LED_PIO_TYPE "altera_avalon_pio"
#define LED_PIO_BASE 0x01801060
#define LED_PIO_SPAN 16
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_HAS_TRI 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_IN 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_RESET_VALUE 0
#define LED_PIO_EDGE_TYPE "NONE"
#define LED_PIO_IRQ_TYPE "NONE"
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_FREQ 50000000
#define ALT_MODULE_CLASS_led_pio altera_avalon_pio

/*
 * tft_lcd_data configuration
 *
 */

#define TFT_LCD_DATA_NAME "/dev/tft_lcd_data"
#define TFT_LCD_DATA_TYPE "altera_avalon_pio"
#define TFT_LCD_DATA_BASE 0x01801070
#define TFT_LCD_DATA_SPAN 16
#define TFT_LCD_DATA_DO_TEST_BENCH_WIRING 0
#define TFT_LCD_DATA_DRIVEN_SIM_VALUE 0
#define TFT_LCD_DATA_HAS_TRI 0
#define TFT_LCD_DATA_HAS_OUT 1
#define TFT_LCD_DATA_HAS_IN 0
#define TFT_LCD_DATA_CAPTURE 0
#define TFT_LCD_DATA_DATA_WIDTH 8
#define TFT_LCD_DATA_RESET_VALUE 0
#define TFT_LCD_DATA_EDGE_TYPE "NONE"
#define TFT_LCD_DATA_IRQ_TYPE "NONE"
#define TFT_LCD_DATA_BIT_CLEARING_EDGE_REGISTER 0
#define TFT_LCD_DATA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TFT_LCD_DATA_FREQ 50000000
#define ALT_MODULE_CLASS_tft_lcd_data altera_avalon_pio

/*
 * tft_lcd_nrst configuration
 *
 */

#define TFT_LCD_NRST_NAME "/dev/tft_lcd_nrst"
#define TFT_LCD_NRST_TYPE "altera_avalon_pio"
#define TFT_LCD_NRST_BASE 0x01801080
#define TFT_LCD_NRST_SPAN 16
#define TFT_LCD_NRST_DO_TEST_BENCH_WIRING 0
#define TFT_LCD_NRST_DRIVEN_SIM_VALUE 0
#define TFT_LCD_NRST_HAS_TRI 0
#define TFT_LCD_NRST_HAS_OUT 1
#define TFT_LCD_NRST_HAS_IN 0
#define TFT_LCD_NRST_CAPTURE 0
#define TFT_LCD_NRST_DATA_WIDTH 1
#define TFT_LCD_NRST_RESET_VALUE 0
#define TFT_LCD_NRST_EDGE_TYPE "NONE"
#define TFT_LCD_NRST_IRQ_TYPE "NONE"
#define TFT_LCD_NRST_BIT_CLEARING_EDGE_REGISTER 0
#define TFT_LCD_NRST_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TFT_LCD_NRST_FREQ 50000000
#define ALT_MODULE_CLASS_tft_lcd_nrst altera_avalon_pio

/*
 * tft_lcd_rs configuration
 *
 */

#define TFT_LCD_RS_NAME "/dev/tft_lcd_rs"
#define TFT_LCD_RS_TYPE "altera_avalon_pio"
#define TFT_LCD_RS_BASE 0x01801090
#define TFT_LCD_RS_SPAN 16
#define TFT_LCD_RS_DO_TEST_BENCH_WIRING 0
#define TFT_LCD_RS_DRIVEN_SIM_VALUE 0
#define TFT_LCD_RS_HAS_TRI 0
#define TFT_LCD_RS_HAS_OUT 1
#define TFT_LCD_RS_HAS_IN 0
#define TFT_LCD_RS_CAPTURE 0
#define TFT_LCD_RS_DATA_WIDTH 1
#define TFT_LCD_RS_RESET_VALUE 0
#define TFT_LCD_RS_EDGE_TYPE "NONE"
#define TFT_LCD_RS_IRQ_TYPE "NONE"
#define TFT_LCD_RS_BIT_CLEARING_EDGE_REGISTER 0
#define TFT_LCD_RS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TFT_LCD_RS_FREQ 50000000
#define ALT_MODULE_CLASS_tft_lcd_rs altera_avalon_pio

/*
 * tft_lcd_nrd configuration
 *
 */

#define TFT_LCD_NRD_NAME "/dev/tft_lcd_nrd"
#define TFT_LCD_NRD_TYPE "altera_avalon_pio"
#define TFT_LCD_NRD_BASE 0x018010a0
#define TFT_LCD_NRD_SPAN 16
#define TFT_LCD_NRD_DO_TEST_BENCH_WIRING 0
#define TFT_LCD_NRD_DRIVEN_SIM_VALUE 0
#define TFT_LCD_NRD_HAS_TRI 0
#define TFT_LCD_NRD_HAS_OUT 1
#define TFT_LCD_NRD_HAS_IN 0
#define TFT_LCD_NRD_CAPTURE 0
#define TFT_LCD_NRD_DATA_WIDTH 1
#define TFT_LCD_NRD_RESET_VALUE 0
#define TFT_LCD_NRD_EDGE_TYPE "NONE"
#define TFT_LCD_NRD_IRQ_TYPE "NONE"
#define TFT_LCD_NRD_BIT_CLEARING_EDGE_REGISTER 0
#define TFT_LCD_NRD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TFT_LCD_NRD_FREQ 50000000
#define ALT_MODULE_CLASS_tft_lcd_nrd altera_avalon_pio

/*
 * tft_lcd_nwr configuration
 *
 */

#define TFT_LCD_NWR_NAME "/dev/tft_lcd_nwr"
#define TFT_LCD_NWR_TYPE "altera_avalon_pio"
#define TFT_LCD_NWR_BASE 0x018010b0
#define TFT_LCD_NWR_SPAN 16
#define TFT_LCD_NWR_DO_TEST_BENCH_WIRING 0
#define TFT_LCD_NWR_DRIVEN_SIM_VALUE 0
#define TFT_LCD_NWR_HAS_TRI 0
#define TFT_LCD_NWR_HAS_OUT 1
#define TFT_LCD_NWR_HAS_IN 0
#define TFT_LCD_NWR_CAPTURE 0
#define TFT_LCD_NWR_DATA_WIDTH 1
#define TFT_LCD_NWR_RESET_VALUE 0
#define TFT_LCD_NWR_EDGE_TYPE "NONE"
#define TFT_LCD_NWR_IRQ_TYPE "NONE"
#define TFT_LCD_NWR_BIT_CLEARING_EDGE_REGISTER 0
#define TFT_LCD_NWR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TFT_LCD_NWR_FREQ 50000000
#define ALT_MODULE_CLASS_tft_lcd_nwr altera_avalon_pio

/*
 * col configuration
 *
 */

#define COL_NAME "/dev/col"
#define COL_TYPE "altera_avalon_pio"
#define COL_BASE 0x018010c0
#define COL_SPAN 16
#define COL_DO_TEST_BENCH_WIRING 0
#define COL_DRIVEN_SIM_VALUE 0
#define COL_HAS_TRI 0
#define COL_HAS_OUT 1
#define COL_HAS_IN 0
#define COL_CAPTURE 0
#define COL_DATA_WIDTH 4
#define COL_RESET_VALUE 0
#define COL_EDGE_TYPE "NONE"
#define COL_IRQ_TYPE "NONE"
#define COL_BIT_CLEARING_EDGE_REGISTER 0
#define COL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define COL_FREQ 50000000
#define ALT_MODULE_CLASS_col altera_avalon_pio

/*
 * row configuration
 *
 */

#define ROW_NAME "/dev/row"
#define ROW_TYPE "altera_avalon_pio"
#define ROW_BASE 0x018010d0
#define ROW_SPAN 16
#define ROW_DO_TEST_BENCH_WIRING 0
#define ROW_DRIVEN_SIM_VALUE 0
#define ROW_HAS_TRI 0
#define ROW_HAS_OUT 1
#define ROW_HAS_IN 0
#define ROW_CAPTURE 0
#define ROW_DATA_WIDTH 16
#define ROW_RESET_VALUE 0
#define ROW_EDGE_TYPE "NONE"
#define ROW_IRQ_TYPE "NONE"
#define ROW_BIT_CLEARING_EDGE_REGISTER 0
#define ROW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ROW_FREQ 50000000
#define ALT_MODULE_CLASS_row altera_avalon_pio

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       SDRAM_0
#define ALT_RODATA_DEVICE     SDRAM_0
#define ALT_RWDATA_DEVICE     SDRAM_0
#define ALT_EXCEPTIONS_DEVICE SDRAM_0
#define ALT_RESET_DEVICE      CFI_FLASH_0


#endif /* __SYSTEM_H_ */
