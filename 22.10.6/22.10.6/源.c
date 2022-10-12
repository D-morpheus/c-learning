#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//    long x = 0;
//    long m = 0;
//    scanf("%d", &x);
//    if (x % 10 == 0)
//    {
//        int t = 0;
//        for (t = 0; x % 10 == 0; t++)
//        {
//            x /= 10;
//        }
//        while (x > 0)
//        {
//            m = m * 10 + x % 10;
//            x /= 10;
//        }
//        while (m > 9)
//        {
//            printf("%d ", m % 10);
//            m = m / 10;
//        }
//        printf("%d ", m);
//        for (1; t > 0; t--)
//        {
//            printf("0 ");
//        }
//    }
//    if (x % 10 != 0)
//    {
//        while (x > 0)
//        {
//            m = m * 10 + x % 10;
//            x /= 10;
//        }
//        while (m > 9)
//        {
//            printf("%d ", m % 10);
//            m = m / 10;
//        }
//        printf("%d", m);
//    }
//
//
//    return 0;
//}


#include<stdio.h>

int main()
{
    int x, y, i;
    scanf("%d %d", &x, &y);
    int ret = x;
    if (x != 0 && y > 0)
    {
        for (i = 2; i <= y; i++)
        {
            ret = ret * x;
        }
    }
    if (y == 0)
    {
        printf("%d", 1);
    }
    if (x == 0)
    {
        printf("%d", 0);
    }

    printf("%d", ret);
    return 0;
}


