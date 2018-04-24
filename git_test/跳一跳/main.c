#include <stdlib.h>
#include "include.h"

#define UP_angle 12		//���̧��Ƕ�
#define DOWN_angle 10	//������½Ƕ�
 
uint8 get=0,begin=0;
uint8 count;		//���������
uint8 str[6]={0}; 	//�����ַ�������	
uint16 time=65535;		//����ʱ��
void Timer1Init(void);	 //50����@11.0592MHz

int main()
{
	uint16 dis;				//����
	
	Timer1Init();			//��ʱ��1��ʼ��
	pwm_init_T0(PCA_0,50); 	//PWM��ʼ��
	usart_init(USART1,BUAD);//��ʼ������
	
	ES = 1;                 //Enable UART interrupt
    EA = 1;                 //Open master interrupt switch
	while(1)
	{
		if(get==1)
		{	
			uint8 i;
			dis = atoi(str);		//�ַ���ת��Ϊ����
			time = dis*200;		//���㴥��ʱ��
			begin =1;				//��ʼ��־
			printf("����:%d\t����ʱ��:%d\n",dis,time);
			TF1=0;
			TL1 = 0x00;		//���ö�ʱ��ֵ
			TH1 = 0xDC;		//���ö�ʱ��ֵ
			get = 0;				//����һ�ξ�������

		}
		if(begin)
		{
			pwm_duty(PCA_0,DOWN_angle);
			TR1 =1;					//�򿪶�ʱ��
		} 
		else
		{

			pwm_duty(PCA_0,UP_angle);
			REN =1;
			TR1=0;
		}

	}		
}

void Timer1Init(void)		//10����@11.0592MHz
{
	AUXR &= 0xBF;		//��ʱ��ʱ��12Tģʽ
	TMOD &= 0x0F;		//���ö�ʱ��ģʽ
	TMOD |= 0x10;		//���ö�ʱ��ģʽ
	TL1 = 0x00;		//���ö�ʱ��ֵ
	TH1 = 0xDC;		//���ö�ʱ��ֵ
	TF1 = 0;		//���TF1��־
	TR1 = 0;		//��ʱ��1��ʼ��ʱ
	ET1 =1;					//Enable T1 interrupt
}


/*----------------------------
UART interrupt service routine
----------------------------*/
void Uart_Isr() interrupt 4 using 1
{
	if (RI)
    {	
		
		RI = 0;             //Clear receive interrupt flag
        str[count] = SBUF; 
		count ++;
		if(str[count-1]=='.')
		{
			str[count]='\0';
			get=1; 
			count = 0;
			REN =0;
		}       
    }
}
/* Timer0 interrupt routine */
void tm1_isr() interrupt 3 using 1
{
    static uint16 i=0;
	TL1 = 0x00;		//���ö�ʱ��ֵ
	TH1 = 0xDC;		//���ö�ʱ��ֵ
	i ++;
	if((i*10) >= time)
	{
		begin =0;
		i = 0 ;
		printf("\n���������!\n");
	}
}


/* Timer0 interrupt routine */
void tm1_isr() interrupt 3 using 1
{
    static uint16 i=0;
	TL1 = 0x00;		//���ö�ʱ��ֵ
	TH1 = 0xDC;		//���ö�ʱ��ֵ
	i ++;
	if((i*10) >= time)
	{
		begin =0;
		i = 0 ;
		printf("\n���������!\n");
	}
}









