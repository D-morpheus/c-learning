#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stdio.h>

////ѡ���������� 
////����˵�������飬����������Ԫ�ظ��� 
//void selectSort(int data[], int elementCount);
//
////�������ܣ��������е���СֵԪ�أ����������±� 
////����˵������������������ʼλ���±꣬������ֹλ���±�
//int findMin(int data[], int startLoc, int endLoc);
//
////�������������Ԫ�� 
////����˵�������飬����������Ԫ�ظ��� 
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
///* ����������д�� */
//
//
////ѡ���������� 
////����˵�������飬����������Ԫ�ظ��� 
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
////�������ܣ��������е���СֵԪ�أ����������±� 
////����˵������������������ʼλ���±꣬������ֹλ���±�
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
////�������������Ԫ�� 
////����˵�������飬����������Ԫ�ظ��� 
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

//�������ܣ����ֲ���
//�����������ֱ�Ϊ�����ҵ����飬���鳤�ȣ������ҵ�Ԫ��
//��������ֵ������ҵ����򷵻ظ�Ԫ���������е��±꣬���򷵻�-1 
int BinarySearch(int a[], int n, int key);

int main()
{
    int    num[200]; //�������Ƚϴ��������ĵ������޷�������ô����ڴ棬���С����ԡ�
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


/* ����������д�� */
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
