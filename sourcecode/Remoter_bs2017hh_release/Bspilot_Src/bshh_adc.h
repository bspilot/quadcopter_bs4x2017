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

#ifndef __BSHH_ADC_H
#define __BSHH_ADC_H

extern uint8_t bshh_adc_channel_index;

void bshh_adc_delay_ms(unsigned int dly);
void bshh_adc_start(void);
void bshh_adc_display(void);

#endif
