#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//
//	int b = (++a)+(++a);
//	printf("%d\n",b);
//	printf("%d\n",a);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 6;
//	int b = 0;
//	int c = (a || b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = a > b ? a : b;
//
//	printf("更大的值是：%d\n", max);
//
//
//	return 0;
//}


//typedef int i;
//int main()
//{
//	i a = 1;
//	i b = 2;
//	i c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//
//void test()
//{
//	static int a = 1;
//	
//	printf("%d ", a++);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


extern int add(int x, int y);
int main()
{
	int sum;
	int a = 1;
	int b = 2;
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}