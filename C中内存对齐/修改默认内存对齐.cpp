#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#pragma pack(4)//����Ĭ���ڴ�
struct C
{
	char d;
	double f;
};
#pragma pack()//ȡ�����õ�Ĭ�϶�����
#include<stddef.h>//offsetof��ͷ�ļ�
int main()
{
	struct C s;
	printf("%d\n", sizeof(s));
	//offsetof(),����ṹ���г�Աƫ����
	printf("%d\n", offsetof(struct C,d));
	printf("%d\n", offsetof(struct C, f));
	// �÷� size_t offsetof( structName, memberName );
	//ע�� offsetof���Ǻ�������һ����

	return 0;
}