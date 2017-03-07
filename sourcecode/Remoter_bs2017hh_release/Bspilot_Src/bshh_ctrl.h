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

#ifndef __BSHH_CTRL_H
#define __BSHH_CTRL_H

extern uint8_t bshh_ctrl_command_table[32];

void bshh_ctrl_delay_ms(unsigned int dly);
void bshh_ctrl_num_to_asc(uint8_t number, uint8_t *asc_buf);
uint8_t bshh_ctrl_checksum(uint8_t data_len, uint8_t *data_buffer);
void bshh_ctrl_joystick(uint16_t js_throttle,uint16_t js_pitch,uint16_t js_roll,uint16_t js_yaw);
void bshh_ctrl_cal(void);
void bshh_ctrl_unlock(void);
void bshh_ctrl_highon(void);
void bshh_ctrl_highoff(void);

#endif
