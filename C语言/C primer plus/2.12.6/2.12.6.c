#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int toes = 10;
int d, s;
int main() 
{
	d = 2 * toes;
	s = toes * toes;
	printf("toes的值为：%d\n", toes);
	printf("toes的两倍为：%d\n", d);
	printf("toes的平方为：%d\n", s);
	return 0;
}