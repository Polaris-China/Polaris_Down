#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void PrintN(int N)
//{
//	int i = 0;
//	for (i = 1; i <= N; i++)
//	{
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int N;
//
//	scanf("%d", &N);
//	PrintN(N);
//
//	return 0;
//}
//int Sum(int List[], int N)
//{
//	int  sum = 0,i;
//	for (i = 0; i < N; i++)
//	{
//		sum += List[i];
//	}
//	return sum;
//}
//#define MAXN 10
//int main()
//{
//	int List[MAXN], N, i;
//
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//		scanf("%d", &List[i]);
//	printf("%d\n", Sum(List, N));
//
//	return 0;
//}
typedef float ElementType;
//ElementType Average(ElementType S[], int N)
//{
//	int i = 0;
//	float sum = 0;
//	double ave = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		sum = sum + S[i];
//	}
//	ave = sum / N;
//	return ave;
//}
//#define MAXN 10
//int main()
//	{
//		ElementType S[MAXN];
//		int N, i;
//
//		scanf("%d", &N);
//		for (i = 0; i < N; i++)
//			scanf("%f", &S[i]);
//		printf("%.2f\n", Average(S, N));
//
//		return 0;
//	}
//ElementType Max(ElementType S[], int N)
//{
//	int i = 0;
//	float max = S[0];
//	for (i = 0; i < N; i++)
//	{
//		/*if (S[i] >= 0)
//		{*/
//			if (max < S[i])
//			{
//				max = S[i];
//			}
//		/*}*/
//		/*if (S[i] < 0)
//		{
//			if(max>)
//		}*/
//		
//	}
//	
//	return max;
//}
//#define MAXN 10
//int main()
//{
//	ElementType S[MAXN];
//	int N, i;
//
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//		scanf("%f", &S[i]);
//	printf("%.2f\n", Max(S, N));
//
//	return 0;
//}
#include<math.h>
//int IsTheNumber(const int N)
//{
//	
//}
//int even(int n)
//{
//	if (n % 2 == 0)
//		return 1;
//	else
//		return 0;
//}



//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 50
//typedef int KeyType;
//
//typedef  struct
//{
//    KeyType  key;
//} ElemType;
//
//typedef  struct
//{
//    ElemType* R;
//    int  length;
//} SSTable;
//
//void  Create(SSTable& T)
//{
//    int i;
//    T.R = new ElemType[MAXSIZE + 1];
//    cin >> T.length;
//    for (i = 1; i <= T.length; i++)
//        cin >> T.R[i].key;
//}
//
//int  Search_Bin(SSTable T, KeyType k);
//
//int main()
//{
//    SSTable T;  KeyType k;
//    Create(T);
//    cin >> k;
//    int pos = Search_Bin(T, k);
//    if (pos == 0) cout << "NOT FOUND" << endl;
//    else cout << pos << endl;
//    return 0;
//}
//int  Search_Bin(SSTable T, KeyType k)
//{
//    int mid, left=0, right=0;
//    while (right>=left)
//    {
//        mid = (left + right) / 2.0;
//            if (T[mid] > left)
//            {
//             
//            }
//    }
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int d0 = 0, d1 = 0, d2 = 0;
//	d0 = n % 10;
//	d1 = n / 10 % 10;
//	d2 = n / 100 % 10;
//	int sum = d0 * 100 + d1 * 10 + d2 * 1;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = n / 16;
//	int b = n % 16;
//	printf("%d", a * 10 + b);
//	return 0;
//}
//int main()
//{
//	printf("------------------------------------\n");
//	printf("Province      Area(km2)   Pop.(10K)\n");
//	printf("------------------------------------\n");
//	printf("Anhui         139600.00   6461.00\n");
//	printf("Beijing        16410.54   1180.70\n");
//	printf("Chongqing      82400.00   3144.23\n");
//	printf("Shanghai        6340.50   1360.26\n");
//	printf("Zhejiang      101800.00   4894.00\n");
//	printf("------------------------------------\n");
//	return 0;
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int i = 0, j = 0,count=0;
//	for (i = 1; i < 100; i++)
//	{
//		for (j = 1; j <= 100; j++)
//		{
//			if (i * i + j * j == N&&i<=j)
//			{
//				printf("%d %d\n", i, j);
//				count++;
//			}
//			/*else
//			{
//				printf("No Solution\n");
//				break;
//			}*/
//		}
//	}
//	if(count==0)
//		printf("No Solution\n");
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i <4; i++)
//	{
//		for (j = 0; j <i ; j++)
//		{
//			printf(" ");	
//		}
//		for (j = 0; j < 4-i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i=0, j=0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 4; j > i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int s = 0;
//	for (i = 0; i <= n; i++)
//	{
//		s=pow(3, i);
//		printf("pow(3,%d)=%d\n",i, s);
//	}
//	return 0;
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d,", &m, &n);
//	int i = 1;
//	double sum;
//	double add1 = 1,add2=1,add3=1;
//	for (i = 1; i <= m; i++)
//	{
//		add1 *= i;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		add2 *= i;
//	}
//	for (i = 1; i <= (n - m); i++)
//	{
//		add3 *= i;;
//	}
//	sum =  add2/ (add1 * add3);
//	printf("result = %.0f", sum);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int Sum = 0;
//	float Average = 0.0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//		Sum = Sum + arr[i];
//	}
//	Average = 1.0*Sum / 4;
//	printf("Sum = %d;Average = %.1f\n", Sum, Average);
//	return 0.;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int  flag=1;
//	double add = 0.0, j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		add += flag * i / j * 1.0;
//			flag = -flag;
//			j += 2;
//	}
//	printf("%.3lf", add);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += sqrt(i);
//	}
//	printf("sum = %.2lf", sum);
//	return 0;
//}
//int main()
//{
//	int n,i = 0;
//	int arr[1000] = { 0 };
//	int count = 0;
//	double average = 0.0;
//	int sum = 0;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] >= 60)
//			{
//				count++;
//			}
//			sum += arr[i];
//		}
//		average = 1.0 * sum / n;
//		printf("average = %.1lf\ncount = %d", average, count);
//	}
//	if (n <= 0)
//	{
//		printf("average = 0\ncount = 0");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n, i = 0 ;
//	int sum1 = 0;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)
//	{
//		int sum = 1;
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		sum1+= sum;
//	}
//	printf("%d", sum1);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 0)
//		printf("sign(%d) = 1\n",n);
//	else if (n < 0)
//		printf("sign(%d) = -1\n", n);
//	else
//		printf("sign(%d) = 0\n", n);
//	return 0;
//}
int main()      //´òÓ¡ÁâÐÎ
{
	int n;
	scanf("%d", &n);
	int i = 0, j = 0;
	for (i = 1; i <=(n / 2)+1; i++)
	{
		for (j =1; j <=(n/2+1)-i ; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= 2*i-1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= n - 2 * i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

