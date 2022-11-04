#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		double a = 0;
//		scanf("%lf", &a);
//		sum += a;
//	}
//
//	printf("%.2lf", sum / n);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)//初始化数组
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int m = 0;
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		int k = 0;//查找的数字
//		int flag = 0;//确认是否有元素与k相等
//		scanf("%d", &k);
//		for (j = 0; j < n; j++)
//		{
//			if (k == arr[j])
//			{
//				if (j == 0)
//				{
//					printf("%d\n", arr[j + 1]);
//				}
//				else if (j == n - 1)
//				{
//					printf("%d\n", arr[n - 2]);
//				}
//				else
//				{
//					printf("%d %d\n", arr[j - 1], arr[j + 1]);
//				}
//				flag++;
//			}
//			
//		}
//		if (flag == 0)
//		{
//			printf("NULL\n");
//		}
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] % 2 == 0)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] % 2 != 0)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum += (arr1[i] * arr2[i]);
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//int main()
//{
//	//100 50 20 10 5 2 1
//	
//	int n = 0;
//	scanf("%d", &n);
//
//	int a[7] = 0;
//	int b[7] = { 100, 50, 20, 10, 5, 2, 1 };
//
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		a[i] = n / b[i];
//		n %= b[i];
//	}
//
//	for (i = 0; i < 7; i++)
//	{
//		if (a[i] != 0)
//		{
//			printf("%d:%d", b[i], a[i]);
//		}
//	}
//
//
//	return 0;
//}