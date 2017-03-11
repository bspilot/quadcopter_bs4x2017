/**
  *********************************************************************************************
  *BS4X-2017 is a open source Four-Axis-Aircraft.
  *It provides the all information for hobbyists to build their own aircrafts.
  *The open documents include the schematic, source code.
  *You can visit our web-site www.bspilot.com to get more information,
  *or send the email to support@bspilot.com.
  *
  * COPYRIGHT(c) 2017 Dr.R&D (www.bspilot.com)
  *
  * Redistribution and use in source and binary forms must retain the above copyright notice.
  **********************************************************************************************
 **/

#include "main.h"
#include "stm32f1xx_hal.h"
#include "bs4x_led.h"
#include "bs4x_ble.h"
#include "bs4x_ble_table.h"
//
extern UART_HandleTypeDef huart1;
//
uint8_t bs4x_ble_send_data_buf[64];
uint8_t bs4x_ble_receive_data_buf[64];
uint8_t ble_send_index=0;
//
void bs4x_ble_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}
//
void bs4x_ble_send_string(char *str)
{
	uint8_t len=0;
	//
	while(str[len]!='\0') len++;
	HAL_UART_Transmit_DMA(&huart1, str, len);
}
//
void bs4x_ble_send_data(uint8_t len)
{
	HAL_UART_Transmit_DMA(&huart1, bs4x_ble_send_data_buf, len);
}
//
void bs4x_ble_receive_data()
{
	HAL_UART_Receive_DMA(&huart1, bs4x_ble_receive_data_buf, 4);
}
//
void bs4x_ble_send_char(uint8_t *data_ptr,uint8_t len)
{
	uint8_t uchar_buf[64];
	uint8_t i;
	//
	for(i=0;i<len;i++)
	{
		uchar_buf[i*2]=BS_BLE_NUM_Table[(data_ptr[i]&0xf0)>>4];
		uchar_buf[i*2+1]=BS_BLE_NUM_Table[data_ptr[i]&0x0f];
	}
	uchar_buf[len*2]='\r';
	uchar_buf[len*2+1]='\n';
	//
	HAL_UART_Transmit_DMA(&huart1, uchar_buf, len*2+2);
}
//

