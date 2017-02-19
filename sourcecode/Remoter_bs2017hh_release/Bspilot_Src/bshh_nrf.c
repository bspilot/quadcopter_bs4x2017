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
#include "bshh_oled.h"
#include "bshh_nrf.h"
#include "bshh_nrf_table.h"
#include "bshh_button.h"

extern SPI_HandleTypeDef hspi2;
uint8_t nrf_send_addr[5];
uint32_t nrf_receive_times=0;
uint32_t nrf_send_times=0;
uint32_t nrf_error_times=0;

//#define BSHH_NRF_RECEIVE

void bshh_nrf_configuration(void)
{
	if(bshh_nrf_ble_mode==BSHH_NRF_MODE)
	{
	#ifdef BSHH_NRF_RECEIVE
		bshh_nrf_rx_configuration();
		BS_OLED_Show_Char(3,0,'N');
		BS_OLED_Show_Char(3,6,'R');
		BS_OLED_Show_Char(3,12,'F');
		BS_OLED_Show_Char(3,18,'-');
		BS_OLED_Show_Char(3,24,'R');
		BS_OLED_Show_Char(3,30,'X');
		BS_OLED_Show_Char(3,36,':');
	#else
		bshh_nrf_tx_configuration();
		BS_OLED_Show_Char(3,0,'N');
		BS_OLED_Show_Char(3,6,'R');
		BS_OLED_Show_Char(3,12,'F');
		BS_OLED_Show_Char(3,18,'-');
		BS_OLED_Show_Char(3,24,'T');
		BS_OLED_Show_Char(3,30,'X');
		BS_OLED_Show_Char(3,36,':');
	#endif
	}
}

void bshh_nrf_send_ctrl_data(uint8_t *ctrl_data)
{
	if(bshh_nrf_ble_mode==BSHH_NRF_MODE)
	{
	#ifdef BSHH_NRF_RECEIVE
		bshh_nrf_receive();
	#else
		bshh_nrf_transmit(ctrl_data);
	#endif
	}
}

void bshh_nrf_show_times(void)
{
	if(bshh_nrf_ble_mode==BSHH_NRF_MODE)
	{
		BS_OLED_Show_Char(4,0,'T');
		BS_OLED_Show_Char(4,6,'X');
		BS_OLED_Show_Char(4,12,':');
		BS_OLED_Show_Number(4,18, nrf_send_times);
		BS_OLED_Show_Char(4,42,'R');
		BS_OLED_Show_Char(4,48,'X');
		BS_OLED_Show_Char(4,54,':');
		BS_OLED_Show_Number(4,60, nrf_receive_times);
		BS_OLED_Show_Char(4,84,'E');
		BS_OLED_Show_Char(4,90,'r');
		BS_OLED_Show_Char(4,96,':');
		BS_OLED_Show_Number(4,102, nrf_error_times);
	}
}

void bshh_nrf_status_check(void)
{
	uint8_t nrf_wr_reg_buf[2]={0x07,0x00};
	uint8_t nrf_rd_reg_buf[2];
	uint8_t nrf_status=0;
	//
	if(bshh_nrf_ble_mode==BSHH_NRF_MODE)
	{
		BS_NRF_CS_LOW();
		bshh_nrf_delay_ms(1);
		HAL_SPI_TransmitReceive(&hspi2, nrf_wr_reg_buf, nrf_rd_reg_buf, 2, 100);
		bshh_nrf_delay_ms(1);
		BS_NRF_CS_HIGH();
		nrf_status=nrf_rd_reg_buf[1];
		//
		if(nrf_status & 0x40)
		{
			nrf_receive_times++;
			bshh_nrf_show_rx_data();
		}
		else if(nrf_status & 0x20)
		{
			nrf_send_times++;
			BS_NRF_CE_LOW();
		}
		else if(nrf_status & 0x10)
		{
			nrf_error_times++;
			BS_NRF_CE_LOW();
			nrf_wr_reg_buf[0]=0x0e1;
			nrf_wr_reg_buf[1]=0x0ff;
			bshh_nrf_write_reg(nrf_wr_reg_buf);
		}
		//
		nrf_wr_reg_buf[0]=0x27;
		nrf_wr_reg_buf[1]=nrf_status;
		bshh_nrf_write_reg(nrf_wr_reg_buf);
	}
}

void bshh_nrf_delay_ms(unsigned int dly)
{
	HAL_Delay(dly);
}

void bshh_nrf_write_reg(uint8_t *reg_buf)
{
	uint8_t nrf_reg_wr_buf[2];
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	nrf_reg_wr_buf[0]=reg_buf[0];
	nrf_reg_wr_buf[1]=reg_buf[1];
	HAL_SPI_Transmit(&hspi2,nrf_reg_wr_buf,2,100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
}

void bshh_nrf_write_addr_tx(uint8_t index)
{
	uint8_t i;
	uint8_t nrf_wr_addr_buf[8];
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	for(i=0;i<6;i++) nrf_wr_addr_buf[i]=BS_NRF_TX_ADDR_Table[index][i];
	HAL_SPI_Transmit(&hspi2,nrf_wr_addr_buf,6,100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	bshh_nrf_delay_ms(10);
}

void bshh_nrf_write_addr_rx(uint8_t index)
{
	uint8_t i;
	uint8_t nrf_wr_addr_buf[8];
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	for(i=0;i<6;i++) nrf_wr_addr_buf[i]=BS_NRF_RX_ADDR_Table[index][i];
	HAL_SPI_Transmit(&hspi2,nrf_wr_addr_buf,6,100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	bshh_nrf_delay_ms(10);
}

void bshh_nrf_show_rx_data(void)
{
	uint8_t nrf_wr_data_buf[32]={0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	uint8_t nrf_rd_data_buf[32];
	uint8_t i;
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	HAL_SPI_TransmitReceive(&hspi2, nrf_wr_data_buf, nrf_rd_data_buf, 17, 100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	for(i=0;i<14;i++) BS_OLED_Show_Char(5,i*6,nrf_rd_data_buf[i+1]);
}

void bshh_nrf_show_tx_addr(void)
{
	uint8_t nrf_wr_addr_buf[8]={0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	uint8_t nrf_rd_addr_buf[8];
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	HAL_SPI_TransmitReceive(&hspi2, nrf_wr_addr_buf, nrf_rd_addr_buf, 6, 100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	BS_OLED_Show_HEX_Number(3,42,&nrf_rd_addr_buf[1],5);
}

void bshh_nrf_show_rx_addr(void)
{
	uint8_t nrf_wr_addr_buf[8]={0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	uint8_t nrf_rd_addr_buf[8];
	//
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	HAL_SPI_TransmitReceive(&hspi2, nrf_wr_addr_buf, nrf_rd_addr_buf, 6, 100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	BS_OLED_Show_HEX_Number(3,42,&nrf_rd_addr_buf[1],5);
}

void bshh_nrf_tx_configuration(void)
{
	uint8_t i;
	uint8_t nrf_wr_reg_buffer[2];
	//
	BS_NRF_CE_LOW();
	BS_NRF_CS_HIGH();
	bshh_nrf_delay_ms(100);
	//
	bshh_nrf_show_tx_addr();
	bshh_nrf_write_addr_tx(0);
	bshh_nrf_write_addr_tx(1);
	for(i=0;i<8;i++)
	{
		BS_NRF_CS_LOW();
		bshh_nrf_delay_ms(1);
		nrf_wr_reg_buffer[0]=BS_NRF_TX_Configuration_Table[i][0]+0x20;
		nrf_wr_reg_buffer[1]=BS_NRF_TX_Configuration_Table[i][1];
		HAL_SPI_Transmit(&hspi2,nrf_wr_reg_buffer,2,100);
		bshh_nrf_delay_ms(1);
		BS_NRF_CS_HIGH();
		bshh_nrf_delay_ms(10);
	}
	bshh_nrf_show_tx_addr();
}

void bshh_nrf_rx_configuration(void)
{
	uint8_t i;
	uint8_t nrf_wr_reg_buffer[2];
	//
	BS_NRF_CE_LOW();
	BS_NRF_CS_HIGH();
	bshh_nrf_delay_ms(100);
	//
	bshh_nrf_show_rx_addr();
	bshh_nrf_write_addr_rx(0);
	bshh_nrf_write_addr_rx(1);
	for(i=0;i<8;i++)
	{
		BS_NRF_CS_LOW();
		bshh_nrf_delay_ms(1);
		nrf_wr_reg_buffer[0]=BS_NRF_RX_Configuration_Table[i][0]+0x20;
		nrf_wr_reg_buffer[1]=BS_NRF_RX_Configuration_Table[i][1];
		HAL_SPI_Transmit(&hspi2,nrf_wr_reg_buffer,2,100);
		bshh_nrf_delay_ms(1);
		BS_NRF_CS_HIGH();
		bshh_nrf_delay_ms(10);
	}
	bshh_nrf_show_rx_addr();
}

void bshh_nrf_transmit(uint8_t *data_ptr)
{
	uint8_t nrf_wr_reg_buf[2]={0x07,0x00};
	uint8_t nrf_rd_reg_buf[2];
	uint8_t nrf_tx_data_buf[32];
	uint8_t i;
	//
	for(i=0;i<16;i++) nrf_tx_data_buf[i+1]=data_ptr[i];
	nrf_tx_data_buf[0]=0x0a0;
	BS_NRF_CE_LOW();
	BS_NRF_CS_LOW();
	bshh_nrf_delay_ms(1);
	HAL_SPI_TransmitReceive(&hspi2, nrf_wr_reg_buf, nrf_rd_reg_buf, 2, 100);
	bshh_nrf_delay_ms(1);
	BS_NRF_CS_HIGH();
	bshh_nrf_delay_ms(1);
	if((nrf_rd_reg_buf[1] & 0x01)==0)
	{
		BS_NRF_CS_LOW();
		bshh_nrf_delay_ms(1);
		HAL_SPI_Transmit(&hspi2,nrf_tx_data_buf,17,100);
		bshh_nrf_delay_ms(1);
		BS_NRF_CS_HIGH();
		BS_NRF_CE_HIGH();
	}
}

void bshh_nrf_receive(void)
{
	BS_NRF_CE_HIGH();
	bshh_nrf_delay_ms(1);
}



