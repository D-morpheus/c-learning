#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int GCD(int a, int b)
//{
//    if (a % b == 0)
//    {
//        return b;
//    }
//    else
//    {
//        return GCD(b, a % b);
//    }
//}
//
//int main()
//{
//    while (1)
//    {
//        int a = 0;
//        int b = 0;
//        scanf("%d %d", &a, &b);
//        int m = GCD(a, b);//求最大公因数
//        int n = a * b / m;
//        printf("%d %d", m, n);
//    }
//    
//
//    return 0;
//}

//
//#include<stdio.h>
//
//int GCD(longlong a, longlong b)
//{
//    if (a % b == 0)
//    {
//        return b;
//    }
//    else
//    {
//        return GCD(b, a % b);
//    }
//}
//
//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    scanf("%lld %lld", &a, &b);
//    longlong m = GCD(a, b);//求最大公因数
//    longlong n = a * b / m;
//    printf("%lld %lld", m, n);
//
//    return 0;
//}

//#include<stdio.h>
//
//void printFactor(int, int);
//
//int main()
//{
//    int a, b, i;
//
//    scanf("%d%d", &a, &b);
//    for (i = a; i <= b; i++)
//        printFactor(i, 1);
//
//    return 0;
//}
//void printFactor(int c, int d)
//{
//    int i = 0;
//    int j = 0;
//
//    if (d == 1)
//    {
//        printf("%d=", c);
//        if (c == 1)
//        {
//            printf("%d", c);
//        }
//    }
//
//    if (c == 1)
//    {
//        printf("\n");
//        return;
//    }
//
//    for (i = 2; i <= c; i++)
//    {
//        if (c % i == 0)
//        {
//            if (d == 1)
//            {
//                printf("%d", i);
//                printFactor(c / i, 2);
//                return;
//            }
//            printf("*%d", i);
//            printFactor(c / i, 2);
//            return;
//            
//        }
//    }
//}

//#include<stdio.h>
//
//void bubbleSort(int a[], int n);
//
////输出数组中所有元素 
//void outputData(int data[], int elementCount);
//
//int main()
//{
//    int        n, i, num[10010];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &num[i]);
//    bubbleSort(num, n);
//    outputData(num, n);
//    return 0;
//}
//

/* 请在这里填写答案 */




//
//void bubbleSort(int a[], int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        int max = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (a[i] > a[j])
//            {
//                max = a[i];
//                a[i] = a[j];
//                a[j] = max;
//            } 
//        }
//    }
//}
//
//
//
//
//void outputData(int data[], int elementCount)
//{
//    int i = 0;
//    for (i = 0; i < elementCount; i++)
//    {
//        printf("%d ", data[i]);
//    }
//}



//void bubbleSort(int a[], int n)
//{
//    int i = 0;
//    for (i = 1; i < n; i++)
//    {
//        int j = 0;
//        int max = 0;
//        for (j = 0; j < n - i; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                max = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = max;
//            }
//        }
//    }
//
//}
//
//
//
//
//void outputData(int data[], int elementCount)
//{
//    int i = 0;
//    for (i = 0; i < elementCount - 1; i++)
//    {
//        printf("%d ", data[i]);
//    }
//    printf("%d\n", data[elementCount - 1]);
//}



#include<stdio.h>

#define        LEN        100

//调整函数 
void distribute(int* bullets, int size, int number);

int main()
{
    int        bullets[LEN];
    int        n, m, i;

    scanf("%d", &n);    //读入战士总数 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bullets[i]);//读入每个战士手中初始的子弹数 
    }
    scanf("%d", &m);//读入调整的次数（m>0) 
    distribute(bullets, n, m);//调整 
    for (i = 0; i < n - 1; i++)//输出调整后结果 
    {
        printf("%d ", bullets[i]);
    }
    printf("%d\n", bullets[i]);

    return 0;
}


/* 请在这里填写答案 */


void distribute(int* bullets, int size, int number)
{
    int i = 0;
    int copy[LEN];
    for (i = 0; i < number; i++)
    {
        int j = 0;
        for (j = 0; j < size; j++)
        {
            if (bullets[j] % 2 == 0)
            {
                copy[j] = bullets[j];
            }
            else
            {
                copy[j] = bullets[j] + 1;
            }

        }
        for (j = 0; j < size; j++)
        {
            bullets[j] = copy[j] / 2 + copy[(size + j - 1) % size] / 2;
        }
    }
}
