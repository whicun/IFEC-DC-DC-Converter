#ifndef CLLC_PARAMETER_H_
#define CLLC_PARAMETER_H_
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Main.c相关参数
#define PWMS_FRC_DISABLE 0x0000 //宏定义，禁止ePWM模块强制功能
#define PWMS_ALBL 0x0005 //宏定义，强制A低电平，B低电平
#define PWMS_AHBH 0x000A //宏定义，强制A高电平，B高电平
#define PWMS_AHBL 0x0006 //宏定义，强制A高电平，B低电平
#define PWMS_ALBH 0x0009 //宏定义，强制A低电平，B高电平
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_控制参数
#define MAX_FREQ 200000 //最大频率
#define MIN_FREQ 90000 //最小频率
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
#endif /* PWM_PARAMETER_H_ */
