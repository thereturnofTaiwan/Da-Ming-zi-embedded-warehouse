/*
*�ṹ�������
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
* �ṹ��ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ��
* 
* struct Point
* {
*		int x;
*		int y;
* }p1;    //�������͵�ͬʱ�������p1
* struct Point p2;  //����ṹ�����p2
* 
* //��ʼ�������������ͬʱ����ֵ��
* struct Point p3 = { x ,y };
* struct Stu      //��������
* {
*		char name[15];
*		int age;
* };
* struct Stu s ={ "fangtianming" , 22 }; //��ʼ��
* 
* struct Node
* {
*		int data;
		struct Point p;
		struct Node* next;
* }n1 = { 10, {4,5}, NULL };  //�ṹ��Ƕ�׳�ʼ��
* struct Node n2 = { 20, {5 , 6}, NULL};  //�ṹ��Ƕ�׳�ʼ��
*/

/*
* �ṹ��������ʳ�Ա
* �ṹ�����ĳ�Ա��ͨ�����������.�����ʵġ����������������������
* struct Stu
* {
*		char name[20];
*		int age;
* };
* 
* struct Stu s;
* strcpy(s.name, "fangtainming");  //ʹ��.����name��Ա
* s.age = 20; //ʹ��.����age��Ա
* 
* 
*/

/* �ṹ��ָ�����ָ������ĳ�Ա
* struct Stu
* {
*		char name[20];
*		int age;
* }��
* void print(struct Stu* ps)   //ps��һ���ṹ��ָ��
* {		
*		printf("name = %s   age = %d\n", (*ps).name,(*ps).age);
*		//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
*		printf("name = %s   age = %d\n", ps ->name , ps -> age);
* }
* int main()
* {
*		struct Stu s = { "fangtianming", 22};
*		print(&s);//�ṹ���ַ����
*		return 0��
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
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}

int main01()
{
	print1(s);  //���ṹ��
	print2(&s);	//����ַ
	return 0;
}




/*
* �������ε�ʱ�򣬲�������Ҫѹջ�ġ�
* �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
* �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
*/
