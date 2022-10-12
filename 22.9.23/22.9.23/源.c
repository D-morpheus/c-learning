#define _CRT_SECURE_NO_WARNINGS 1
//
#include<stdio.h>
//
////int main()
////{
////	int a[] = { 0 };
////	int b[] = { 0 };
////	int i = 0;
////
////	for (i = 0; 1; i++)
////	{
////		while (scanf("%d", &a[i]) != EOF);
////		break;
////	}
////
////	for (i = 0; 1; i++)
////	{
////		while (scanf("%d", &b[i]) != EOF);
////		break;
////	}
////
////	for (i = 0; 1; i++)
////	{
////		if(a[i] == i)
////	}
////		
////
////}
//
//
//#include<stdio.h>
//
//int fun(int x)
//{
//    int y = 0;
//    if (x < 1)
//    {
//        y = x;
//    }
//    if (1 <= x <= 10)
//    {
//        y = 2 * x - 1;
//    }
//    if (10 < x <= 100)
//    {
//        y = 3*x - 11;
//    }
//    if (x > 100)
//    {
//        y = x * x - 24;
//    }
//    return y;
//}
//
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    int y = fun(x);
//
//    printf("The result is:y=%d\n", fun(x));
//
//    return 0;
//}



int main()

{
    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    scanf("%lf %lf  %lf %lf", &a, &b, &c, &d);
    if ((b * c - d) != 0)
    {
        printf("%.1lf", a / (b * c - d));
    }
    else if ((b * c - d) == 0)
    {
        printf("error");
    }
    return 0;
}