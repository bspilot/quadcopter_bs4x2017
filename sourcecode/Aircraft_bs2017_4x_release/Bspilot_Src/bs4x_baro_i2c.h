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

#ifndef __BS4X_BARO_I2C_H
#define __BS4X_BARO_I2C_H
//
#define BS4X_BARO_I2C_SDA_0 		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_RESET)
#define BS4X_BARO_I2C_SDA_1   		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET)
#define BS4X_BARO_I2C_SCL_0 		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET)
#define BS4X_BARO_I2C_SCL_1 		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET)
#define BS4X_BARO_I2C_SDA_STATE   	HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)
#define BS4X_BARO_I2C_NOP  			bs4x_baro_i2c_delay()
//
#define BS4X_BARO_I2C_READY			0x00
#define BS4X_BARO_I2C_SUCCESS		0x01
#define BS4X_BARO_I2C_BUS_BUSY		0x02
#define BS4X_BARO_I2C_BUS_ERROR		0x03
//
#define BS4X_BARO_I2C_NACK	  		0x00
#define BS4X_BARO_I2C_ACK			0x01
//
void bs4x_baro_i2c_delay_ms(void);
uint8_t bs4x_baro_i2c_start(void);
uint8_t bs4x_baro_i2c_stop(void);
uint8_t bs4x_baro_i2c_send_byte(uint8_t bs4x_baro_i2c_data);
uint8_t bs4x_baro_i2c_receive_byte_no_ack(uint8_t *i2c_data_ptr);
uint8_t bs4x_baro_i2c_receive_byte_with_ack(uint8_t *i2c_data_ptr);


#endif
