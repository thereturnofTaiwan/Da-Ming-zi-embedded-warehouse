#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int age = 23;
int day = 0;
int main()
{
		day = 365 * age;
		printf("我的年龄是：%d岁\n", age);
		printf("换算成日期是：%d天", day);
		return 0;
		
}