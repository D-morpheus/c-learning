#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	/*printf("%d", sizeof(short));
	printf("%d", sizeof(long));
	printf("%d", sizeof(double));
	printf("%d", sizeof(char));*/



	/*int a = 2;
	short s = 5;
	printf("%d\n", sizeof(s = a + 2));
	printf("%d\n", s);*/


	//int i = 0;
	//printf("%d\n", ~i);

	int i = 5;//00000101             11111010
			  //11111011
	printf("%d\n", ~(~i | (1 << 2)));
	printf("%d\n", i & ~(1 << 2));
	printf("%d\n", 1 << 2);//00000100
						   //11111011
						   //00000101

	return 0;
}