#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1 
//int BinarySearch(int a[], int n, int key);
//
//int main()
//{
//    int    num[2000]; //这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
//    int        n, m, i;
//    int        key;
//
//    scanf("%d%d", &n, &m);
//    for (i = 0; i < n; i++)
//        scanf("%d", &num[i]);
//
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &key);
//        printf("%d", BinarySearch(num, n, key));
//        if (i != m - 1) printf(" ");
//        else printf("\n");
//    }
//    return 0;
//}
//
//
///* 请在这里填写答案 */
//int BinarySearch(int a[], int n, int key)
//{
//
//    int left = 0;
//    int right = n - 1;
//    int mid = (left + right) / 2;
//
//    while (right - left > 0)
//    {
//        if (key < a[mid])
//        {
//            right = mid + 1;
//        }
//        else if (key > a[mid])
//        {
//            left = mid - 1;
//        }
//        else if (key == a[mid])
//        {
//            return mid;
//        }
//        int mid = (left + right) / 2;
//
//    }
//
//    return -1;
//}
#include<stdio.h>

#define MAXN 20000

int RecurBinarySearch(int a[], int key, int left, int right);

int main()
{
    int        a[MAXN];//这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
    int        n, m, i, key;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", RecurBinarySearch(a, key, 0, n - 1));
        if (i != m - 1) printf(" ");
        else printf("\n");
    }

    return 0;
}

/* 请在这里填写答案 */


int RecurBinarySearch(int a[], int key, int left, int right)
{
    if (right >= left)
    {
        int mid = (left + right) / 2;
        if (key < a[mid])
        {
            return RecurBinarySearch(a, key, left, mid - 1);
        }
        else if (key > a[mid])
        {
            return RecurBinarySearch(a, key, mid + 1, right);
        }
        else if (key == a[mid])
        {
            return mid;
        }
    }
    else
    {
        return -1;
    }
}
