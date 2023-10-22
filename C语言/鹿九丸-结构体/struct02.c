/*
* 结构体是一些值的集合，这些值被称为成员变量。结构体的每个成员可以是不同类型的变量
* 
* struct tag //tag:结构体类型名
* {
*		member -list;//member -list:成员列表
* }variable -list;   //variable -list:变量列表
*/

/*
* struct Stu
* {
*		char name[20];  //名字
*		int age；       //年龄
*		char sex[5];    //性别
*		char id[20];    //学号
* }；					//分号不能丢
*/

/*
* 特殊的声明
* 在声明结构的时候，可以不完全的声明
*
* //匿名结构类型
* struct
* {
*		int a;
*		char b;
*		float c;
* }x;
* struct
* {
*		int a;
*		char b;
*		float c;
* }a[20],* p;
* 匿名结构体类型变量在创建时候只能放在{}的后面，而不能单独进行创建，因为不知道结构体类型的名字，所以不能单独创建
* 
* 结构的自引用
* struct Node
* {
*		int data;
*		struct Node* next;
* };
* 
* 结构体变量的定义和初始化
* struct Point
* {
*		int x;
*		int y;
* }p1;  //声明变量的同时定义变量p1;
* struct Point p2;   //定义结构体变量p2
* 
* //初始化：定义变量的同时赋初值
* struct Point p3 = { x,y };
* struct Stu;             //类型声明
* {
*		char name[15];  //名字s
*		int age；      //年龄
* }；
* struct Stu s ={"fangtianming" , 22}; //初始化
* struct Node
* {
*		int data;
*		struct Point p;
*		struct Node* next;
* }n1 = {10, {5,8}, NULL};  //结构体嵌套初始化
* struct Node n2 = { 20, {5,6}, NULL };   //结构体嵌套初始化
*/

/* 结构体内存对齐
*/
#include<stdio.h>
struct S1
{
	char c1;
	int i;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int i;
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
int main()
{
	printf("%d %d %d %d", sizeof(struct S1), sizeof(struct S2), sizeof(struct S3), sizeof(struct S4));
	return 0;
}

