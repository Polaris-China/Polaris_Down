#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	//int tmp = 0;
//	int i = 0;
//	int arr[100] = { 0 };
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n = n / 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	int i = 0;
//	long long add = 0;
//	for (i = 0; i <= n; i++)
//	{
//		add += i;
//	}
//	printf("%lld", add);
//	return 0;
//}
//int main()
//{
//	int h = 0, m = 0, k = 0;
//	printf("hoer:minute k:\n");
//	scanf("%d:%d %d", &h, &m, &k);
//	h = ((m + k) / 60 + h) % 24;
//	m = (m + k) % 60;
//	printf("%02d:%02d\n", h, m);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int minute = 0;
//	if (n < 12)
//	{
//		printf("2\n");
//	}
//	else if (n >= 12)
//	{
//		n = n / 12;
//		minute = n * 4 + 2;
//		printf("%d", minute);
//	}
//	return 0;
//}
int main()
{
	long long m,n;
	scanf("%lld %lld", &m, &n);
	long long swp = 0;
	long long a = 0, b = 0;
	a = m, b = n;
	while (swp = a % b)
	{
		a = b;
		b = swp;
	}
	printf("%lld", b + m * n / b);
	return 0;
}