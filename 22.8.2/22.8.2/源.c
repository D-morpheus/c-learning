#define _CRT_SECURE_NO_WARNINGS 1\


#include<string.h>
#include<time.h>
#include<stdio.h>

//int main()
//{
//	char arr1[] = "hello bit";
//	memset(arr1, "sbbbb", 5);
//	printf ("%s\n", arr1);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = (x > y) ? x : y;
//	return z;
//}
//
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d ", max);
//
//	return 0;
//}

void swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}



int main()
{
	int a = 1;
	int b = 2;
	printf("交换前: a = %d   b = %d \n", a, b);
	swap(&a, &b);
	printf("交换后: a = %d   b = %d \n", a, b);


	return 0;
}