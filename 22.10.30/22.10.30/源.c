#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//
//	int a[] = { 1, 2, 3, 4, 5 };
//
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &a;
//	int* pend = a + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}
int my_strlen(char* str)
{
	int count = 0;


	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);

	return 0;
}