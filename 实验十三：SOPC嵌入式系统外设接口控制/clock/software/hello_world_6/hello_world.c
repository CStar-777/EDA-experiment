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

#include "system.h" 
#include "altera_avalon_pio_regs.h" 
#include "alt_types.h"
alt_u16 row_num[2][16]= {{0x7FFF,0x4088,0x4208,0x5D8C,
                          0x6079,0x0082,0x10C4,0x1398,
                          0x0C90,0xF080,0x5080,0x17FF,
                          0x1080,0x1090,0x1088,0x1086},//chen
                         {0x0010,0x0062,0x47A2,0x5524,
                          0x5564,0xF36F,0x5555,0x5555,
                          0x57FD,0x04E5,0x0D55,0xFB6D,
                          0x8A6F,0x8A64,0xF524,0x1926} // xin
                        };
int main()
{
      alt_u8 col_num,read_data;
      while(1)
      {
        read_data=IORD_ALTERA_AVALON_PIO_DATA(BUTTON_PIO_BASE)  ;
        for(col_num=0;col_num<16;col_num++)
        {
            IOWR_ALTERA_AVALON_PIO_DATA(ROW_BASE,0);
            IOWR_ALTERA_AVALON_PIO_DATA(COL_BASE,col_num) ;
            if(read_data==0xfe){
                IOWR_ALTERA_AVALON_PIO_DATA(ROW_BASE,row_num[0][col_num]);
            }else{
                IOWR_ALTERA_AVALON_PIO_DATA(ROW_BASE,row_num[1][col_num]);
            }
            usleep(1);
        }
      }
      return 0;
}               
                        
                        
                        
                        
                        