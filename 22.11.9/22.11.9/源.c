#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stdio.h>

////选择排序（升序） 
////参数说明：数组，数组中已有元素个数 
//void selectSort(int data[], int elementCount);
//
////函数功能：找数组中的最小值元素，并返回其下标 
////参数说明：数组名，查找起始位置下标，查找终止位置下标
//int findMin(int data[], int startLoc, int endLoc);
//
////输出数组中所有元素 
////参数说明：数组，数组中已有元素个数 
//void outputData(int data[], int elementCount);
//
//int main()
//{
//    int        n, i, num[1010];
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &num[i]);
//    selectSort(num, n);
//    return 0;
//}
//
///* 请在这里填写答案 */
//
//
////选择排序（升序） 
////参数说明：数组，数组中已有元素个数 
//void selectSort(int data[], int elementCount)
//{
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < elementCount - 1; i++)
//    {
//        int j = findMin(data, i, elementCount - 1);
//        if (j != i)
//        {
//            tmp = data[i];
//            data[i] = data[j];
//            data[j] = tmp;
//        }
//        outputData(data, elementCount);
//    }
//}
//
////函数功能：找数组中的最小值元素，并返回其下标 
////参数说明：数组名，查找起始位置下标，查找终止位置下标
//int findMin(int data[], int startLoc, int endLoc)
//{
//    int i = 0;
//    int min = data[startLoc];
//    int j = startLoc;
//    for (i = startLoc; i <= endLoc; i++)
//    {
//        if (data[i] < min)
//        {
//            min = data[i];
//            j = i;
//        }
//    }
//    return j;
//}
//
////输出数组中所有元素 
////参数说明：数组，数组中已有元素个数 
//void outputData(int data[], int elementCount)
//{
//    int i = 0;
//    for (i = 0; i < elementCount; i++)
//    {
//        if (i != elementCount - 1)
//        {
//            printf("%d ", data[i]);
//        }
//        else
//        {
//            printf("%d\n", data[i]);
//        }
//    }
//}


#include<stdio.h>

//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1 
int BinarySearch(int a[], int n, int key);

int main()
{
    int    num[200]; //这个数组比较大，如果在你的电脑中无法分配这么大的内存，请改小后测试。
    int        n, m, i;
    int        key;

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", BinarySearch(num, n, key));
        if (i != m - 1) printf(" ");
        else printf("\n");
    }
    return 0;
}


/* 请在这里填写答案 */
int BinarySearch(int a[], int n, int key)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}
