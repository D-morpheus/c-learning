#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�������ܣ����ֲ���
//�����������ֱ�Ϊ�����ҵ����飬���鳤�ȣ������ҵ�Ԫ��
//��������ֵ������ҵ����򷵻ظ�Ԫ���������е��±꣬���򷵻�-1 
//int BinarySearch(int a[], int n, int key);
//
//int main()
//{
//    int    num[2000]; //�������Ƚϴ��������ĵ������޷�������ô����ڴ棬���С����ԡ�
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
///* ����������д�� */
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
    int        a[MAXN];//�������Ƚϴ��������ĵ������޷�������ô����ڴ棬���С����ԡ�
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

/* ����������д�� */


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
