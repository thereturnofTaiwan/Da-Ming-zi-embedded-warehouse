/*
* �ṹ����һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա�������ṹ���ÿ����Ա�����ǲ�ͬ���͵ı���
* 
* struct tag //tag:�ṹ��������
* {
*		member -list;//member -list:��Ա�б�
* }variable -list;   //variable -list:�����б�
*/

/*
* struct Stu
* {
*		char name[20];  //����
*		int age��       //����
*		char sex[5];    //�Ա�
*		char id[20];    //ѧ��
* }��					//�ֺŲ��ܶ�
*/

/*
* ���������
* �������ṹ��ʱ�򣬿��Բ���ȫ������
*
* //�����ṹ����
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
* �����ṹ�����ͱ����ڴ���ʱ��ֻ�ܷ���{}�ĺ��棬�����ܵ������д�������Ϊ��֪���ṹ�����͵����֣����Բ��ܵ�������
* 
* �ṹ��������
* struct Node
* {
*		int data;
*		struct Node* next;
* };
* 
* �ṹ������Ķ���ͳ�ʼ��
* struct Point
* {
*		int x;
*		int y;
* }p1;  //����������ͬʱ�������p1;
* struct Point p2;   //����ṹ�����p2
* 
* //��ʼ�������������ͬʱ����ֵ
* struct Point p3 = { x,y };
* struct Stu;             //��������
* {
*		char name[15];  //����s
*		int age��      //����
* }��
* struct Stu s ={"fangtianming" , 22}; //��ʼ��
* struct Node
* {
*		int data;
*		struct Point p;
*		struct Node* next;
* }n1 = {10, {5,8}, NULL};  //�ṹ��Ƕ�׳�ʼ��
* struct Node n2 = { 20, {5,6}, NULL };   //�ṹ��Ƕ�׳�ʼ��
*/

/* �ṹ���ڴ����
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

