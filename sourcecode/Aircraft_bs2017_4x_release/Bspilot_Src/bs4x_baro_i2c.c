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
#include "bs4x_baro_i2c.h"

void bs4x_baro_i2c_delay(void)
{
	uint8_t dly=100;
	//
	while(--dly);
}

uint8_t bs4x_baro_i2c_start(void)
{
	BS4X_BARO_I2C_SDA_1;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_1;
 	BS4X_BARO_I2C_NOP;
	//
 	if(!BS4X_BARO_I2C_SDA_STATE) return BS4X_BARO_I2C_BUS_BUSY;
	//
 	BS4X_BARO_I2C_SDA_0;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_0;
 	BS4X_BARO_I2C_NOP;
	//
 	if(BS4X_BARO_I2C_SDA_STATE) return BS4X_BARO_I2C_BUS_ERROR;
	//
 	return BS4X_BARO_I2C_READY;
}

uint8_t bs4x_baro_i2c_stop(void)
{
 	BS4X_BARO_I2C_SDA_0;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_1;
 	BS4X_BARO_I2C_NOP;
	//
 	if(BS4X_BARO_I2C_SDA_STATE) return BS4X_BARO_I2C_BUS_ERROR;
 	//
 	BS4X_BARO_I2C_SDA_1;
 	BS4X_BARO_I2C_NOP;
 	//
 	return BS4X_BARO_I2C_READY;
}

uint8_t bs4x_baro_i2c_send_byte(uint8_t bs4x_baro_i2c_data)
{
	int8_t i;
	uint8_t bit;
 	//
	BS4X_BARO_I2C_SCL_0;
 	for(i=7;i>=0;i--)
 	{
 		bit=(bs4x_baro_i2c_data>>i)&0x01;
  		if(bit) BS4X_BARO_I2C_SDA_1;
   		else BS4X_BARO_I2C_SDA_0;
		//
  		BS4X_BARO_I2C_NOP;
		//
  		BS4X_BARO_I2C_SCL_1;
  		BS4X_BARO_I2C_NOP;
  		//
  		BS4X_BARO_I2C_SCL_0;
  		BS4X_BARO_I2C_NOP;
 	}
	//
 	BS4X_BARO_I2C_SDA_1;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_1;
 	BS4X_BARO_I2C_NOP;
 	//
 	if(BS4X_BARO_I2C_SDA_STATE)
 	{
  		BS4X_BARO_I2C_SCL_0;
  		return BS4X_BARO_I2C_NACK;
 	}
 	else
 	{
  		BS4X_BARO_I2C_SCL_0;
  		return BS4X_BARO_I2C_ACK;
 	}
}

uint8_t bs4x_baro_i2c_receive_byte_no_ack(uint8_t *i2c_data_ptr)
{
	int8_t i;
	uint8_t bit;
	//
 	BS4X_BARO_I2C_SDA_1;
 	BS4X_BARO_I2C_SCL_0;
 	*i2c_data_ptr=0;
	//
 	for(i=7;i>=0;i--)
 	{
  		BS4X_BARO_I2C_SCL_1;
  		BS4X_BARO_I2C_NOP;
		//
  		if(BS4X_BARO_I2C_SDA_STATE)	bit=1;
  		else bit=0;
  		*i2c_data_ptr|=bit<<i;
  		//
  		BS4X_BARO_I2C_SCL_0;
  		BS4X_BARO_I2C_NOP;
 	}
 	//
	BS4X_BARO_I2C_SDA_1;
	BS4X_BARO_I2C_NOP;
	//
	BS4X_BARO_I2C_SCL_1;
	BS4X_BARO_I2C_NOP;
	//
	BS4X_BARO_I2C_SCL_0;
	BS4X_BARO_I2C_NOP;
	//
 	return BS4X_BARO_I2C_SUCCESS;
}

uint8_t bs4x_baro_i2c_receive_byte_with_ack(uint8_t *i2c_data_ptr)
{
	int8_t i;
	uint8_t bit;
	//
 	BS4X_BARO_I2C_SDA_1;
 	BS4X_BARO_I2C_SCL_0;
 	*i2c_data_ptr=0;
	//
 	for(i=7;i>=0;i--)
 	{
  		BS4X_BARO_I2C_SCL_1;
  		BS4X_BARO_I2C_NOP;
		//
  		if(BS4X_BARO_I2C_SDA_STATE)	bit=1;
  		else bit=0;
  		*i2c_data_ptr|=bit<<i;
  		//
  		BS4X_BARO_I2C_SCL_0;
  		BS4X_BARO_I2C_NOP;
 	}
 	//
 	BS4X_BARO_I2C_SDA_0;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_1;
 	BS4X_BARO_I2C_NOP;
 	//
 	BS4X_BARO_I2C_SCL_0;
 	BS4X_BARO_I2C_NOP;
 	//
 	return BS4X_BARO_I2C_SUCCESS;
}

