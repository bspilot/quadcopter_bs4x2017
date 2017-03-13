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
#include "bs4x_hmc5883l.h"
//
extern I2C_HandleTypeDef hi2c2;
//
uint8_t hmc5883l_id[4];
//
void bs4x_hmc5883l_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bs4x_hmc5883l_whoami(void)
{
	HAL_I2C_Mem_Read(&hi2c2, 0x3c, 0x0a, 0x01, hmc5883l_id, 0x02, 100);
}

