#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//
//int getDigit(long long n);
//
//int main()
//{
//    long long     n;
//    int            len;
//
//    scanf("%lld", &n);
//    len = getDigit(n);
//    if (len > 1)
//        printf("The integer %lld has %d digits.\n", n, len);
//    else
//        printf("The integer %lld has %d digit.\n", n, 1);
//    return 0;
//}
//
///* 请在这里填写答案 */
//int getDigit(long long n)
//{
//    int i = 0;
//    while (n > 0)
//    {
//        n = n / 10;
//        i++;
//    }
//    return i;
//}

#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int i2 = 0;
    int j = 0;
    int sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &j);
        for (i2 = 1; i2 <= j; i2++)
        {
            scanf("%d", &j);
            sum = sum + j;
        }
        if (sum >= 400)
        {
            sum = sum - 160;
        }
        else if (sum < 400 && sum >= 300)
        {
            sum = sum - 110;
        }
        else if (sum >= 200 && sum < 300)
        {
            sum = sum - 70;
        }
        else if (sum >= 100 && sum < 200)
        {
            sum = sum - 30;
        }
        printf("%d", sum);

    }

    return 0;
}

