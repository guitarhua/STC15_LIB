/********************************************************************************
* 文件：main.c
* 作者：刘帅
* 描述：工程主函数
* 日期：2015-07-25
* 修改：2015-11-08
********************************************************************************/
#include <stdio.h>
#include "STC15xx_config.h"
#include "UART.h"
#include "GPIO.h"

//***********************************led**************************************************
sbit	led=P3^0;

void main()
{
	int x = 123;
	
  GPIO_config();
  UART1_config();
  EA = 1;
	
  printf("test....\r\n");
  for(;;)
  {
		printf("x = %d\r\n", x);
    led=~led;
    delay_ms(500);
  }
}