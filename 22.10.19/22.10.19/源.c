#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	while (1);
//	return 0;
//}

//#include <stdio.h>
//
//int    evaluation(int n, int a);
//int main()
//{
//    int        n, a;
//
//    scanf("%d%d", &n, &a);
//    int x = evaluation(n, a);
//    printf("%d\n", x);
//
//    return 0;
//}
//
///* 请在这里填写答案 */
//
//int evaluation(int n, int a)
//{
//    if (n == -1)
//    {
//        return 1;
//    }
//    else
//    {
//        int i = 0;
//        int sum = 1;
//        for (i = 1; i <= n + 1; i++)
//        {
//            sum *= a;
//        }
//        int ret = sum + evaluation(n - 1, a);
//        return ret;
//    }
//}
//

//#include <stdio.h>
//
//void reverse(int n);
//
//int main()
//{
//    int     n;
//
//    scanf("%d", &n);
//    reverse(n);
//    printf("\n");
//    return 0;
//}
//
///* 请在这里填写答案 */
//void reverse(int n)
//{
//    if (n > 9)
//    {
//        printf("%d", n % 10);
//        reverse(n / 10);
//        
//    }
//    else
//    {
//        printf("%d", n);
//    }
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	
//	scanf("%d %d", &m, &n);
//	
//	for (x = 0; x <= m; x++)
//	{
//		for (y = 0; y <= m; y++)
//		{
//			for (z = 0; z <= m; z++)
//			{
//				if (x + y + z <= m)
//				{
//					if ((m - x - y - z) + x * 2 + y * 3 + z * 4 == n)
//					{
//						printf("%d %d %d\n", x, y, z);
//					}
//				}
//				
//			}
//		}
//	}
//	return 0;
//}

//int GCD(int a, int b)
//{
//    if (a % b == 0)
//    {
//        return b;
//    }
//    else
//    {
//        return GCD(b, a % b);
//    }
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//    int m = GCD(a, b);//最大公因数
//    int n = 0;
//    if (a > b)
//    {
//        int i = 1;
//        while (1)
//        {
//            if ((b * i) % a == 0)
//            {
//                n = i;
//                break;
//            }
//            i++;
//        }
//    }
//    if (b > a)
//    {
//        int i = 1;
//        while (1)
//        {
//            if ((a * i) % b == 0)
//            {
//                n = i;
//                break;
//            }
//            i++;
//        }
//    }
//    printf("%d %d", m, n);
//
//	return 0;
//}


#include<stdio.h>

int GCD(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return GCD(b, a % b);
    }
}

int main()
{
    int a = 0;
    int b = 0;
    while (1)
    {
        scanf("%d %d", &a, &b);
        int m = GCD(a, b);//最大公因数
        int n = a * b / m;
        printf("%d %d\n", m, n);
    }
  

    return 0;
}