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
#include "bshh_ble.h"
#include "bshh_ctrl.h"
#include "bshh_event.h"
#include "bshh_nrf.h"
#include "bshh_button.h"

uint8_t bshh_ctrl_throttle,bshh_ctrl_pitch,bshh_ctrl_roll,bshh_ctrl_yaw;
uint8_t bshh_ctrl_command_table[32];
uint8_t bshh_ctrl_command_len=0;

void bshh_ctrl_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_ctrl_num_to_asc(uint8_t number, uint8_t *asc_buf)
{
	uint8_t num_low,num_high;
	//
	num_low=number & 0x0f;
	num_high=(number & 0xf0) >> 4;
	//
	if(num_high<10) asc_buf[0]=num_high+48;
	else asc_buf[0]=num_high+55;
	//
	if(num_low<10)	asc_buf[1]=num_low+48;
	else asc_buf[1]=num_low+55;
}

uint8_t bshh_ctrl_checksum(uint8_t data_len, uint8_t *data_buffer)
{
	uint8_t i;
	uint32_t check_sum=0;
	//
	for(i=1;i<data_len;i++) check_sum+=data_buffer[i];
	check_sum=(256-check_sum & 0xff);
	//
	return check_sum;
}

void bshh_ctrl_joystick(uint16_t js_throttle,uint16_t js_pitch,uint16_t js_roll,uint16_t js_yaw)
{
	uint8_t i;

	bshh_ctrl_throttle=js_throttle>>4;
	bshh_ctrl_pitch=js_pitch>>6;
	bshh_ctrl_roll=js_roll>>6;
	bshh_ctrl_yaw=js_yaw>>6;
	//
	if(js_pitch<2048) bshh_ctrl_pitch=(31-bshh_ctrl_pitch)|0x80;
	else  bshh_ctrl_pitch-=32;
	if(js_roll<2048) bshh_ctrl_roll=31-bshh_ctrl_roll;
	else  bshh_ctrl_roll=(bshh_ctrl_roll-32)|0x80;
	if(js_yaw<2048) bshh_ctrl_yaw=(31-bshh_ctrl_yaw)|0x80;
	else bshh_ctrl_yaw-=32;
	//
	for(i=0;i<32;i++) bshh_ctrl_command_table[i]=32;
	bshh_ctrl_command_len=11;
	bshh_ctrl_command_table[0]=':';
	bshh_ctrl_command_table[1]='R';
	bshh_ctrl_command_table[2]='C';
	bshh_ctrl_num_to_asc(bshh_ctrl_throttle,&bshh_ctrl_command_table[3]);
	bshh_ctrl_num_to_asc(bshh_ctrl_pitch,&bshh_ctrl_command_table[5]);
	bshh_ctrl_num_to_asc(bshh_ctrl_roll,&bshh_ctrl_command_table[7]);
	bshh_ctrl_num_to_asc(bshh_ctrl_yaw,&bshh_ctrl_command_table[9]);
	bshh_ctrl_num_to_asc(bshh_ctrl_checksum(bshh_ctrl_command_len,bshh_ctrl_command_table),&bshh_ctrl_command_table[bshh_ctrl_command_len]);
	bshh_ctrl_command_table[bshh_ctrl_command_len+2]='/';
	//
	bshh_ble_send_remote_command(bshh_ctrl_command_table, bshh_ctrl_command_len+3);
	bshh_nrf_send_ctrl_data(bshh_ctrl_command_table);
}

void bshh_ctrl_cal(void)
{
	uint8_t i;
	//
	for(i=0;i<32;i++) bshh_ctrl_command_table[i]=32;
	bshh_ctrl_command_len=4;
	bshh_ctrl_command_table[0]=':';
	bshh_ctrl_command_table[1]='C';
	bshh_ctrl_command_table[2]='A';
	bshh_ctrl_command_table[3]='L';
	bshh_ctrl_num_to_asc(bshh_ctrl_checksum(bshh_ctrl_command_len,bshh_ctrl_command_table),&bshh_ctrl_command_table[bshh_ctrl_command_len]);
	bshh_ctrl_command_table[bshh_ctrl_command_len+2]='/';
	//
	bshh_ble_send_ctrl_command(bshh_ctrl_command_table, bshh_ctrl_command_len+3);
	bshh_nrf_send_ctrl_data(bshh_ctrl_command_table);
}

void bshh_ctrl_unlock(void)
{
	uint8_t i;
	//
	for(i=0;i<32;i++) bshh_ctrl_command_table[i]=32;
	bshh_ctrl_command_len=5;
	bshh_ctrl_command_table[0]=':';
	bshh_ctrl_command_table[1]='P';
	bshh_ctrl_command_table[2]='W';
	bshh_ctrl_command_table[3]='O';
	bshh_ctrl_command_table[4]='N';
	bshh_ctrl_num_to_asc(bshh_ctrl_checksum(bshh_ctrl_command_len,bshh_ctrl_command_table),&bshh_ctrl_command_table[bshh_ctrl_command_len]);
	bshh_ctrl_command_table[bshh_ctrl_command_len+2]='/';
	//
	bshh_ble_send_ctrl_command(bshh_ctrl_command_table, bshh_ctrl_command_len+3);
	bshh_nrf_send_ctrl_data(bshh_ctrl_command_table);
}

void bshh_ctrl_highon(void)
{
	uint8_t i;
	//
	for(i=0;i<32;i++) bshh_ctrl_command_table[i]=32;
	bshh_ctrl_command_len=4;
	bshh_ctrl_command_table[0]=':';
	bshh_ctrl_command_table[1]='H';
	bshh_ctrl_command_table[2]='O';
	bshh_ctrl_command_table[3]='N';
	bshh_ctrl_num_to_asc(bshh_ctrl_checksum(bshh_ctrl_command_len,bshh_ctrl_command_table),&bshh_ctrl_command_table[bshh_ctrl_command_len]);
	bshh_ctrl_command_table[bshh_ctrl_command_len+2]='/';
	//
	bshh_ble_send_ctrl_command(bshh_ctrl_command_table, bshh_ctrl_command_len+3);
	bshh_nrf_send_ctrl_data(bshh_ctrl_command_table);
}

void bshh_ctrl_highoff(void)
{
	uint8_t i;
	//
	for(i=0;i<32;i++) bshh_ctrl_command_table[i]=32;
	bshh_ctrl_command_len=5;
	bshh_ctrl_command_table[0]=':';
	bshh_ctrl_command_table[1]='H';
	bshh_ctrl_command_table[2]='O';
	bshh_ctrl_command_table[3]='F';
	bshh_ctrl_command_table[4]='F';
	bshh_ctrl_num_to_asc(bshh_ctrl_checksum(bshh_ctrl_command_len,bshh_ctrl_command_table),&bshh_ctrl_command_table[bshh_ctrl_command_len]);
	bshh_ctrl_command_table[bshh_ctrl_command_len+2]='/';
	//
	bshh_ble_send_ctrl_command(bshh_ctrl_command_table, bshh_ctrl_command_len+3);
	bshh_nrf_send_ctrl_data(bshh_ctrl_command_table);
}

