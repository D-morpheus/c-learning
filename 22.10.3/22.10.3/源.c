//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<math.h>
//
//
//
//
//
//int main()
//{
//    long long input = 0;
//    long long i = 0;
//    int flag = 0;
//    scanf("%lld", &input);
//    long long ret = input;
//    for (i = 0; ret % 10 != 0; flag++)
//    {
//        ret /= 10;
//       
//    }
//   
//    for (i = flag; i > 0; i--)
//    {
//        ret = input / pow(10, i - 1);
//        double hh = pow(10, i - 1);
//        printf("%lld", ret);
//        if (input >= 10)
//        {
//            printf(" ");
//        }
//        else
//        {
//            printf("\n");
//        }
//        input %= (int)hh;
//        
//
//    }
//
//  
//
//
//    return 0;
//
//}
//
//
//int main()
//{
//    long x = 0;
//    long m = 0;
//    scand("%d", &x);
//    if (x % 10 != 0)
//    {
//        if (x > 0)
//        {
//            m = m * 10 + x % 10;
//            x /= 10;
//        }
//        if (m > 9)
//        {
//            printf("%d ", m % 10);
//            m = m / 10;
//        }
//    }
//
//
//    return 0;
//}
//
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
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
//        if (m > 9)
//        {
//            printf("%d ", m % 10);
//            m = m / 10;
//        }
//        printf("%d", m);
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
