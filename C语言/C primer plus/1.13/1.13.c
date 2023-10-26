
//#define _CRT_SECURE_NO_WARNINGS 1

/*
*你刚被无锡信捷电气股份有限公司聘用。该公司准备进入欧洲市场，
*需要一个把英寸单位转换为厘米单位（1英寸=2.54厘米）的程序
*该程序要提示用户输入英寸值。你的任务是定义程序目标和设计程序（编程过程的第一步和第二步）
* 预编译  ----编译-----汇编-------链接    （完整的编译过程）
* 
*/

#include<stdio.h>
double inch;
double cm;
int main()
{
		printf("Please enter an inch value:\n");
		printf("Please Enter Yes to exit\n");
		scanf_s("%lf\n", &inch);
		cm = inch / 2.54;
		printf("Convert to centimeters :%lf", cm);
		return 0;
}
