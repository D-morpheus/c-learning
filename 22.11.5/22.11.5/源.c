#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int main()
//{
//	int x = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		m += 5;
//		m /= 3;
//	}
//	printf("%d", m);
//
//	return 0;
//}

//int main()
//{
//	long long n = 0;
//	int i = 1;
//	int flag = 0;
//	scanf("%d", &n);
//	for (i = 1; ; i++)
//	{
//		if (i % 2 != 0 && i % 5 != 0)
//		{
//			flag = 0;
//			long long x = i * n;
//			int count = 0;
//			while (x > 0)
//			{
//				if (x % 10 != 1)
//				{
//					flag = 0;
//					break;
//				}
//				x /= 10;
//				flag++;
//			}
//			if (flag != 0)
//			{
//				break;
//			}
//			
//		}
//		
//	}
//	printf("%d", flag);
//	return 0;
//}

int main()
{
	long long n = 0;
	int i = 1;
	int flag = 0;
	scanf("%d", &n);

	int x = 1;
	int ret = 0;
	int count = 0;
	while (1)
	{
		count++;
		if (x % n == 0)
		{
			break;
		}
		x = x * 10 + 1;
	}

	printf("%d", count);
	return 0;
}

//for (i = 1; i % n != 0; i = i * 10 + 1);


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int z = 0;
//	int c = 0;
//
//	int min = m < n ? m : n;
//
//
//
//	for (i = 1; i <= min; i++)//求正方形个数
//	{
//		z += (m - i + 1) * (n - i + 1);
//	}
//
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			c += (n - j + 1) * (m - i + 1);
//			
//		}
//	}
//	c -= z;
//
//
//
//	printf("%d %d", z, c);
//
//}




//int isAmicable(int number1, int number2);
//
//int main()
//{
//    int        t, num1, num2;
//
//    scanf("%d", &t);
//
//    while (t--)
//    {
//        scanf("%d%d", &num1, &num2);
//        if (isAmicable(num1, num2))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//
//    return 0;
//}
//
///* 请在这里填写答案 */
//int isAmicable(int number1, int number2)
//{
//    int i = 0;
//    int ret1 = 0;
//    int ret2 = 0;
//
//    for (i = 1; i <= number1 / 2; i++)
//    {
//        if (number1 % i == 0)
//        {
//            ret1 += i;
//        }
//    }
//    for (i = 1; i <= number2 / 2; i++)
//    {
//        if (number2 % i == 0)
//        {
//            ret2 += i;
//        }
//    }
//    if (ret2 == number1 && ret1 == number2)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}


//#include <stdio.h>
//
//long long recombination(long long num, int position);
//
//int main()
//{
//    long long    num;
//    int            position;
//
//    scanf("%lld%d", &num, &position);
//    printf("%lld\n", recombination(num, position));
//
//    return 0;
//}
//
///* 请在这里填写答案 */
//long long recombination(long long num, int position)
//{
//    long long flag = 0;
//    int key = 0;
//    long long ret = num;
//    while (num > 0)//flag为该数字位数
//    {
//        num /= 10;
//        flag++;
//    }
//    num = ret;
//
//    int count = flag - position;
//
//    int i = 0;
//    long long front = 0;
//    for (i = 0; i < count; i++)//求出要改变位置的数
//    {
//        ret /= 10;
//    } 
//    key = ret % 10;
//
//    long long a = (long long)pow(10, count + 1);
//    long long b = (long long)pow(10, count);
//    
//    long long last = num % b;
//    long long m = num % a;
//    long long last1 = last * 10 + key;
//    front = num - m;
//
//    return front + last1;
//
//}

//int main()
//{
//	printf("%d", (int)pow(10, 3));
//	return 0;
//
//}
