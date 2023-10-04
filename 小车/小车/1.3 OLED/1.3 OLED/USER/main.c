//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//陈贪官专卖店
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : 陈平硕
//  生成日期   : 2023-9-18
//  最近修改   : 2023—9-18
//  功能描述   : 寻迹演示例程(STM32F103系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND  电源地
//              VCC  3.3v电源
//              D10   PB10（SCL）
//              D11   PB11（SDA）
//              ----------------------------------------------------------------
// 修改历史   :
// 日    期   : 
// 作    者   : 
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 陈贪官专卖店
//All rights reserved
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"
#include "xunji.h"
#include "Timer.h"
#include "PWM.h"
#include "Motor.h"

uint16_t Num;
int main(void)
{
	//u8 t= 'a' ;
	//delay_init();
	//OLED_Init();
	//OLED_ColorTurn(0);//0正常显示，1 反色显示
  //OLED_DisplayTurn(0);//0正常显示 1 屏幕翻转显示
	Motor_Init();
	

	//Motor1_SetSpeed(100);// 1  LQ
	//Motor2_SetSpeed(-100);// 2   LH
	//Motor3_SetSpeed(-50);//3		 RQ
	//Motor4_SetSpeed(50);//4	 RH
	//delay_ms(4000);
 
	//Timer_Init();//计数器
	//Right();
  //Left();
	
	
	
	
while(1)
{

//	OLED_Refresh();
//		OLED_ShowString(8, 0, "Num:",16,1);
//		OLED_ShowNum(48, 0, Num, 8,16,1);
	

//	Motor1_SetSpeed(100);
//	Motor2_SetSpeed(-100);
//	Motor3_SetSpeed(100);
//	Motor4_SetSpeed(-100);
	
	

  //xunji();
	Straight();
	//	u8 t=;
	//	OLED_ShowPicture(0,0,128,64,BMP1,1);
	//	OLED_Refresh();
	//	delay_ms(500);
	//	OLED_Clear();
	//	OLED_ShowChinese(0,0,0,16,1);//中
	// 	OLED_ShowChinese(18,0,1,16,1);//景
	//	OLED_ShowChinese(36,0,2,16,1);//园
	//	OLED_ShowChinese(54,0,3,16,1);//电
	//	OLED_ShowChinese(72,0,4,16,1);//子
	//	OLED_ShowChinese(90,0,5,16,1);//技
	//	OLED_ShowChinese(108,0,6,16,1);//术
	//	OLED_ShowString(0,0,"GPIO_Pin_3 == 0",16,1);
	//	OLED_ShowString(20,32,"2014/05/01",16,1);
	//	OLED_ShowString(0,48,"ASCII:",16,1);  
	//	OLED_ShowString(63,48,"CODE:",16,1);
	//	OLED_ShowChar(48,48,t,16,1);//显示ASCII字符	  
	//	OLED_ShowNum(8,0,q,1,16,1);
	//	OLED_ShowNum(24,0,w,1,16,1);
	//	OLED_ShowNum(40,0,e,1,16,1);
	//	OLED_ShowNum(56,0,r,1,16,1);
	//	OLED_ShowNum(72,0,t,1,16,1);
	//	OLED_ShowNum(88,0,y,1,16,1);
	//	OLED_ShowNum(104,0,u,1,16,1);
	//	OLED_ShowNum(120,0,i,1,16,1);
	//	t++;
	//	if(t>'~')t=' ';
	//	OLED_ShowNum(103,48,t,3,16,1);
	//	OLED_Refresh();
	//	delay_ms(500);
	//	OLED_Clear();
	//	OLED_ShowChinese(0,0,0,16,1);  //16*16 中
	//  OLED_ShowChinese(16,0,0,24,1); //24*24 中
	//	OLED_ShowChinese(24,20,0,32,1);//32*32 中
	//  OLED_ShowChinese(64,0,0,64,1); //64*64 中
	//	OLED_Refresh();
	//  delay_ms(500);
  //	OLED_Clear();
	//	OLED_ShowString(0,0,"ABC",8,1);//6*8 “ABC”
	//	OLED_ShowString(0,8,"ABC",12,1);//6*12 “ABC”
	//  OLED_ShowString(0,20,"ABC",16,1);//8*16 “ABC”
	//	OLED_ShowString(0,36,"ABC",24,1);//12*24 “ABC”
	//  OLED_Refresh();
	//	delay_ms(10);
	//	OLED_ScrollDisplay(11,4,1);
	
	
	

	}


}



