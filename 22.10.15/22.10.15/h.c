#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main()
//{
//    char c;
//    c = getchar();
//    while(c != '\n')
//    {
//        if('a' <= c && c <= 'z')
//        {
//            printf("%c", (((c - 'a' + 3) % 26) + 'a'));
//        }
//         if('A' <= c && c <= 'Z')
//        {
//            printf("%c", (((c - 'A' + 3) % 26) + 'A'));
//        }
//        c = getchar();
//    }
//    c = getchar();
//    
//    return 0;
//}




//int main()
//{
//    int n = 0;
//    int i = 0;
//    int flag = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        int x = 0;
//        int count = 0;
//        scanf("%d", &x);
//        while (x != -1)//一个数字
//        {
//            int j = 0;
//            if (x == 2)
//            {
//                count++;
//            }
//            else if (x == 1)
//            {
//
//            }
//            else
//            {
//                for (j = 2; j <= sqrt(x); j++)//判断是否为质数
//                {
//                    if (x % j == 0)
//                    {
//                        flag++;
//                        break;
//                    }
//                }
//                if (flag == 0)//增加质数数
//                {
//                    count++;
//                }
//            }
//            flag = 0;
//            scanf("%d", &x);
//
//        }
//        printf("%d\n", count);
//        count = 0;
//
//    }
//    return 0;
//}



//#include<stdio.h>
//
//void chai(int n)
//{
//    if (n > 9)
//    {
//        chai(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    chai(n);
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    if (n % 10 == 0)
//    {
//        printf("The number cannot be changed.");
//    }
//    else
//    {
//        while (n > 9)
//        {
//            ret = ret * 10 + n % 10;
//            n = n / 10;
//        }
//        printf("%d", n);
//    }
//    printf("%d", ret);
//    return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	while (n > 9)
//	{
//		ret = ret * 10 + n % 10;
//		n /= 10;
//	}
//	
//	return 0;
//}


//int main()
//{
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	if (n % 10 == 0)
//	{
//		printf("The number cannot be changed.");
//	}
//	else
//	{
//		while (n > 9)
//		{
//			ret = ret * 10 + n % 10;
//			n /= 10;
//		}
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		int j = i;
//		while (j > 9)
//		{
//			sum = sum + (j % 10) * (j % 10);
//			j /= 10;
//		}
//		sum = sum + j * j;
//		if (sum == i / m)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (1 < n && n <= 10000)
//	{
//		int sq = n * n;
//		int i = 10;
//		while (n / i != 0)
//		{
//			i = i * 10;
//		}
//		if (sq % i == n)
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
//
//}