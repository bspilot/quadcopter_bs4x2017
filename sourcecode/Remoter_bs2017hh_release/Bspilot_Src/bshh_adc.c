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
#include "bshh_oled.h"
#include "bshh_adc.h"
#include "bshh_event.h"

extern ADC_HandleTypeDef hadc1;
uint16_t bshh_adc_buffer[7];
uint32_t bat_vol;

void bshh_adc_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_adc_start(void)
{
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*)bshh_adc_buffer, 7);
}

void bshh_adc_display(void)
{
	bat_vol=bshh_adc_buffer[4];
	bat_vol=(bat_vol*3300)>>11;
	BS_OLED_Show_Number(7,42,bat_vol);
	BS_OLED_Show_Char(7,66,'m');
	BS_OLED_Show_Char(7,72,'V');
}
