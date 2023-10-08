/*
*结构体的声明
*	struct tag 
* {
*		member
* }variable
*/
/*typedef struct Stu
* {
*		char name[20];
*		int age;
*		char sex[5];
*		char id[20];
* }Stu;
* 结构体的成员可以是标量、数组、指针，甚至是其他结构体
* 
* struct Point
* {
*		int x;
*		int y;
* }p1;    //声明类型的同时定义变量p1
* struct Point p2;  //定义结构体变量p2
* 
* //初始化，定义变量的同时赋初值。
* struct Point p3 = { x ,y };
* struct Stu      //类型声明
* {
*		char name[15];
*		int age;
* };
* struct Stu s ={ "fangtianming" , 22 }; //初始化
* 
* struct Node
* {
*		int data;
		struct Point p;
		struct Node* next;
* }n1 = { 10, {4,5}, NULL };  //结构体嵌套初始化
* struct Node n2 = { 20, {5 , 6}, NULL};  //结构体嵌套初始化
*/

/*
* 结构体变量访问成员
* 结构变量的成员是通过点操作符（.）访问的。点操作符接受两个操作数
* struct Stu
* {
*		char name[20];
*		int age;
* };
* 
* struct Stu s;
* strcpy(s.name, "fangtainming");  //使用.访问name成员
* s.age = 20; //使用.访问age成员
* 
* 
*/

/* 结构体指针访问指向变量的成员
* struct Stu
* {
*		char name[20];
*		int age;
* }；
* void print(struct Stu* ps)   //ps是一个结构体指针
* {		
*		printf("name = %s   age = %d\n", (*ps).name,(*ps).age);
*		//使用结构体指针访问指向对象的成员
*		printf("name = %s   age = %d\n", ps ->name , ps -> age);
* }
* int main()
* {
*		struct Stu s = { "fangtianming", 22};
*		print(&s);//结构体地址传参
*		return 0；
* }
* 
* 
*/

#include <stdio.h>
struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}

int main01()
{
	print1(s);  //传结构体
	print2(&s);	//传地址
	return 0;
}




/*
* 函数传参的时候，参数是需要压栈的。
* 如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
* 结构体传参的时候，要传结构体的地址。
*/
