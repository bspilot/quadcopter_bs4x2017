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

#ifndef __BS4X_EVENT_H
#define __BS4X_EVENT_H

void bs4x_event_delay_ms(unsigned int dly);
void bs4x_event_loop(void);
void bs4x_led_event(void);
void bs4x_ble_send_event(void);
void bs4x_nrf_check_event(void);
void bs4x_system_reset_event(void);

#endif
