#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
////int    fun(int x)
////{
////    int y = 0;
////    if (x < 1)
////    {
////        y = x;
////    }
////    if (1 <= x && x <= 10)
////    {
////        y = 2 * x - 1;
////    }
////    if (10 < x && x <= 100)
////    {
////        y = 3 * x - 11;
////    }
////    if (x > 100)
////    {
////        y = x * x - 24;
////    }
////    return y;
////}
////
////int main()
////{
////    int    x;
////
////    scanf("%d", &x);
////    printf("The result is:y=%d\n", fun(x));
////
////    return 0;
////}
////
/////* 请在这里填写答案 */
//
//
//
//int main()
//{
//    int ch = 0;
//    int kong = 0;
//    int num = 0;
//    int other = 0;
//    char c;
//    while (c = getchar() != '\n')
//    {
//        if (c >= 'A' && c <= 'z')
//        {
//            ch++;
//        }
//        else if (c == ' ')
//        {
//            kong++;
//        }
//        else if (c >= '0' && c <= '9')
//        {
//            num++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//    printf("%d %d %d %d", ch, kong, num, other);
//    return 0;
//}

#include<stdio.h>

int main()
{
    int i = 0;
    long long n = 0;
    long long s = 0;
    long long sum1 = 0;
    long long sum2 = 0;

    scanf("%lld", &n);

    if (n <= 2)
    {
        printf("%lld", (long long)0);
    }
    else
    {
        for (i = 3; i <= n; i++)
        {
            for (i = 3; i <= n; i++)
            {
                s = (i - 2) * (i - 1) * i;
                sum1 = s + sum1;
            }
            sum2 = sum2 + sum1;
        }
        printf("%lld", sum2);

    }
    return 0;
}