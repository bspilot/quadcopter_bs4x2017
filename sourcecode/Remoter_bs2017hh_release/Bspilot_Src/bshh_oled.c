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

#include "main.h"
#include "stm32f1xx_hal.h"
#include "bshh_main.h"
#include "bshh_oled.h"
#include <bshh_oled_table.h>

void BS_OLED_Delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void BS_OLED_Write_Command(uint8_t bs_oled_ops)
{
	uint8_t i;
	//
	BS_OLED_DC_LOW();
	BS_OLED_CS_LOW();
	//
	for(i=0;i<8;i++)
	{
		BS_OLED_SCLK_LOW();
		//
		if(bs_oled_ops & 0x80) BS_OLED_SDIN_HIGH();
		else BS_OLED_SDIN_LOW();
		//
		BS_OLED_SCLK_HIGH();
		bs_oled_ops<<=1;
	}
	BS_OLED_CS_HIGH();
	BS_OLED_DC_HIGH();
}

void BS_OLED_Write_Data(uint8_t bs_oled_data)
{
	uint8_t i;
	//
	BS_OLED_DC_HIGH();
	BS_OLED_CS_LOW();
	//
	for(i=0;i<8;i++)
	{
		BS_OLED_SCLK_LOW();
		//
		if(bs_oled_data & 0x80) BS_OLED_SDIN_HIGH();
		else BS_OLED_SDIN_LOW();
		//
		BS_OLED_SCLK_HIGH();
		bs_oled_data<<=1;
	}
	BS_OLED_CS_HIGH();
	BS_OLED_DC_HIGH();
}

void BS_OLED_Set_Cursor(uint8_t row,uint8_t column)
{
	BS_OLED_Write_Command(0xB0+row);
	BS_OLED_Write_Command(((column & 0xf0)>>4) | 0x10);
	BS_OLED_Write_Command(column & 0x0f);
}

void BS_OLED_Clear_Screen(void)
{
	uint8_t row,i;
	//
	for(row=0;row<8;row++)
	{
		BS_OLED_Write_Command(0xB0+row);
		BS_OLED_Write_Command(0x10);
		BS_OLED_Write_Command(0x00);
		for(i=0;i<128;i++)	BS_OLED_Write_Data(0);
	}
}

void BS_OLED_Show_Char(uint8_t row,uint8_t column,uint8_t asc_code)
{
	uint8_t asc_index;
	uint8_t i=0;
	//
	asc_index=asc_code-32;
	BS_OLED_Set_Cursor(row,column);
	for(i=0;i<6;i++) BS_OLED_Write_Data(OLED_FONT_SIZE_6x8[asc_index][i]);
}

void BS_OLED_Show_Text(uint8_t row,uint8_t column,uint8_t offset)
{
	uint8_t i;
	//
	BS_OLED_Set_Cursor(row,column);
    for(i=0;i<16;i++) BS_OLED_Write_Data(BS_OLED_DISPLAY_TEXT[offset*2][i]);
    //
    BS_OLED_Set_Cursor(row+1,column);
    for(i=0;i<16;i++) BS_OLED_Write_Data(BS_OLED_DISPLAY_TEXT[offset*2+1][i]);
}

void BS_OLED_Show_Logo(uint8_t inv)
{
	if(inv)
	{
		BS_OLED_Show_Text(0,0,7);
		BS_OLED_Show_Text(0,18,8);
		BS_OLED_Show_Text(0,36,9);
		BS_OLED_Show_Text(0,54,10);
		BS_OLED_Show_Text(0,72,11);
		BS_OLED_Show_Text(0,90,12);
		BS_OLED_Show_Text(0,108,13);
	}
	else
	{
		BS_OLED_Show_Text(0,0,0);
		BS_OLED_Show_Text(0,18,1);
		BS_OLED_Show_Text(0,36,2);
		BS_OLED_Show_Text(0,54,3);
		BS_OLED_Show_Text(0,72,4);
		BS_OLED_Show_Text(0,90,5);
		BS_OLED_Show_Text(0,108,6);
	}
}

void BS_OLED_Show_Unlock(uint8_t inv)
{
	if(inv)
	{
		BS_OLED_Show_Text(6,0,16);
		BS_OLED_Show_Text(6,18,17);
	}
	else
	{
		BS_OLED_Show_Text(6,0,14);
		BS_OLED_Show_Text(6,18,15);
	}
}

void BS_OLED_Show_Cal(uint8_t inv)
{
	if(inv)
	{
		BS_OLED_Show_Text(6,90,20);
		BS_OLED_Show_Text(6,108,21);
	}
	else
	{
		BS_OLED_Show_Text(6,90,18);
		BS_OLED_Show_Text(6,108,19);
	}
}

void BS_OLED_Show_BLE_Clear(uint8_t inv)
{
	if(inv)
	{
		BS_OLED_Show_Text(4,0,26);
		BS_OLED_Show_Text(4,18,27);
		BS_OLED_Show_Text(4,36,28);
		BS_OLED_Show_Text(4,54,29);
	}
	else
	{
		BS_OLED_Show_Text(4,0,22);
		BS_OLED_Show_Text(4,18,23);
		BS_OLED_Show_Text(4,36,24);
		BS_OLED_Show_Text(4,54,25);
	}
}

void BS_OLED_Show_BLE_Test(uint8_t inv)
{
	if(inv)
	{
		BS_OLED_Show_Text(2,0,34);
		BS_OLED_Show_Text(2,18,35);
		BS_OLED_Show_Text(2,36,36);
		BS_OLED_Show_Text(2,54,37);
	}
	else
	{
		BS_OLED_Show_Text(2,0,30);
		BS_OLED_Show_Text(2,18,31);
		BS_OLED_Show_Text(2,36,32);
		BS_OLED_Show_Text(2,54,33);
	}
}

void BS_OLED_Configuration(void)
{
	uint8_t i;
	//
	BS_OLED_SCLK_HIGH();
	BS_OLED_SDIN_HIGH();
	BS_OLED_RST_HIGH();
	BS_OLED_DC_HIGH();
	BS_OLED_CS_HIGH();
	BS_OLED_Delay_ms(10);		//bspilot:delay 10ms
	BS_OLED_RST_LOW();
	BS_OLED_Delay_ms(50);		//bspilot:delay 10ms
	BS_OLED_RST_HIGH();
	//
	for(i=0;i<28;i++) BS_OLED_Write_Command(BS_OLED_Configuration_Table[i]);
	BS_OLED_Clear_Screen();
	BS_OLED_Set_Cursor(0,0);
	//
	BS_OLED_Show_Logo(0);
	BS_OLED_Show_Unlock(0);
	BS_OLED_Show_Cal(0);
	BS_OLED_Show_BLE_Test(0);
	BS_OLED_Show_BLE_Clear(0);
}





