/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h> 
#include "system.h" 
#include "altera_avalon_pio_regs.h" 
#include "alt_types.h" 
#include <unistd.h> 
#include <string.h> 
unsigned char seg[]={'1','2','3','4','5','6','7','8','9','0','a','b','c','d','e','f', 'g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'}; 
void Write_data(alt_u8 data) 
{ 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_RS_BASE,1); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NWR_BASE,0); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_DATA_BASE,data); //地址计数器自动加1，显示屏不移动 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NRD_BASE,1); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NRD_BASE,0); 
usleep(1000); 
} 
void Write_cmd(alt_u8 cmd) 
{ 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_RS_BASE,0); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NWR_BASE,0); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_DATA_BASE,cmd); //地 
址计数器自动加1，显示屏不移动 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NRD_BASE,1); 
IOWR_ALTERA_AVALON_PIO_DATA(TFT_LCD_NRD_BASE,0); 
usleep(1000); 
} 
void initial(void) 
{ 
Write_cmd(0x3c); 
Write_cmd(0x06); 
Write_cmd(0x0e); 
Write_cmd(0x01); 
} 
    void main() 
    { 
        unsigned char data_index; 
        unsigned char add_first,add_second; 
        initial(); //初始化LCD 
        data_index=0;add_first=0x80;add_second=0xC0; 
        while(data_index<=15) //第一行显示 
        { 
            Write_cmd(add_first+data_index); 
            Write_data(seg[data_index]); 
            data_index++; 
        }
        while(16<=data_index<=31) //第二行显示 
        { 
            Write_cmd(add_second+data_index-15); 
            Write_data(seg[data_index]); 
            data_index++; 
         }
        return 0; 
     }
