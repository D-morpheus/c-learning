#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	printf("%d ", b);
//	printf("%d ", a);
//	return 0;
//}



int main()
{
	int a = 41;
	int b = 1;
	int i = 0;
	int count = 0;
	for (i = 1; i <= 31; i++)
	{
		if(a & b == 1)
		{
			count++;
		}
		a = a >> 1;

	}
	printf("%d", count);

	return 0;
}