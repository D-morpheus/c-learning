#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//    int y = 0;
//    if (scanf("%d", &y) == 1)
//
//        setbuf(stdin, NULL);
//
//    while (1900 <= y && y <= 2500)
//    {
//        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//        {
//            printf("Yes");
//            break;
//        }
//
//
//        else
//        {
//            printf("No");
//            break;
//        }
//
//    }
//
//    return 0;
//}


//
//int main()
//
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    double d = 0;
//    scanf("%lf %lf  %lf %lf", &a, &b, &c, &d);
//    if ((b * c - d) == 0)
//    {
//        printf("error");
//    }
//    else
//    {
//        double ret = a / (b * c - d);
//            printf("%.1lf", ret);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = 3;
//    int d = 4;
//
//    scanf("%d %d %d %d", &a, &d, &c, &d);
//    int sum = a + b + c + d;
//
//    if (sum < 20)
//    {
//        printf("%d", sum + 10);
//    }
//
//    else if (sum >= 20 && sum < 30)
//    {
//        printf("%d", sum + 8);
//    }
//
//    else if (sum >= 30 && sum < 40)
//    {
//        printf("%d", sum + 5);
//    }
//
//    else if (sum >= 40)
//    {
//        printf("%d", sum);
//    }
//    return 0;
//}

#include<stdio.h>
#include<math.h>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double Area = 0;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        double S = (a + b + c) / 2;
        Area = sqrt(S * (S - a) * (S - b) * (S - c));
        printf("%.3lf", Area);
    }
    
   

    return 0;
}


