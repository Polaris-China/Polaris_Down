#include<stdio.h>
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;          //一定要让指针加加，不然会停留在第一个位置
//	}
//	return count;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", arr);  //gets_s 也可以获取
//	my_strlen(arr);
//	printf("%d", my_strlen(arr));
//	return 0;
//}
#include<assert.h>
//int my_strlen(const char* str)  //代码更加健壮
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[100] = { 0 };
//	gets_s(ch);
//	int i=my_strlen(ch);
//	printf("%d\n", i);
//	return 0;
//}