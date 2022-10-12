#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


int main()
{
    int a, b, c;
    double S;
    scanf("%d%d%d", &a, &b, &c);
    S = ((double)a + b + c) / 2;
    double A;
    A = sqrt(S * (S - a) * (S - b) * (S - c));
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("%.3lf", A);
    }
    else
        printf("The edges cannot make up of a triangle.");


    return 0;
}
