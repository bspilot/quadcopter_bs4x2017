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

#ifndef __BSHH_OLED_H
#define __BSHH_OLED_H

#define BS_OLED_SCLK_LOW() 	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET)  //BSHH PA5 is OLED CLK
#define BS_OLED_SCLK_HIGH() HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET)
#define BS_OLED_SDIN_LOW() 	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET)  //BSHH PA7 is OLED DIN
#define BS_OLED_SDIN_HIGH() HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET)
#define BS_OLED_RST_LOW()  	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_RESET)  //BSHH PB9is OLED RESET
#define BS_OLED_RST_HIGH()  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_SET)
#define BS_OLED_DC_LOW()   	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET)	//BSHH PA6 is OLED DC
#define BS_OLED_DC_HIGH()   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET)
#define BS_OLED_CS_LOW()   	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET)	//BSHH PB8 is CS
#define BS_OLED_CS_HIGH()   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET)

void BS_OLED_Configuration(void);
void BS_OLED_Delay_ms(unsigned int dly);
void BS_OLED_Write_Command(uint8_t bs_oled_ops);
void BS_OLED_Write_Data(uint8_t bs_oled_data);
void BS_OLED_Set_Cursor(uint8_t row,uint8_t column);
void BS_OLED_Clear_Screen(void);
void BS_OLED_Show_Char(uint8_t row,uint8_t column,uint8_t asc_code);
void BS_OLED_Show_Number(uint8_t row,uint8_t column, uint32_t number);
void BS_OLED_Show_HEX_Number(uint8_t row,uint8_t column, uint8_t *number_ptr, uint8_t len);
void BS_OLED_Show_Text(uint8_t row,uint8_t column,uint8_t offset);
void BS_OLED_Show_Logo(uint8_t inv);
void BS_OLED_Show_Unlock(uint8_t inv);
void BS_OLED_Show_Cal(uint8_t inv);
void BS_OLED_Show_BLE_Clear(uint8_t inv);
void BS_OLED_Show_BLE_Test(uint8_t inv);

#endif
