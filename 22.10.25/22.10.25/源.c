#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int change(int m)
//{
//    if (m >= 10)
//    {
//        return m % 10 + change(m / 10) * 2;
//    }
//    else if (m == 1)
//    {
//        return m;
//    }
//}
//
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    int n = change(m);
//    printf("%d", n);
//    return 0;
//
//}

double fz(double x, int n)
{
    int i = 0;
    double ret = 1;

    for (i = 1; i <= n; i++)
    {
        ret *= x;
    }
    return ret;


}
double fm(int n)
{

    int i = 0;
    double ret = 1;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;

}


int main()
{
    double x = 0;
    scanf("%lf", &x);

    int i = 0;
    double ret = 0;

    for (i = 1; ; i++)
    {
        double a = fz(x, i);
        double b = fm(i);
        if (fabs(a / b) < 1e-8)
        {
            break;
        }
        else
        {
            ret += a / b;
        }
    }
    printf("%.4lf", ret + 1);

    return 0;
}
