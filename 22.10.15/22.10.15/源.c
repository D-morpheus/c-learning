#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%f %f %f", &a, &b, &c);
//    float sum = 138 * a + 208 * b + 158 * c;
//    if (a < 2 || b < 2 || c < 2 || sum < 5000)
//    {
//        printf("fail");
//    }
//    if (5000 <= sum && sum < 8000)
//    {
//        printf("%.1f", (sum - 5000) * 0.1);
//    }
//    if (8000 <= sum && sum < 10000)
//    {
//        printf("%.1f", (sum - 8000) * 0.15 + 300);
//    }
//    if (sum >= 10000)
//    {
//        printf("%.1f", (sum - 10000) * 0.2 + 600);
//    }
//    return 0;
//}



//int main()
//{
//    while (1)
//    {
//        int suma = 0;
//        int sumb = 0;
//
//        int a1 = 0;
//        int a2 = 0;
//        int a3 = 0;
//        int b1 = 0;
//        int b2 = 0;
//        int b3 = 0;
//
//        int reta = 0;
//        int retb = 0;
//
//
//        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
//        suma = a1 + a2 + a3;
//        sumb = b1 + b2 + b3;
//        if (a1 == a2 && a2 == a3 && b1 == b2 && b2 == b3)
//        {
//            if (a1 > b1)
//            {
//                printf("A");
//            }
//            if (a1 < b1)
//            {
//                printf("B");
//            }
//            if (a1 == b1)
//            {
//                printf("=");
//            }
//        }
//        else if (a1 == a2 && a2 == a3 && (b1 != b2 || b2 != b3 || b1 != b3))
//        {
//            printf("A");
//        }
//        else if (b1 == b2 && b2 == b3 && (a1 != a2 || a2 != a3 || a1 != a3))
//        {
//            printf("B");
//        }
//
//        else
//        {
//            if (suma > 10)
//            {
//                reta = suma - 10;
//            }
//            if (suma <= 10)
//            {
//                reta = 10 - suma + 1;
//            }
//            if (sumb > 10)
//            {
//                retb = sumb - 10;
//            }
//            if (sumb <= 10)
//            {
//                retb = 10 - sumb + 1;
//            }
//
//            if (reta > retb)
//            {
//                printf("A");
//            }
//            if (reta < retb)
//            {
//                printf("B");
//            }
//            if (reta == retb)
//            {
//                printf("=");
//            }
//        }
//    }
//    
//    
//
//    return 0;
//}

//int main()
//{
//	char c = 0;
//	int count = 0;
//	int flag = 1;
//	c = getchar();
//	while (c != '\n')
//	{
//
//		count = count + (c - '0') * flag;
//		flag++;
//		c = getchar();
//	}
//	printf("%d", count % 97);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int num = 0;
//	scanf("%d", &n);
//	int flag = 0;
//	while (n != 0)
//	{
//		
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &num);
//			if (num % 7 == 0)
//			{
//				flag++;
//			}
//			else if (num % 10 == 7)
//			{
//				flag++;
//			}
//		}
//		printf("%d\n", flag);
//		flag = 0;
//		scanf("%d", &n);
//
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int t = 0;
//	int c = 0;
//	int l = 0;
//	int n = 0;
//	scanf("%d", &t);
//	for(i = 0; i < t; i++ )
//	{
//		scanf("%d %d %d", &c, &l, &n);
//		int j = 0;
//		int d = 0;
//		for (d = 0; d < c; d++)
//		{
//			for (j = 0; j < (n + 1) * l + 1; j++)//打印首行
//			{
//				printf("*");
//			}
//			printf("\n");
//			int b = 0;
//			for (b = 0; b < 3; b++)
//			{
//				for (j = 0; j < l; j++)//打印一行
//				{
//					printf("*");
//					int a = 0;
//					for (a = 0; a < n; a++)
//					{
//						printf(".");
//					}
//
//				}
//				printf("*\n");
//			}
//		}
//		for (j = 0; j < (n + 1) * l + 1; j++)//打印末行
//		{
//			printf("*");
//		}
//		printf("\n");
//
//
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 <= n && n <= 10000)
//	{
//		int sq = n * n;
//		int i = 1;
//		int ret = n;
//		while (ret > 9)
//		{
//			ret /= 10;
//			i++;
//		}
//		int j = 0;
//		int sum = 1;
//		for (j = 1; j <= i; j++)//生成
//		{
//			sum *= 10;
//		}
//		if (sq % sum == n)
//		{
//			printf("Yes");
//		}
//		else
//		{
//			printf("No");
//		}
//	}
//	else
//	{
//		printf("%d out of range", n);
//	}
//
//	return 0;

