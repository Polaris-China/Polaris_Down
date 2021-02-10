#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char* my_strcat(char* p, char* q)
//{
//	char* null = p;
//	while (*null != '\0')
//	{
//		null++;
//	}
//	while ((*null++ = *q++) != '\0');
//	return q;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	char ch[100] = { 0 };
//	gets_s(arr);
//	gets_s(ch);
//	my_strcat(arr, ch);
//	printf("%s", arr);
//	return 0;
//}
#include<assert.h>
char* my_strcat(char* dest, const char* sour)
{
	char* s = dest;
	assert(dest != NULL);
	assert(sour != NULL);
	while (*s !='\0')
	{
		s++;
	}
	while ((*s++ = *sour++) != '\0');
	return dest;
}
int main()
{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };
	gets_s(ch1);
	gets_s(ch2);
	my_strcat(ch1, ch2);
	printf("%s ", ch1);
	return 0;
}