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
#include "bshh_main.h"
#include "bshh_led.h"
#include "bshh_oled.h"
#include "bshh_ble.h"
#include "bshh_beep.h"

void bshh_main_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_main_loop(void)
{
	BS_OLED_Configuration();
	//
	while (1)
	{
		bshh_led_toggle();
		//
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
			{
				BS_OLED_Show_Cal(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET);
				BS_OLED_Show_Cal(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET)
			{
				bshh_ble_AT_Test();
				BS_OLED_Show_BLE_Test(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET);
				BS_OLED_Show_BLE_Test(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET)
			{
				BS_OLED_Show_Logo(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET);
				BS_OLED_Show_Logo(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
			{
				BS_OLED_Show_Logo(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET);
				BS_OLED_Show_Logo(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
			{
				BS_OLED_Show_Unlock(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET);
				BS_OLED_Show_Unlock(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET)
		{
			bshh_main_delay_ms(10);
			bshh_beep_once();
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET)
			{
				bshh_ble_AT_Clear();
				BS_OLED_Show_BLE_Clear(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET);
				BS_OLED_Show_BLE_Clear(0);
			}
		}
	}
}


