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

#ifndef __BS4X_NRF_H
#define __BS4X_NRF_H

#define BS_NRF_CS_LOW() 	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_RESET)
#define BS_NRF_CS_HIGH() 	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET)
#define BS_NRF_CE_LOW() 	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,GPIO_PIN_RESET)
#define BS_NRF_CE_HIGH() 	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,GPIO_PIN_SET)

void bs4x_nrf_delay_ms(unsigned int dly);
void bs4x_nrf_read_config(void);
void bs4x_nrf_write_reg(uint8_t *reg_buf);
void bs4x_nrf_write_buffer(uint8_t reg,uint8_t value);
void bs4x_nrf_write_addr_tx(uint8_t index);
void bs4x_nrf_write_addr_rx(uint8_t index);
void bs4x_nrf_get_rx_data(void);
void bs4x_nrf_show_tx_addr(void);
void bs4x_nrf_show_rx_addr(void);
void bs4x_nrf_tx_configuration(void);
void bs4x_nrf_rx_configuration(void);
void bs4x_nrf_transmit(uint8_t *data_ptr);
void bs4x_nrf_receive(void);

void bs4x_nrf_configuration(void);
void bs4x_nrf_send_ctrl_data(uint8_t *ctrl_data);
void bs4x_nrf_status_check(void);
void bs4x_nrf_send_debug_message(void);

#endif
