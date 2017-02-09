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

void bshh_led_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}
void bshh_led_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_8);
	bshh_led_delay_ms(500);
}
