#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void br()
{
	printf("Brazil, Russia");
};
void ic()
{
	printf("India, China");
};
int main()
{
	br();
	printf(",\t");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	return 0;	
}