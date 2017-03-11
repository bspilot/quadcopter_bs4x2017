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
#include "bs4x_event.h"
#include "bs4x_led.h"
#include "bs4x_ble.h"
#include "bs4x_nrf.h"
//
uint32_t system_100ms_timer=0;
uint32_t system_500ms_timer=0;
uint32_t system_1s_timer=0;
uint32_t system_5s_timer=0;
//
void bs4x_event_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bs4x_event_loop(void)
{
	bs4x_nrf_check_event();
	bs4x_led_event();
	//
	bs4x_ble_send_event();
	bs4x_system_reset_event();
}
//
void bs4x_nrf_check_event(void)
{
	if(system_100ms_timer>50)
	{
		system_100ms_timer=0;
		bs4x_nrf_status_check();
	}
}
//
void bs4x_led_event(void)
{
	if(system_500ms_timer>500)
	{
		system_500ms_timer=0;
		bs4x_led_toggle();
	}
}
//
void bs4x_ble_send_event(void)
{
	if(system_1s_timer>1000)
	{
		system_1s_timer=0;
		//
		bs4x_nrf_send_debug_message();
	}
}
//
void bs4x_system_reset_event(void)
{
	if(system_5s_timer>20000)
	{
		system_5s_timer=0;
	}
}

