#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//int check(int x)//判断是否为素数
//{
//	int q = 0;
//	
//	for (q = 2; q <= sqrt(x); q++)
//	{
//		if (x % q == 0)
//		{
//		
//			return 0;
//
//		}
//		
//	}
//		
//		return 1;
//
//
//}
//
//
//int main()
//{
//	int a = 0;
//again:
//	scanf("%d", &a);
//	check(a);//是素数返回1，不是素数返回0
//	if (check(a) == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	goto again;
//
//
//	return 0;
//}

//
//
//
//
//int is_leap_year(int x)//判断闰年
//{
//	return (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0));
//	
//}
//
//int main()
//{
//	int y = 0;
//
//	while (1) 
//	{
//		scanf("%d", &y);
//
//		is_leap_year(y);
//		if (1 == is_leap_year(y))
//		{
//			printf("是闰年\n");
//		}
//		else
//		{
//			printf("不是闰年\n");
//
//		}
//	}
//	return 0;
//}

//int search(int a[], int k, int s)
//{
//
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] == k)
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 11;
//	int sz = (sizeof arr / sizeof arr[0]);
//	int ret = search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//
//
//
//
//	return 0;
//}
//
//void add(int* pa)
//{
//	(* pa)++;
//
//}
//
//
//
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//
//	add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//
//
//
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%u", &i);
//	print(i);
//
//	return 0;
//}
//
//int my_strlen(char* pa)
//{
//	if ('\0' != *pa)
//	{
//		return 1 + my_strlen(++pa);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//
//int dob(int x)
//{
//
//	if (x > 0)
//	{
//		return x * dob(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", dob(n));
//	return 0;
//}


//int Fac(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int d = 2; d < x; d++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		scanf("%d", &i);
//		printf("%d\n", Fac(i));
//	}
//	return 0;
//}
//
//
//void move(char m1, char m2)
//{
//	printf("%c -> %c  ", m1, m2);
//}
//
//
//
////s1起始
////s2中转
////s3目标
//void hanoi(int n, char s1, char s2, char s3)
//{
//	if (1 == n)
//	{
//		move(s1, s3);
//	}
//	else
//	{
//		hanoi(n - 1, s1, s3, s2);
//		move(s1, s3);
//		hanoi(n - 1, s2, s1, s3);
//	}
//}
//
//
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//
//}