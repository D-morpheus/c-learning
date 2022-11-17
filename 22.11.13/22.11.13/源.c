#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int a[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int max = 1;
//	int count = 1;
//	for (i = 0; i < n - 1; i++)
//	{
//		count = 1;
//		while (a[i] == a[i + 1])
//		{
//			count++;
//			i++;
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

void print(int b[100][100], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)//打印数组
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int r = 0;
	int c = 0;
	scanf("%d %d", &r, &c);

	int i = 0;
	int j = 0;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };

	for (i = 0; i < r; i++)//初始化数组a
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}


	for (i = 0; i < r; i++)//初始化数组b
	{
		for (j = 0; j < c; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	for (i = 0; i < c; i++)//打印数组
	{
		for (j = 0; j < r; j++)
		{
			if (j == r - 1)
			{
				printf("%d\n", b[i][j]);

			}
			printf("%d ", b[i][j]);

		}

	}


	return 0;
}