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

#ifndef __BSHH_BLE_H
#define __BSHH_BLE_H

void bshh_ble_delay_ms(unsigned int dly);
void bshh_ble_show_command(uint8_t row, uint8_t *status_ptr, uint16_t status_len);
void bshh_ble_show_data(uint8_t row, uint8_t *status_ptr, uint16_t status_len);
void bshh_ble_send_remote_command(uint8_t *command_table, uint8_t command_len);
void bshh_ble_send_ctrl_command(uint8_t *command_table, uint8_t command_len);
void bshh_ble_AT_Test(void);
void bshh_ble_AT_Clear(void);

#endif
