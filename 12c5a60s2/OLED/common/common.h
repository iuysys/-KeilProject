#ifndef __COMMON_H__
#define __COMMON_H__



#include "STC12C5A60S2.h"
#define FOSC 11059200




/*
 * ������������
 */
typedef unsigned char       uint8;  /*  8 bits */
typedef unsigned int        uint16; /* 16 bits */
typedef unsigned long       uint32; /* 32 bits */

typedef char                int8;   /*  8 bits */
typedef int                 int16;  /* 16 bits */
typedef long                int32;  /* 32 bits */

typedef enum {FALSE = 0, TRUE = !FALSE} bool;


/*
 * �����ֵ����Сֵ
 */
#define MAX( x, y ) ( ((x) > (y)) ? (x) : (y) )
#define MIN( x, y ) ( ((x) < (y)) ? (x) : (y) )


/*
 * ��������Ԫ�صĸ���
 */
#define ARR_SIZE( a ) ( sizeof( (a) ) / sizeof( ((a)[0]) ) )

/*
 * �궨��ʵ�ַ��ؾ���ֵ��x�ﲻ�����Լ��Լ�����䣬�����������
 */
#define ABS(x) (((x) > 0) ? (x) : (-(x)))

/*
 * ��ȡ�ṹ��ĳ��Աƫ��
 */
#define OFFSET(type, member)    (uint32)(&(((type *)0)->member))

/*
 * ȷ��x�ķ�ΧΪ min~max
 */
#define RANGE(x,max,min)        ((uint8)((x)<(min) ? (min) : ( (x)>(max) ? (max):(x) )))



#endif
/*-------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------*/
extern void delay_us(uint32 i);        //��ʱ��������ʱus

extern void delay_ms(uint32 i);        //��ʱ��������ʱms
/*-------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------*/
















