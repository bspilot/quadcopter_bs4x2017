/**
  *********************************************************************************************
  *BS4X-2017 is a open source Four-Axis-Aircraft.
  *It provides the all information for hobbyists to build their own aircrafts.
  *The open documents include the schematic, source code.
  *You can visit our web-site www.bspilot.com to get more information,
  *or send the email to support@bspilot.com.
  *
  *COPYRIGHT(c) 2017 Dr.R&D (www.bspilot.com)
  *These open source software and hardware can only be used for personal study.
  *Without authorization,any individuality or group can't use it for commercial purpose.
  *Redistribution and use in source and binary forms must retain the above copyright notice.
  **********************************************************************************************
 **/

#include "main.h"
#include "stm32f1xx_hal.h"
#include "bshh_button.h"
#include "bshh_beep.h"
#include "bshh_oled.h"
#include "bshh_ctrl.h"
#include "bshh_adc.h"
#include "bshh_ble.h"

uint8_t bshh_nrf_ble_mode;

void bshh_button_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_button_mode_detect(void)
{
	if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_9)==GPIO_PIN_RESET) bshh_nrf_ble_mode=BSHH_NRF_MODE;
	else bshh_nrf_ble_mode=BSHH_BLE_MODE;
}

void bshh_button_key_detect(void)
{
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			bshh_beep_once();
			//
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_unlock();
				BS_OLED_Show_Unlock(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET);
				BS_OLED_Show_Unlock(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ble_AT_Test();
				BS_OLED_Show_BLE_Test(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET);
				BS_OLED_Show_BLE_Test(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_highoff();
				BS_OLED_Show_HighOff_Mode(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET);
				BS_OLED_Show_HighOff_Mode(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_highon();
				BS_OLED_Show_HighOn_Mode(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET);
				BS_OLED_Show_HighOn_Mode(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_cal();
				BS_OLED_Show_Cal(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET);
				BS_OLED_Show_Cal(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET)
		{
			bshh_button_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ble_AT_Clear();
				BS_OLED_Show_BLE_Clear(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET);
				BS_OLED_Show_BLE_Clear(0);
			}
		}

}


