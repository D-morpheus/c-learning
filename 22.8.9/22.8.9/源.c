//#define _CRT_SECURE_NO_WARNINGS 
//
//#include<stdio.h>
//
//void sort(int arr[], int sz)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int x = 0;
//		for (x = 0; x < sz - 1 - i; x++)
//		{
//			if (arr[x] > arr[x + 1])
//			{
//				int tmp = arr[x];
//				arr[x] = arr[x + 1];
//				arr[x + 1] = tmp;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//
//
//
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	sort(arr, sz);
//	printf("%p\n", &arr);
//	return 0;
//
//}