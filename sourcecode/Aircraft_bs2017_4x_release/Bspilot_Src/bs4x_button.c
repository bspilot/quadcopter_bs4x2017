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
#include "bs4x_button.h"

uint8_t bshh_nrf_ble_mode;

void bshh_button_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bs4x_button_mode_detect(void)
{
	if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==GPIO_PIN_RESET) bshh_nrf_ble_mode=BS4X_BLE_MODE;
	else bs4x_nrf_ble_mode=BS4X_NRF_MODE;
}

