#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct T
{
	double weight;
	double hign;
};
struct S
{       //�ṹ�������
	char c;
	struct T st; //�ṹ���п��԰�����һ���ṹ��
	int a;
	double d;
	char arr[20];
};
int main()
{
	//struct S s = { 'c',100,3.14,"����_Dawn" };//�ṹ��ĳ�ʼ��
	struct S s = { 'c',{56.6,171.5},100,3.14,"����_Dawn" }; //Ƕ�׳�ʼ��
	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);//�ṹ��ķ���
	printf("%lf %lf\n", s.st.weight, s.st.hign);//���ҵ�st,���ҵ�st�е�Ԫ��
	return 0;
}