#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct T
{
	double weight;
	double hign;
};
struct S
{       //结构体的声明
	char c;
	struct T st; //结构体中可以包含另一个结构体
	int a;
	double d;
	char arr[20];
};
int main()
{
	//struct S s = { 'c',100,3.14,"晨曦_Dawn" };//结构体的初始化
	struct S s = { 'c',{56.6,171.5},100,3.14,"晨曦_Dawn" }; //嵌套初始化
	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);//结构体的访问
	printf("%lf %lf\n", s.st.weight, s.st.hign);//先找到st,在找到st中的元素
	return 0;
}