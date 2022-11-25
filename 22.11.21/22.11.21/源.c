#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void swap(int a[100][100], int r1, int r2, int n)//交换两行元素
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = a[r1][i];
//		a[r1][i] = a[r2][i];
//		a[r2][i] = tmp;
//	}
//}
//int main()
//{
//	long long a[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	
//	float b[100] = { 0.0 };//存放每行平均值
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)//初始化数组
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%lld", &a[i][j]);
//			b[i] += a[i][j];
//		}
//		b[i] /= n;
//	}
//
//	//for (i = 0; i < n; i++)//打印数组
//	//{
//	//	for (j = 0; j < n; j++)
//	//	{
//	//		printf("%d", a[i][j]);
//	//	}
//	//}
//
//	for (i = 0; i < n; i++)
//	{
//		double min = 1000001.0;
//		int key = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (b[j] < min)
//			{
//				min = b[j];
//				key = j;
//			}
//		}
//		b[key] = 1000001;
//
//		int k = 0;
//		for(k = 0; k < n; k++)
//		{
//			if (k == n - 1)
//			{
//				printf("%lld\n", a[key][k]);
//			}
//			else
//			{
//				printf("%lld ", a[key][k]);
//			}
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int a[1000] = { 0 };
//    int b[1000] = { 0 };
//    int i, j, x, data;
//    int m = 0, n = 0;
//    int flag = 0;
//    do
//    {
//        scanf("%d", &data);
//        if (data != -1)
//        {
//            a[n] = data;
//            n++;
//        }
//    } while (data != -1);
//    do
//    {
//        scanf("%d", &data);
//        if (data != -1)
//        {
//            b[m] = data;
//            m++;
//        }
//    } while (data != -1);
//    if (m > n)
//        printf("ListB is not the sub sequence of ListA.");
//    else
//    {
//        for (i = 0; i < n - m + 1; i++)
//        {
//            if (b[0] == a[i])
//            {
//                x = i + 1;
//                //printf("%d",x);
//                for (j = 1, i = x; j <= m && a[i] == b[j]; j++, i++)
//                {
//                    if (j == m)
//                    {
//                        flag = 1;
//                        break;
//                    }
//                }
//            }
//        }
//        if (flag)
//            printf("ListB is the sub sequence of ListA.");
//        else
//            printf("ListB is not the sub sequence of ListA.");
//    }
//
//    return 0;
//}