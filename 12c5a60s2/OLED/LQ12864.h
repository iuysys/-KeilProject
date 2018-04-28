#ifndef __LQ12864_H__
#define __LQ12864_H__


/*----------------------------------------------------------------------------*
 * 包含头文件                                                                 *
 *----------------------------------------------------------------------------*/
#include "common.h"
#include <intrins.h>

/*----------------------------------------------------------------------------*
 * 宏定义                                                                     *
 *----------------------------------------------------------------------------*/
#define X_WIDTH 128
#define Y_WIDTH 64
/*----------------------------------------------------------------------------*
 * 引脚定义                                                                     *
 *----------------------------------------------------------------------------*/
sbit LCD_SCL = P2^4;  
sbit LCD_SDA = P2^5;
sbit LCD_RST = P2^3; 
sbit LCD_DC  = P2^2;
sbit LCD_CS  = P2^1;
/*----------------------------------------------------------------------------*
 * 外部函数原型                                                               *
 *----------------------------------------------------------------------------*/
extern void LCD_Init(void);
extern void LCD_SetPos(unsigned char ucIdxX, unsigned char ucIdxY); 
extern void LCD_Fill(unsigned char bmp_data);
extern void LCD_CLS(void);
extern void LCD_P6x8Str(unsigned char x,unsigned char y,unsigned char ch[]);
extern void LCD_P8x16Str(unsigned char x,unsigned char y,unsigned char ch[]);
extern void LCD_P16x16Str(unsigned char x,unsigned char y,unsigned char ch[]);
extern void LCD_PrintU16(unsigned char x,unsigned char y,unsigned int num);


#endif

