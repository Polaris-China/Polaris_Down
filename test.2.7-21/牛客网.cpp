#define _CRT_SECURE_NO_WARNINGS 1
#define M 10
#define N 10
#include<stdio.h>
//int main()
//{
//	int arr[M][N] = { 0 };
//	int i = 0, j = 0;
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int a, b;
//	scanf("%d%d", &a, &b);
//	/*for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == a - 1 && j == b - 1);
//			{
//				printf("%d", arr[i][j]);
//			}
//		}
//	}*/
//	printf("%d", arr[a - 1][b - 1]);
//	return 0;
//}
//int main()
//{
//	int m = 0, n = 0;
//	int arr[M][N] = { 0 };
//	int k = 0;
//	int a=0, b=0;
//	char ch=0;
//	scanf("%d%d", &n, &m);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		scanf(" %c %d %d", &ch, &a, &b);
//		if (ch == 'r')
//		{
//			for (j = 0; j < m; j++)
//			{
//				int swp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = swp;
//			}
//		}
//		else if (ch == 'c')
//		{
//			for (j = 0; j < n; j++)
//			{
//				int swp = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = swp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0;
//	int arr[30][30] = { 0 };
//	int m = 0;
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	char arr[3][3] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j< 3; j++)
		{
			scanf("%c", &arr[i][j]);
			getchar();
		}
	}
	char ch = 'd';
	for (i = 0; i < 3; i++)
	{
		if (arr[i][0]==arr[i][1] && arr[i][1] == arr[i][2])
		{
			ch = arr[i][0];
			break;
		}
		if (arr[0][i]==arr[1][i] && arr[1][i] == arr[2][i])
		{
			ch = arr[0][i];
			break;
		}
	}
	if (arr[0][0] ==arr[1][1]&&arr[1][1] == arr[2][2])
	{
		ch = arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		ch = arr[0][2];
	}
	if (ch == 'K')
	{
		printf("KiKi wins!\n");
	}
	else if (ch == 'B')
	{
		printf("BoBo wins!\n");
	}
	else 
	{
		printf("No winner!\n");
	}
	return 0;
}