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
#include "bshh_led.h"
#include "bshh_oled.h"
#include "bshh_ble.h"
#include "bshh_event.h"
#include "bshh_button.h"
//
extern UART_HandleTypeDef huart3;
//
uint8_t ble_command_table[32];
uint8_t ble_status_buffer[32];
uint16_t ble_command_len=0;
uint16_t ble_status_len=0;

void bshh_led_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_ble_show_command(uint8_t row, uint8_t *status_ptr, uint16_t status_len)
{
	uint8_t i;
	uint8_t index=status_len;
	//
	for(i=0;i<5;i++)
	{
		if(index>0)
		{
			index--;
			BS_OLED_Show_Char(row,120-i*8,status_ptr[index]);
		}
	}
}


void bshh_ble_send_ctrl_data(uint8_t *command_table, uint8_t command_len)
{
	if(bshh_nrf_ble_mode==BSHH_BLE_MODE) HAL_UART_Transmit(&huart3, command_table, command_len, 100);
}

void bshh_ble_AT_Test(void)
{
	ble_command_table[0]='A';
	ble_command_table[1]='T';
	ble_command_table[2]='+';
	ble_command_table[3]='R';
	ble_command_table[4]='O';
	ble_command_table[5]='L';
	ble_command_table[6]='E';
	ble_command_table[7]='?';
	ble_command_len=8;
	ble_status_len=8;
	//
	HAL_UART_Transmit(&huart3, ble_command_table, ble_command_len, 1000);
	HAL_UART_Receive(&huart3, ble_status_buffer, ble_status_len, 1000);
	//
	bshh_ble_show_command(3, ble_status_buffer, ble_status_len);
}

void bshh_ble_AT_Clear(void)
{
	ble_command_table[0]='A';
	ble_command_table[1]='T';
	ble_command_table[2]='+';
	ble_command_table[3]='C';
	ble_command_table[4]='L';
	ble_command_table[5]='E';
	ble_command_table[6]='A';
	ble_command_table[7]='R';
	ble_command_len=8;
	ble_status_len=8;
	//
	HAL_UART_Transmit(&huart3, ble_command_table, ble_command_len, 1000);
	HAL_UART_Receive(&huart3, ble_status_buffer, ble_status_len, 1000);
	//
	bshh_ble_show_command(4, ble_status_buffer, ble_status_len);
}


