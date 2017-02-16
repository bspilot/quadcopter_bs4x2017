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
#include "bshh_event.h"
#include "bshh_led.h"
#include "bshh_oled.h"
#include "bshh_ble.h"
#include "bshh_beep.h"
#include "bshh_adc.h"
#include "bshh_ctrl.h"

extern uint16_t bshh_adc_buffer[7];

uint32_t system_100ms_timer=0;
uint32_t system_200ms_timer=0;
uint32_t system_500ms_timer=0;

void bshh_event_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_event_loop(void)
{
	bshh_remote_control_event();
	bshh_adc_display_event();
    bshh_key_detect_event();
}

void bshh_remote_control_event(void)
{
	if(system_100ms_timer>100)
	{
		system_100ms_timer=0;
		bshh_ctrl_joystick(bshh_adc_buffer[3],bshh_adc_buffer[1],bshh_adc_buffer[0],bshh_adc_buffer[2]);
	}
}

void bshh_adc_display_event(void)
{
    if(system_200ms_timer>200)
	{
    	system_200ms_timer=0;
		bshh_adc_display();
	}
}

void bshh_key_detect_event(void)
{
	if(system_500ms_timer>500)
	{
		system_500ms_timer=0;
		bshh_led_toggle();
		//
		if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
		{
			bshh_event_delay_ms(10);
			bshh_beep_once();
			//
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_cal();
				BS_OLED_Show_Cal(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5)==GPIO_PIN_RESET);
				BS_OLED_Show_Cal(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_6)==GPIO_PIN_RESET)
		{
			bshh_event_delay_ms(10);
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
			bshh_event_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				if(bshh_adc_channel_index<6) bshh_adc_channel_index++;
				bshh_adc_display();
				BS_OLED_Show_Logo(1);
				while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_7)==GPIO_PIN_RESET);
				BS_OLED_Show_Logo(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
		{
			bshh_event_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				if(bshh_adc_channel_index>0) bshh_adc_channel_index--;
				bshh_adc_display();
				BS_OLED_Show_Logo(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13)==GPIO_PIN_RESET);
				BS_OLED_Show_Logo(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
		{
			bshh_event_delay_ms(10);
			if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET)
			{
				bshh_beep_once();
				bshh_ctrl_unlock();
				BS_OLED_Show_Unlock(1);
				while(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_14)==GPIO_PIN_RESET);
				BS_OLED_Show_Unlock(0);
			}
		}
		else if(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_15)==GPIO_PIN_RESET)
		{
			bshh_event_delay_ms(10);
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
}

