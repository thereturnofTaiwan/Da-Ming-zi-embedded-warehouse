#include "stm32f10x.h"                  // Device header
#include "PWM.h"

void Motor_Init(void)
{
		PWM_Init();

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //ʹ��A�˿�ʱ��
	
	GPIO_InitTypeDef  GPIO_InitStructure; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11;	 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//�ٶ�50MHz
 	GPIO_Init(GPIOA, &GPIO_InitStructure);	  //��ʼ��PA0,1
	

}


void Motor1_SetSpeed(int8_t Speed1)
{
	if (Speed1 >= 0)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_4);
		GPIO_ResetBits(GPIOA, GPIO_Pin_5);
		PWM_SetCompare1(Speed1);
	}
	else
	{
		GPIO_ResetBits(GPIOA, GPIO_Pin_4);
		GPIO_SetBits(GPIOA, GPIO_Pin_5);
		PWM_SetCompare1(-Speed1);
	}
}

 void Motor2_SetSpeed(int8_t Speed2)
{
	if (Speed2 >= 0)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_6);
		GPIO_ResetBits(GPIOA, GPIO_Pin_7);
		PWM_SetCompare2(Speed2);
	}
	else
	{
		GPIO_ResetBits(GPIOA, GPIO_Pin_6);
		GPIO_SetBits(GPIOA, GPIO_Pin_7);
		PWM_SetCompare2(-Speed2);
	}
}


void Motor3_SetSpeed(int8_t Speed3)
{
	if (Speed3 >= 0)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_8);
		GPIO_ResetBits(GPIOA, GPIO_Pin_9);
		PWM_SetCompare3(Speed3);
	}
	else
	{
		GPIO_ResetBits(GPIOA, GPIO_Pin_8);
		GPIO_SetBits(GPIOA, GPIO_Pin_9);
		PWM_SetCompare3(-Speed3);
	}
}



void Motor4_SetSpeed(int8_t Speed4)
{
	if (Speed4 >= 0)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_10);
		GPIO_ResetBits(GPIOA, GPIO_Pin_11);
		PWM_SetCompare4(Speed4);
	}
	else
	{
		GPIO_ResetBits(GPIOA, GPIO_Pin_10);
		GPIO_SetBits(GPIOA, GPIO_Pin_11);
		PWM_SetCompare4(-Speed4);
	}
}

