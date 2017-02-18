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

#ifndef __BSHH_BUTTON_H
#define __BSHH_BUTTON_H

extern uint8_t bshh_nrf_ble_mode;

#define BSHH_NRF_MODE 0
#define BSHH_BLE_MODE 1

void bshh_button_delay_ms(unsigned int dly);
void bshh_button_mode_detect(void);
void bshh_button_key_detect(void);

#endif
