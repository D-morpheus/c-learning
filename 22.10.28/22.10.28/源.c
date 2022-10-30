#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char a = 5;
//	char b = 126;
//
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}

void print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void reverse(int a[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = 0;

		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}

}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int sz = sizeof(a) / sizeof(a[0]);
	print(a, sz);
	reverse(a, sz);
	print(a, sz);

	return 0;

}