#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma pack(4)//设置默认内存
struct C
{
	char d;
	double f;
};
#pragma pack()//取消设置的默认对齐数
#include<stddef.h>//offsetof的头文件
int main()
{
	struct C s;
	printf("%d\n", sizeof(s));
	//offsetof(),计算结构体中成员偏移量
	printf("%d\n", offsetof(struct C,d));
	printf("%d\n", offsetof(struct C, f));
	// 用法 size_t offsetof( structName, memberName );
	//注意 offsetof不是函数，是一个宏

	return 0;
}