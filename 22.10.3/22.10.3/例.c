#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
    long x;
    long m = 0;

    scanf("%ld", &x);

    if (x % 10 == 0)
    {
        int t = 0;
        while (x % 10 == 0)
        {
            x = x / 10;
            t++;
        }
        while (x > 0)
        {
            m = m * 10 + x % 10;
            x = x / 10;
        }
        while (m > 0)
        {
            printf("%d ", m % 10);
            m = m / 10;
        }
        while (t > 1)
        {
            printf("0 ");
            t--;
        }
        printf("0\n");
    }
    else
    {
        while (x > 0)
        {
            m = m * 10 + x % 10;
            x = x / 10;
        }
        while (m > 9)
        {
            printf("%d ", m % 10);
            m = m / 10;
        }
        printf("%d\n", m);
    }
    return 0;
}