#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

/*#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	if(n==0||n==1)
	{
		printf("NULL\n");
		return 0;
	}
	int i = 0;
	int arr[1000] = { 0 };
	for (i = 0; i < n; i++)//初始化数组
	{
		scanf("%d", &arr[i]);
	}

	int m = 0;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		int j = 0;
		int k = 0;
		int flag = 0;

		scanf("%d", &k);
		for (j = 0; j < n; j++)
		{
			if (k == arr[j])
			{
				if (j == 0)
				{
					printf("%d\n", arr[j + 1]);
				}
				else if (j == n - 1)
				{
					printf("%d\n", arr[n - 2]);
				}
				else
				{
					printf("%d %d\n", arr[j - 1], arr[j + 1]);
				}
				flag++;
			}

		}
		if (flag == 0)
		{
			printf("NULL\n");
		}

	}

	return 0;
}*/



//#include<stdio.h>
//
//int main()
//{
//	int n, m, i, j;
//	scanf("%d", &n);
//	if (n == 0 || n == 1)
//	{
//		printf("NULL\n");
//	}
//	int a[1000];
//	int flag = 1;
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	int b[1000];
//	for (j = 0; j < m; j++)
//		scanf("%d", &b[j]);
//
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			flag = 1;
//			if (b[j] == a[i])
//			{
//			
//				if (i == 0)
//					printf("%d\n", a[1]);
//				else if (i == n - 1)
//					printf("%d\n", a[n - 2]);
//				else
//				{
//					printf("%d %d\n", a[i - 1], a[i + 1]);
//				}
//				flag = 0;
//				break;
//			}
//			
//		}
//		if (flag)
//			printf("NULL\n");
//	}
//
//	return 0;
//}

#include<stdio.h>

#include<stdio.h>

int main()
{
	int a[1000] = { 0 };
	int b[1000] = { 0 };

	int i = 0;//初始化数组
	int n = 0;
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] == -1)
		{
			break;
		}
	}
	int sz1 = i;
	i = 0;
	for (i = 0;; i++)
	{
		scanf("%d", &b[i]);
		if (b[i] == -1)
		{
			break;
		}
	}
	int sz2 = i;

	if (sz2 > sz1)
	{
		printf("ListB is not the sub sequence of ListA.");
	}

	else
	{
		int flag = 0;
		for (i = 0; i < sz1 - sz2 + 1; i++)
		{
			if (a[i] == b[0])
			{
				int j = 1;
				int k = i + 1;
				for (j = 1; j < sz2 && a[k] == b[j]; j++, k++);
				if (j == sz2)
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag)
		{
			printf("ListB is the sub sequence of ListA.");
		}
		else
		{
			printf("ListB is not the sub sequence of ListA.");
		}
	}

	return 0;
}

