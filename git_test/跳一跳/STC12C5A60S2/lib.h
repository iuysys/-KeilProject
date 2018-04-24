#ifndef __LIB_H__
#define __LIB_H__

#include <intrins.h>
#include <stdio.h>
#include "include.h"



//=========================================================
typedef enum
{
    GPIO_OUT_LP,            //������
    GPIO_OUT_PP,            //�������
    GPIO_OUT_HR,            //����
    GPIO_OUT_OD             //��©
        
}GPIO_OUT_MODE;             //���ģʽö��
typedef enum
{
    GPIO_Pin_0=0x01,
    GPIO_Pin_1=0x02,
    GPIO_Pin_2=0x04,
    GPIO_Pin_3=0x08,
    GPIO_Pin_4=0x10,
    GPIO_Pin_5=0x20,
    GPIO_Pin_6=0x40,
    GPIO_Pin_7=0x80,
    GPIO_Pin_ALL=0xff
}GPIO_chx;                  //���ź�ö��

typedef enum
{
    GPIO_P0,
    GPIO_P1,
    GPIO_P2,
    GPIO_P3,
    GPIO_P4,
    GPIO_P5
}GPIO_n;                    //�˿ں�ö��

//=========================================================
#define printf_usart USART1         //printf�����˿ں�

//������ص�ö��
typedef enum
{
    USART1,
    USART2
}USARTn_e;          //���ں�ö��

//=========================================================
//ADC��ص�ö��
typedef enum
{
     ADC_0,
     ADC_1,
     ADC_2,
     ADC_3,
     ADC_4,
     ADC_5,
     ADC_6,
     ADC_7,
     ADC_ALL=0x07
}ADC_ch;            //ADCͨ����ö��

typedef enum
{
    ADC_POWER   =0x80,            //ADC power control bit
    ADC_FLAG    =0x10,            //ADC complete flag
    ADC_START   =0x08,            //ADC start control bit
    ADC_SPEEDLL =0x00,
    ADC_SPEEDL  =0x20,
    ADC_SPEEDH  =0x40,
    ADC_SPEEDHH =0x60
}ADC_CMD;         //ADC����ö��
//=========================================================
//PCA��ص�ö��
typedef enum
{
     PCA_0,
     PCA_1
}PCA_n;         //PCAģ��ö��
//========================================================
extern void gpio_out_mode(GPIO_n port,GPIO_chx gpio_pin,GPIO_OUT_MODE mode);//GPIO���ģʽ����

//=========================================================
extern bit usart_init(USARTn_e usartn,uint32 baud );//��ʼ������

extern char putchar(char c);   //�ض���putchar����

extern bit usart_send(USARTn_e usartn,uint8 Data); // ���ڷ�������

extern uint8 usart_get(USARTn_e usartn); // ���ڽ�������,��ѯ��ʽ

extern void usart_putbuff(USARTn_e usartn,uint8 *buff,uint32 len);   // ����len���ֽ�BUFF

extern void usart_putstr(USARTn_e usartn,uint8 *str);  //�����ַ���

extern void usart_sware(USARTn_e usartn,void *wareaddr,uint32 waresize); // ����ʾ����


//============================================================
extern void adc_init(ADC_ch adc_ch,ADC_CMD cmd);                     //ADCͨ����ʼ��

extern uint16 adc_get(ADC_ch adc_ch,ADC_CMD cmd);                                //��ȡADCת����ֵ,��ѯ��ʽ

//============================================================

extern void pwm_init_NT0(PCA_n pca,uint8 div);                  //pWM��ʼ��,��ʹ��T0����ʱ��

extern void pwm_init_T0(PCA_n pca,uint32 freq);                  //ʹ��T0����ʱ��

extern void pwm_duty(PCA_n pca,uint8 duty);                //pwmռ�ձ�

extern void pwm_perc(PCA_n pca,uint8 perc);                 //�ٷֱ�����ռ�ձ�

extern void servo(PCA_n pca,uint8 ang);					//����Ƕ�

//============================================================





#endif