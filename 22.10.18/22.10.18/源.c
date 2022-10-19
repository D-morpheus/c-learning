#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int countBinary(int);

int main()
{
    int        n;

    scanf("%d", &n);
    printf("%d\n", countBinary(n));

    return 0;
}

/* 请在这里填写答案 */


//int countBinary(int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 2; i < n; i *= 2)
//    {
//        count++;
//    }
//    return count + 1;
//}

