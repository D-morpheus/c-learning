#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//插入排序（升序） 
//参数说明：数组，数组中已有元素个数 
//void InsertSort(int a[], int n);
//
//int main()
//{
//    int        n, i, num[1000];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &num[i]);
//    InsertSort(num, n);
//    return 0;
//}

/* 请在这里填写答案 */
//void print(int a[], int n)
//{
//    int j = 0;
//    for (j = 0; j < n - 1; j++)
//    {
//        printf("%d ", a[j]);
//    }
//    printf("%d\n", a[j]);
//}
//
//void InsertSort(int a[], int n)
//{
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i < n; i++)
//    {
//        tmp = a[i];
//        int j = 0;
//        for (j = i - 1; j >= 0 && a[j] > tmp; j--)
//        {
//            a[j + 1] = a[j];
//            a[j] = tmp;
//        }
//
//        print(a, n);
//       
//    }
//}
void shift(int* array, int num, int size)
{
    int a[size] = { 0 };
    int i = 0;
    for (i = 0; i < size; i++)
    {
        a[i] = array[(i + num) % size];
    }
    for (i = 0; i < size; i++)
    {
        array[i] = a[i];
    }
}