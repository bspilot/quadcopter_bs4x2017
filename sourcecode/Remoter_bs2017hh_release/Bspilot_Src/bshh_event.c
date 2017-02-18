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
#include "bshh_nrf.h"
#include "bshh_button.h"

uint32_t system_100ms_timer=0;
uint32_t system_200ms_timer=0;
uint32_t system_500ms_timer=0;

void bshh_event_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_event_loop(void)
{
	bshh_nrf_status_check();
	//
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
		bshh_nrf_show_times();
	}
}

void bshh_key_detect_event(void)
{
	if(system_500ms_timer>500)
	{
		system_500ms_timer=0;
		bshh_led_toggle();
		bshh_button_key_detect();
	}
}

