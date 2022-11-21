#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int a[100][100] = { 0 };
	int flag = 1;

	scanf("%d %d", &m, &n);

	int i = 0;
	int j = 0;

	for (i = 0; i < m; i++)//初始化数组
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	int c = 0;
	int d = 0;
	for (i = 0; i < m; i++)
	{
		c = i;
		d = 0;
		int flag1 = 1;
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > a[c][d])
			{
				c = i;
				d = j;
			}
		}//a[c][d]是该行中最大的数


		int k = 0;
		for (k = 0; k < m; k++)
		{
			if (a[k][d] < a[c][d])
			{
				flag1 = 0;
				break;//该行无鞍点，进入下一行
			}
		}
		if (flag1)
		{
			flag = 0;
			printf("The saddle point is (%d,%d)=%d.", c, d, a[c][d]);
			break;
		}
	}
	if (flag)
	{
		printf("There is no saddle point in the matrix.");
	}

	return 0;
}
