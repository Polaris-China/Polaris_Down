#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[10];
//	int i = 0;
//	while (scanf("%s", &arr) != EOF)
//	{
//		for (i = 0; arr[i] != '\0'; i++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				arr[i] = '0';
//			}
//			else
//				arr[i] = '1';
//		}
//		i = 0;
//		while (arr[i] == '0');
//		{
//			i++;
//		}
//		printf("%s", &arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char arr[9];
//    int i = 0;
//    while (scanf("%s", &arr) != EOF)
//    {
//        for (i = 0; arr[i] != '\0'; i++)
//        {
//            if (arr[i] % 2 != 0)
//            {
//                arr[i] = '1';
//            }
//            else
//            {
//                arr[i] = '0';
//            }
//        }
//        i = 0;
//        while (arr[i] == '0')
//        {
//            i++;
//        }
//        printf("%s", &arr[i]);
//    }
//    return 0;
//}
//#include<math.h>
//int main()
//{
//	int n;
//	int add = 0;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		int w = n % 10;
//		if (w % 2 == 1)
//			w = 1;
//		else
//			w = 0;
//		add += w * pow(10, i);
//		n = n / 10;
//		i++;
//	}
//	printf("%d", add);
//	return 0;
//}
//int fbnq(int x)   //斐波那契数列的问题；
//{
//	if (x <= 2)
//		return x;
//	else
//		return fbnq(x - 1) + fbnq(x - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m = fbnq(n);
//	printf("%d", m);
//	return 0;
//}
int main()
{
	int n;
	int arr[100000] = { 0 };
	int i = 0;
	int swp = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &swp);
		arr[swp] = swp;
	}
	for (i = 0; i < 100000; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}