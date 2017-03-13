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
#include "bshh_beep.h"
#include "bshh_event.h"

void bshh_beep_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_beep_on(void)
{
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,GPIO_PIN_SET);
	bshh_beep_delay_ms(200);
}

void bshh_beep_off(void)
{
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,GPIO_PIN_RESET);
}

void bshh_beep_once(void)
{
	bshh_beep_on();
	bshh_beep_off();
}

