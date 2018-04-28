#ifndef __INCLUDE_H__
#define __INCLUDE_H__

#include "common.h"

#ifdef RTE_DEVICE_STDPERIPH_ADC
#include "adc.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_BKP
#include "bkp.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_DAC
#include "dac.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_DMA
#include "dma.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_EXTI
#include "exti.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_FLASH
#include "flash.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_FSMC
#include "fsmc.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_GPIO
#include "gpio.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_I2C
#include "i2c.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_IWDG
#include "iwdg.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_PWR
#include "pwr.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_RTC
#include "rtc.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_SDIO
#include "sdio.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_SPI
#include "spi.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_TIM
#include "tim.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_USART
#include "usart.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_WWDG
#include "wwdg.h"
#endif
#ifdef RTE_DEVICE_STDPERIPH_FRAMEWORK
#include "nvic.h" 
#endif



#endif



