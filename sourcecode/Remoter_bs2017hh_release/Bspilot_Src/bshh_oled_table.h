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

#ifndef __BSHH_OLED_FONT_H
#define __BSHH_OLED_FONT_H

const unsigned char BS_OLED_Configuration_Table[]=
{
0xAE,0x00,0x10,0x40,0x81,0xCF,0xA0,0xC0,0xA6,0xA8,0x3f,0xD3,0x00,0xd5,0x80,0xD9,
0xF1,0xDA,0x12,0xDB,0x40,0x20,0x02,0x8D,0x14,0xA4,0xA6,0xAF,
};

const unsigned char OLED_NUM_SIZE_6x8[][6] =
{
0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,// 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,// 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,// 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,// 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,// 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,// 9
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,// A
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,// B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,// C
0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,// D
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,// E
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,// F
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// sp
};

const unsigned char OLED_FONT_SIZE_6x8[][6] =
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,// sp
0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,// !
0x00, 0x00, 0x07, 0x00, 0x07, 0x00,// "
0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,// #
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,// $
0x00, 0x62, 0x64, 0x08, 0x13, 0x23,// %
0x00, 0x36, 0x49, 0x55, 0x22, 0x50,// &
0x00, 0x00, 0x05, 0x03, 0x00, 0x00,// '
0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,// (
0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,// )
0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,// *
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,// +
0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,// ,
0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// -
0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// .
0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// /
0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,// 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,// 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,// 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,// 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,// 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,// 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,// 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,// 9
0x00, 0x00, 0x36, 0x36, 0x00, 0x00,// :
0x00, 0x00, 0x56, 0x36, 0x00, 0x00,// ;
0x00, 0x08, 0x14, 0x22, 0x41, 0x00,// <
0x00, 0x14, 0x14, 0x14, 0x14, 0x14,// =
0x00, 0x00, 0x41, 0x22, 0x14, 0x08,// >
0x00, 0x02, 0x01, 0x51, 0x09, 0x06,// ?
0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,// @
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,// A
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,// B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,// C
0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,// D
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,// E
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,// F
0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,// G
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,// H
0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,// I
0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,// J
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,// K
0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,// L
0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,// M
0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,// N
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,// O
0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,// P
0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,// R
0x00, 0x46, 0x49, 0x49, 0x49, 0x31,// S
0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,// T
0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,// U
0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,// V
0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,// W
0x00, 0x63, 0x14, 0x08, 0x14, 0x63,// X
0x00, 0x07, 0x08, 0x70, 0x08, 0x07,// Y
0x00, 0x61, 0x51, 0x49, 0x45, 0x43,// Z
0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,// [
0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55,// 55
0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,// ]
0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// ^
0x00, 0x40, 0x40, 0x40, 0x40, 0x40,// _
0x00, 0x00, 0x01, 0x02, 0x04, 0x00,// '
0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// a
0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,// b
0x00, 0x38, 0x44, 0x44, 0x44, 0x20,// c
0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,// d
0x00, 0x38, 0x54, 0x54, 0x54, 0x18,// e
0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,// f
0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,// g
0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,// h
0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,// i
0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,// j
0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,// k
0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,// l
0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,// m
0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,// n
0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// o
0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,// p
0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,// q
0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,// r
0x00, 0x48, 0x54, 0x54, 0x54, 0x20,// s
0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,// t
0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,// u
0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,// v
0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,// w
0x00, 0x44, 0x28, 0x10, 0x28, 0x44,// x
0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,// y
0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,// z
0x14, 0x14, 0x14, 0x14, 0x14, 0x14,// horiz lines
};

const char BS_OLED_DISPLAY_TEXT[][32]=
{
{0x00,0xFE,0x02,0x82,0xBA,0xAA,0xAA,0xAA,0xAA,0xAA,0xBA,0x82,0x02,0xFE,0x00,0x00},	//圆
{0x00,0xFF,0x40,0x4F,0x60,0x50,0x48,0x46,0x48,0x50,0x60,0x4F,0x40,0xFF,0x00,0x00},
//
{0x00,0x00,0xC0,0x40,0x40,0x40,0x7F,0x48,0x48,0x48,0x48,0xC8,0x08,0x08,0x00,0x00},	//点
{0x80,0x40,0x37,0x04,0x04,0x14,0x64,0x04,0x14,0x64,0x04,0x07,0x10,0xE0,0x00,0x00},
//
{0x20,0x20,0xFF,0x20,0x24,0xF4,0x54,0x54,0x54,0xFF,0x54,0x55,0x56,0xF4,0x04,0x00},	//博
{0x00,0x00,0xFF,0x00,0x08,0x0B,0x19,0x69,0x09,0x0B,0x49,0x89,0x7D,0x0B,0x08,0x00},
//
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00},	//士
{0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00},
//
{0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x20,0x40,0x80,0x00,0x00},	//小
{0x08,0x04,0x03,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x01,0x0E,0x00},
//
{0x00,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00},	//四
{0x00,0x7F,0x28,0x24,0x23,0x20,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x7F,0x00,0x00},
//
{0xC8,0xB8,0x8F,0xE8,0x88,0x88,0x00,0xF0,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},	//轴
{0x08,0x18,0x08,0xFF,0x04,0x04,0x00,0xFF,0x42,0x42,0x7F,0x42,0x42,0xFF,0x00,0x00},
//
{0xFF,0x01,0xFD,0x7D,0x45,0x55,0x55,0x55,0x55,0x55,0x45,0x7D,0xFD,0x01,0xFF,0xFF},
{0xFF,0x00,0xBF,0xB0,0x9F,0xAF,0xB7,0xB9,0xB7,0xAF,0x9F,0xB0,0xBF,0x00,0xFF,0xFF},	//圆
//
{0xFF,0xFF,0x3F,0xBF,0xBF,0xBF,0x80,0xB7,0xB7,0xB7,0xB7,0x37,0xF7,0xF7,0xFF,0xFF},
{0x7F,0xBF,0xC8,0xFB,0xFB,0xEB,0x9B,0xFB,0xEB,0x9B,0xFB,0xF8,0xEF,0x1F,0xFF,0xFF},	//点
//
{0xDF,0xDF,0x00,0xDF,0xDB,0x0B,0xAB,0xAB,0xAB,0x00,0xAB,0xAA,0xA9,0x0B,0xFB,0xFF},
{0xFF,0xFF,0x00,0xFF,0xF7,0xF4,0xE6,0x96,0xF6,0xF4,0xB6,0x76,0x82,0xF4,0xF7,0xFF},	//博
//
{0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0x00,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF},
{0xFF,0xFF,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0xFF,0xFF,0xFF},	//士
//
{0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xDF,0xBF,0x7F,0xFF,0xFF},
{0xF7,0xFB,0xFC,0xFF,0xFF,0xBF,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF1,0xFF},	//小
//
{0xFF,0x03,0xFB,0xFB,0xFB,0x03,0xFB,0xFB,0xFB,0x03,0xFB,0xFB,0xFB,0x03,0xFF,0xFF},
{0xFF,0x80,0xD7,0xDB,0xDC,0xDF,0xDF,0xDF,0xDF,0xDE,0xDD,0xDD,0xDD,0x80,0xFF,0xFF},	//四
//
{0x37,0x47,0x70,0x17,0x77,0x77,0xFF,0x0F,0xEF,0xEF,0x00,0xEF,0xEF,0x0F,0xFF,0xFF},
{0xF7,0xE7,0xF7,0x00,0xFB,0xFB,0xFF,0x00,0xBD,0xBD,0x80,0xBD,0xBD,0x00,0xFF,0xFF},	//轴
//
{0x20,0x10,0xEC,0x27,0xF4,0x2C,0xE0,0x00,0x22,0x92,0x0E,0xD2,0x22,0x1E,0x00,0x00},
{0x80,0x60,0x1F,0x09,0x3F,0x89,0xFF,0x00,0x0A,0x09,0x09,0xFF,0x09,0x09,0x08,0x00},	//解
//
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xE2,0x2C,0x20,0xBF,0x20,0x28,0xE6,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x80,0x4F,0x20,0x10,0x0F,0x10,0x20,0x4F,0x80,0x00},	//锁
//
{0xDF,0xEF,0x13,0xD8,0x0B,0xD3,0x1F,0xFF,0xDD,0x6D,0xF1,0x2D,0xDD,0xE1,0xFF,0xFF},
{0x7F,0x9F,0xE0,0xF6,0xC0,0x76,0x00,0xFF,0xF5,0xF6,0xF6,0x00,0xF6,0xF6,0xF7,0xFF},	//解
//
{0xDF,0xEF,0xD3,0x18,0xDB,0xDB,0xFF,0x1D,0xD3,0xDF,0x40,0xDF,0xD7,0x19,0xFF,0xFF},
{0xFE,0xFE,0xFE,0x80,0xDE,0xEE,0x7F,0xB0,0xDF,0xEF,0xF0,0xEF,0xDF,0xB0,0x7F,0xFF},	//锁
//
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x80,0x48,0x28,0x09,0x0E,0x08,0x28,0x48,0x88,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x80,0x80,0x43,0x2C,0x10,0x2C,0x43,0x80,0x80,0x00},	//校
//
{0x00,0x02,0x0C,0xE0,0x40,0x20,0xF8,0x4F,0x48,0x49,0xFE,0x48,0x48,0x48,0x08,0x00},
{0x04,0x04,0x7F,0x00,0x00,0x00,0xFF,0x22,0x22,0x22,0x3F,0x22,0x22,0x22,0x20,0x00},	//准
//
{0xEF,0xEF,0x2F,0x00,0x6F,0xEF,0x7F,0xB7,0xD7,0xF6,0xF1,0xF7,0xD7,0xB7,0x77,0xFF},
{0xFB,0xFC,0xFF,0x00,0xFF,0xFE,0x7F,0x7F,0xBC,0xD3,0xEF,0xD3,0xBC,0x7F,0x7F,0xFF},	//校
//
{0xFF,0xFD,0xF3,0x1F,0xBF,0xDF,0x07,0xB0,0xB7,0xB6,0x01,0xB7,0xB7,0xB7,0xF7,0xFF},
{0xFB,0xFB,0x80,0xFF,0xFF,0xFF,0x00,0xDD,0xDD,0xDD,0xC0,0xDD,0xDD,0xDD,0xDF,0xFF},	//准
//
{0x40,0x40,0x42,0xCC,0x00,0x04,0x44,0x64,0x5C,0x47,0xF4,0x44,0x44,0x44,0x04,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x44,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x00},	//连
//
{0x10,0x10,0x10,0xFF,0x10,0x50,0x44,0x54,0x65,0xC6,0x44,0x64,0x54,0x44,0x40,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x82,0x82,0x4A,0x56,0x23,0x22,0x52,0x4E,0x82,0x02,0x00},	//接
//
{0x04,0x04,0xE4,0x04,0x0F,0xF4,0x04,0x04,0xF4,0x44,0xCF,0x44,0x44,0x44,0x04,0x00},
{0x40,0x40,0x7D,0x44,0x44,0x7D,0x44,0x45,0x44,0x7C,0x44,0x45,0x7C,0x40,0x40,0x00},	//蓝
//
{0x00,0x00,0xC2,0xB2,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x80,0x00},
{0x00,0x20,0x20,0x10,0x08,0x04,0x02,0x41,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},	//牙
//
{0xBF,0xBF,0xBD,0x33,0xFF,0xFB,0xBB,0x9B,0xA3,0xB8,0x0B,0xBB,0xBB,0xBB,0xFB,0xFF},
{0xFF,0xBF,0xDF,0xE0,0xDF,0xBB,0xBB,0xBB,0xBB,0xBB,0x80,0xBB,0xBB,0xBB,0xBB,0xFF},	//连
//
{0xEF,0xEF,0xEF,0x00,0xEF,0xAF,0xBB,0xAB,0x9A,0x39,0xBB,0x9B,0xAB,0xBB,0xBF,0xFF},
{0xFB,0xBB,0x7D,0x80,0xFE,0x7D,0x7D,0xB5,0xA9,0xDC,0xDD,0xAD,0xB1,0x7D,0xFD,0xFF},	//接
//
{0xFB,0xFB,0x1B,0xFB,0xF0,0x0B,0xFB,0xFB,0x0B,0xBB,0x30,0xBB,0xBB,0xBB,0xFB,0xFF},
{0xBF,0xBF,0x82,0xBB,0xBB,0x82,0xBB,0xBA,0xBB,0x83,0xBB,0xBA,0x83,0xBF,0xBF,0xFF},	//蓝
//
{0xFF,0xFF,0x3D,0x4D,0x7D,0x7D,0x7D,0x7D,0x7D,0x01,0x7D,0x7D,0x7D,0x7D,0x7F,0xFF},
{0xFF,0xDF,0xDF,0xEF,0xF7,0xFB,0xFD,0xBE,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	//牙
//
{0x10,0x60,0x02,0x8C,0x00,0xFE,0x02,0xF2,0x02,0xFE,0x00,0xF8,0x00,0xFF,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x47,0x30,0x0F,0x10,0x27,0x00,0x47,0x80,0x7F,0x00,0x00},	//测
//
{0x40,0x40,0x42,0xCC,0x00,0x90,0x90,0x90,0x90,0x90,0xFF,0x10,0x11,0x16,0x10,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x28,0x60,0x3F,0x10,0x10,0x01,0x0E,0x30,0x40,0xF0,0x00},	//试
//
{0x04,0x04,0xE4,0x04,0x0F,0xF4,0x04,0x04,0xF4,0x44,0xCF,0x44,0x44,0x44,0x04,0x00},
{0x40,0x40,0x7D,0x44,0x44,0x7D,0x44,0x45,0x44,0x7C,0x44,0x45,0x7C,0x40,0x40,0x00},	//蓝
//
{0x00,0x00,0xC2,0xB2,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x80,0x00},
{0x00,0x20,0x20,0x10,0x08,0x04,0x02,0x41,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},	//牙
//
{0xEF,0x9F,0xFD,0x73,0xFF,0x01,0xFD,0x0D,0xFD,0x01,0xFF,0x07,0xFF,0x00,0xFF,0xFF},
{0xFB,0xFB,0x81,0xFE,0x7F,0xB8,0xCF,0xF0,0xEF,0xD8,0xFF,0xB8,0x7F,0x80,0xFF,0xFF},	//测
//
{0xBF,0xBF,0xBD,0x33,0xFF,0x6F,0x6F,0x6F,0x6F,0x6F,0x00,0xEF,0xEE,0xE9,0xEF,0xFF},
{0xFF,0xFF,0xFF,0xC0,0xEF,0xD7,0x9F,0xC0,0xEF,0xEF,0xFE,0xF1,0xCF,0xBF,0x0F,0xFF},	//试
//
{0xFB,0xFB,0x1B,0xFB,0xF0,0x0B,0xFB,0xFB,0x0B,0xBB,0x30,0xBB,0xBB,0xBB,0xFB,0xFF},
{0xBF,0xBF,0x82,0xBB,0xBB,0x82,0xBB,0xBA,0xBB,0x83,0xBB,0xBA,0x83,0xBF,0xBF,0xFF},	//蓝
//
{0xFF,0xFF,0x3D,0x4D,0x7D,0x7D,0x7D,0x7D,0x7D,0x01,0x7D,0x7D,0x7D,0x7D,0x7F,0xFF},
{0xFF,0xDF,0xDF,0xEF,0xF7,0xFB,0xFD,0xBE,0x7F,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	//牙
//
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	//
//
{0x10,0x0C,0x44,0x44,0x44,0x44,0x45,0xC6,0x44,0x44,0x44,0x44,0x44,0x14,0x0C,0x00},
{0x80,0x40,0x20,0x1E,0x20,0x40,0x40,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},	//定
//
{0x04,0x04,0x04,0x04,0xF4,0x94,0x95,0x96,0x94,0x94,0xF4,0x04,0x04,0x04,0x04,0x00},
{0x00,0xFE,0x02,0x02,0x7A,0x4A,0x4A,0x4A,0x4A,0x4A,0x7A,0x02,0x82,0xFE,0x00,0x00},	//高
//
{0x10,0x10,0xD0,0xFF,0x90,0x14,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x89,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x80,0x00},	//模
//
{0x10,0x10,0x90,0x90,0x90,0x90,0x90,0x10,0x10,0xFF,0x10,0x10,0x11,0x16,0x10,0x00},
{0x00,0x20,0x60,0x20,0x3F,0x10,0x10,0x10,0x00,0x03,0x0C,0x10,0x20,0x40,0xF8,0x00},	//式
//
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	//
//
{0xEF,0xF3,0xBB,0xBB,0xBB,0xBB,0xBA,0x39,0xBB,0xBB,0xBB,0xBB,0xBB,0xEB,0xF3,0xFF},
{0x7F,0xBF,0xDF,0xE1,0xDF,0xBF,0xBF,0x80,0xBB,0xBB,0xBB,0xBB,0xBB,0xBF,0xBF,0xFF},	//定
//
{0xFB,0xFB,0xFB,0xFB,0x0B,0x6B,0x6A,0x69,0x6B,0x6B,0x0B,0xFB,0xFB,0xFB,0xFB,0xFF},
{0xFF,0x01,0xFD,0xFD,0x85,0xB5,0xB5,0xB5,0xB5,0xB5,0x85,0xFD,0x7D,0x01,0xFF,0xFF},	//高
//
{0xEF,0xEF,0x2F,0x00,0x6F,0xEB,0x1B,0x50,0x5B,0x5B,0x5B,0x50,0x1B,0xFB,0xFF,0xFF},
{0xFB,0xFC,0xFF,0x00,0xFF,0x76,0xB4,0xD5,0xE5,0xF1,0xE5,0xD5,0xB4,0x77,0x7F,0xFF},	//模
//
{0xEF,0xEF,0x6F,0x6F,0x6F,0x6F,0x6F,0xEF,0xEF,0x00,0xEF,0xEF,0xEE,0xE9,0xEF,0xFF},
{0xFF,0xDF,0x9F,0xDF,0xC0,0xEF,0xEF,0xEF,0xFF,0xFC,0xF3,0xEF,0xDF,0xBF,0x07,0xFF},	//式
//
{0x08,0x88,0x88,0x88,0x88,0xFF,0x00,0x00,0x00,0xFF,0x88,0x88,0x88,0x88,0x08,0x00},
{0x10,0x10,0x10,0x10,0x10,0xFF,0x00,0x00,0x00,0xFF,0x10,0x10,0x10,0x10,0x10,0x00},	//非
//
{0x10,0x0C,0x44,0x44,0x44,0x44,0x45,0xC6,0x44,0x44,0x44,0x44,0x44,0x14,0x0C,0x00},
{0x80,0x40,0x20,0x1E,0x20,0x40,0x40,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},	//定
//
{0x04,0x04,0x04,0x04,0xF4,0x94,0x95,0x96,0x94,0x94,0xF4,0x04,0x04,0x04,0x04,0x00},
{0x00,0xFE,0x02,0x02,0x7A,0x4A,0x4A,0x4A,0x4A,0x4A,0x7A,0x02,0x82,0xFE,0x00,0x00},	//高
//
{0x10,0x10,0xD0,0xFF,0x90,0x14,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x89,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x80,0x00},	//模
//
{0x10,0x10,0x90,0x90,0x90,0x90,0x90,0x10,0x10,0xFF,0x10,0x10,0x11,0x16,0x10,0x00},
{0x00,0x20,0x60,0x20,0x3F,0x10,0x10,0x10,0x00,0x03,0x0C,0x10,0x20,0x40,0xF8,0x00},	//式
//
{0xF7,0x77,0x77,0x77,0x77,0x00,0xFF,0xFF,0xFF,0x00,0x77,0x77,0x77,0x77,0xF7,0xFF},
{0xEF,0xEF,0xEF,0xEF,0xEF,0x00,0xFF,0xFF,0xFF,0x00,0xEF,0xEF,0xEF,0xEF,0xEF,0xFF},	//非
//
{0xEF,0xF3,0xBB,0xBB,0xBB,0xBB,0xBA,0x39,0xBB,0xBB,0xBB,0xBB,0xBB,0xEB,0xF3,0xFF},
{0x7F,0xBF,0xDF,0xE1,0xDF,0xBF,0xBF,0x80,0xBB,0xBB,0xBB,0xBB,0xBB,0xBF,0xBF,0xFF},	//定
//
{0xFB,0xFB,0xFB,0xFB,0x0B,0x6B,0x6A,0x69,0x6B,0x6B,0x0B,0xFB,0xFB,0xFB,0xFB,0xFF},
{0xFF,0x01,0xFD,0xFD,0x85,0xB5,0xB5,0xB5,0xB5,0xB5,0x85,0xFD,0x7D,0x01,0xFF,0xFF},	//高
//
{0xEF,0xEF,0x2F,0x00,0x6F,0xEB,0x1B,0x50,0x5B,0x5B,0x5B,0x50,0x1B,0xFB,0xFF,0xFF},
{0xFB,0xFC,0xFF,0x00,0xFF,0x76,0xB4,0xD5,0xE5,0xF1,0xE5,0xD5,0xB4,0x77,0x7F,0xFF},	//模
//
{0xEF,0xEF,0x6F,0x6F,0x6F,0x6F,0x6F,0xEF,0xEF,0x00,0xEF,0xEF,0xEE,0xE9,0xEF,0xFF},
{0xFF,0xDF,0x9F,0xDF,0xC0,0xEF,0xEF,0xEF,0xFF,0xFC,0xF3,0xEF,0xDF,0xBF,0x07,0xFF},	//式
//
};

#endif
