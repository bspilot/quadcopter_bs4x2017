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
#include "bs4x_baro.h"
#include "bs4x_baro_i2c.h"

uint8_t bs4x_baro_id[2];

void bs4x_baro_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bs4x_baro_whoami(void)
{
	bs4x_baro_i2c_start();
	bs4x_baro_i2c_send_byte(0x0ec);
	bs4x_baro_i2c_send_byte(0x0d0);
	bs4x_baro_i2c_start();
	bs4x_baro_i2c_send_byte(0x0ed);
	bs4x_baro_i2c_receive_byte_no_ack(bs4x_baro_id);
	bs4x_baro_i2c_stop();
}


