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
/*#include<stdio.h>
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
*/

/*
* 结构体的对齐规则：
* 1、第一个成员在与结构体变量偏移为0的地址处。
* 2、其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。对齐数=编译器默认的一个对齐数与该成员大小的较小值。
* 3、结构体总大小为最大对齐数（每一个成员变量都有一个对齐数）的整数倍。
* 4、如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数
*	 (含嵌套结构体的对齐数)的整数倍。
* 结构体的内存对齐是拿空间换取时间的做法
* 
*/


/*
* 在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：让占用空间小的成员尽量集中在一起
* // for example
* struct s1
* {
*		char c1;
*		int i;
*		char c2;
* };
* struct s2
* {
*		char c1;
*		char c2;
*		int i;
* };
* S1和S2类型的成员一模一样，但是S1和S2所占空间的大小有了一些区别。
*/

//修改默认对齐数
 /*#include<stdio.h>
 #pragma pack(8)  //设置默认对齐数为8
 struct S1
 {
		char c1;
		int i;
		char c2;
 };
 #pragma pack()  //取消设置的默认对齐数，还原为默认
 #pragma pack(1) //设置默认对齐数为1
 struct S2
 {
		char c1;
		int i;
		char c2;
 };
 #pragma pack() //取消设置的默认对齐数，还原为默认
 int main()
 {
	 //输出的结果是什么？
	 printf("%d\n", sizeof(struct S1));  //12
	 printf("%d\n", sizeof(struct S2));  //6
	 return 0;
 }
 */
 //结构在对齐方式不合适的时候，那么可以自己更改默认对齐数
 
 //计算偏移量的函数
 //offsetof    (头文件 <stddef.h>)
 //代码举例
#include<stdio.h>
#include<stddef.h>
struct S
{
	char c1;
	char c2;
	int i;
};
int main()
{
	printf("%d ", offsetof(struct S, c1));
	printf("%d ", offsetof(struct S, c2));
	printf("%d ", offsetof(struct S, i));
	return 0;
}

//结构体传参
//结构体传参的时候最好传结构体指针，为什么？因为结构体大小一般比指针大小大得多，而且传指针能够在函数内进行修改，当然，如果不需要进行修改，也可对参数使用const进行修饰。




/*
* 
*/
