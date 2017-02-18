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

#ifndef __BSHH_NRF_TABLE_H
#define __BSHH_NRF_TABLE_H

#define EN_AA           0x01
#define EN_RXADDR       0x02
#define SETUP_AW        0x03
#define SETUP_RETR      0x04
#define RF_CH           0x05
#define RF_SETUP        0x06
#define RX_PW_P0        0x11
#define CONFIG          0x00

const uint8_t BS_NRF_TX_Configuration_Table[][2]=
{
{EN_AA,0x01},
{EN_RXADDR,0x01},
{SETUP_AW,0x03},
{SETUP_RETR,0x1A},
{RF_CH,0x50},
{RF_SETUP,0x0F},
{RX_PW_P0,0x10},
{CONFIG,0x0E},
};

const uint8_t BS_NRF_RX_Configuration_Table[][2]=
{
{EN_AA,0x01},
{EN_RXADDR,0x01},
{SETUP_AW,0x03},
{SETUP_RETR,0x1A},
{RF_CH,0x50},
{RF_SETUP,0x0F},
{RX_PW_P0,0x10},
{CONFIG,0x0F},
};

const uint8_t BS_NRF_TX_ADDR_Table[][6]=
{
{0x30,0x20,0x17,0x02,0x0A,0x50},
{0x2A,0x20,0x17,0x02,0x0A,0x50},
};

const uint8_t BS_NRF_RX_ADDR_Table[][6]=
{
{0x30,0x20,0x17,0x02,0x0A,0x50},
{0x2A,0x20,0x17,0x02,0x0A,0x50},
};

#endif
