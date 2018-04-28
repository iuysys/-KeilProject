#include "STC12C5A60S2.h"
#include "LQ12864.h"

int main()
{
	LCD_Init();	
	while(1)
	{
		LCD_P6x8Str(0,0,"test"); 
		LCD_P8x16Str(0,1,"Aa");
		LCD_PrintU16(0,4,6500);
		delay_ms(1000);
		LCD_CLS();
		delay_ms(2000);
		
	}
}







