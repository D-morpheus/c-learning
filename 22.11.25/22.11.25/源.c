#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int flag = 1;
	for (i = 9; flag; i += 2)//从9开始，每次加二
	{
		int j = 0;
		for (j = 2; j <= 10; j++)//测试2-10
		{
			if ((i + 1) % j == 0)
			{
				if (j == 10)
				{
					flag = 0;
				}
				continue;
			}
			else
			{
				break;
			}
		}
		n = i;//存放答案
	}
	printf("%d", n);
	return 0;
}