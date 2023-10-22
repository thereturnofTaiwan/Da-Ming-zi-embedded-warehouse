#include "stm32f10x.h"                  // Device header
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "xunji.h"
#include "stm32f10x_tim.h"
#include "Motor.h"



void xunji(void)
{
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	 //使能A端口时钟
	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_1;	 
 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//速度50MHz
 	GPIO_Init(GPIOB, &GPIO_InitStructure);	  //初始化PA2
 	GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_1);
	
	u8 q, w, e, r, t, y, u, i;
	char string[11]={q, w, e, r, t, y, u, i};
	//u8 q, w, e, r, t, y, u, i;


  


	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_0) == 0)//读取电平1
	{
		  string[0]=0;
	}
	else
	{
			string[0]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_4) == 0)//读取电平2
	{
	  string[1]=0;
	}
	else
	{
			string[1]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_5) == 0)//读取电平3
	{
	  string[2]=0;
	}
	else
	{
			string[2]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_6) == 0)//读取电平4
	{
	   string[3]=0;
	}
	else
	{
			string[3]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_7) == 0)//读取电平5
	{
	   string[4]=0;
	}
	else
	{
			string[4]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_8) == 0)//读取电平6
	{
	  string[5]=0;
	}
	else
	{
			string[5]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_9) == 0)//读取电平7
	{
	   string[6]=0;
	}
	else
	{
			string[6]=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_1) == 0)//读取电平8
	{
	   string[7]=0;
	}
	else
	{
			string[7]=1;
	}	
		
    OLED_Refresh();
		OLED_ShowNum(8,0,string[0],1,16,1);
		OLED_ShowNum(24,0,string[1],1,16,1);
		OLED_ShowNum(40,0,string[2],1,16,1);
		OLED_ShowNum(56,0,string[3],1,16,1);
		OLED_ShowNum(72,0,string[4],1,16,1);
		OLED_ShowNum(88,0,string[5],1,16,1);
		OLED_ShowNum(104,0,string[6],1,16,1);
		OLED_ShowNum(120,0,string[7],1,16,1);
	
if(string[0]==1&&string[1]==1&&string[2]==0&&string[3]==0&&string[4]==0&&string[5]==0&&string[6]==1&&string[7]==1)
{
		Straight();
}
if(string[0]==1&&string[1]==1&&string[2]==1&&string[3]==0&&string[4]==0&&string[5]==0&&string[6]==1&&string[7]==1)
{
		Straight();
}
if(string[0]==1&&string[1]==1&&string[2]==0&&string[3]==0&&string[4]==0&&string[5]==1&&string[6]==1&&string[7]==1)
{
		Straight();
}
if(string[0]==1&&string[1]==1&&string[2]==1&&string[3]==0&&string[4]==0&&string[5]==1&&string[6]==1&&string[7]==1)
{
		Straight();
}
if(string[0]==0&&string[1]==0&&string[2]==0&&string[3]==0&&string[4]==0&&string[5]==0&&string[6]==0&&string[7]==0)
{
		Straight();
}
else if(string[0]==1&&string[7]==0)
{
	  Right();
}
else if(string[0]==0&&string[7]==1)
{
		Left();
}
/*
else if(string[2]==0&&string[3]==0)
{
		Leftw();
}
else if(string[4]==0&&string[5]==0)
{
		Rightw();
}
*/
else if(string[1]==0)
{
		Leftw1();
}
else if(string[6]==0)
{
		Rightw1(); 
}
else if(string[1]==0&&string[2]==0)
{
		Leftw1();
}
else if(string[5]==0&&string[6]==0)
{
		Rightw1(); 
}
else if(string[0]==1&&string[1]==1&&string[2]==1&&string[3]==1&&string[4]==1&&string[5]==1&&string[6]==1&&string[7]==1)
{
		Stop();
}


}
u8 a=100;  //a为直走速度

void Straight(void)
{
	Motor1_SetSpeed(50);// 1
<<<<<<< HEAD
	Motor2_SetSpeed(50);// 2
	Motor3_SetSpeed(50);//3
=======
	Motor2_SetSpeed(60);// 2
	Motor3_SetSpeed(70);//3
>>>>>>> ftm
	Motor4_SetSpeed(50);//4
}



void Right(void)
{

	Motor1_SetSpeed(100);// 1  LQ
	Motor2_SetSpeed(-100);// 2   LH
	Motor3_SetSpeed(-50);//3		 RQ
	Motor4_SetSpeed(50);//4	 RH
	delay_ms(4000);
	

}


void Left(void)
{
	Motor1_SetSpeed(-50);// 1 
	Motor2_SetSpeed(50);// 2
	Motor3_SetSpeed(100);//3
	Motor4_SetSpeed(-100);//4
	delay_ms(4000);
}


void Stop(void)
{
	Motor1_SetSpeed(0);// 1
	Motor2_SetSpeed(0);// 2
	Motor3_SetSpeed(0);//3
	Motor4_SetSpeed(0);//4

}


void Leftw(void)  //3 4
{
	Motor1_SetSpeed(-80);// 1 
	Motor2_SetSpeed(80);// 2
	Motor3_SetSpeed(100);//3
	Motor4_SetSpeed(-100);//4

}


void Rightw(void)  //5 6
{
	Motor1_SetSpeed(100);// 1  LQ
	Motor2_SetSpeed(-100);// 2   LH
	Motor3_SetSpeed(-80);//3		 RQ
	Motor4_SetSpeed(80);//4	 RH

}


void Leftw1(void)  //3 4
{
	Motor1_SetSpeed(-80);// 1
	Motor2_SetSpeed(80);// 2
	Motor3_SetSpeed(100);//3
	Motor4_SetSpeed(-100);//4

}


void Rightw1(void)  //5 6
{
	Motor1_SetSpeed(100);// 1
	Motor2_SetSpeed(-100);// 2
	Motor3_SetSpeed(-80);//3
	Motor4_SetSpeed(80);//4

}


