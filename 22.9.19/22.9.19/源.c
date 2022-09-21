#define _CRT_SECURE_NO_WARNINGS 1as

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p %d", pa, *pa);
//
//
//	return 0;
//
//}
struct people
{
	char name[20];
	int age;
};

int main()
{
	struct people bomio = { "wujingwen", 18 };
	struct people* pb = &bomio;
	printf("%s", pb->name);
	
	return 0;

}