#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int flag = 1;
	for (i = 9; flag; i += 2)//��9��ʼ��ÿ�μӶ�
	{
		int j = 0;
		for (j = 2; j <= 10; j++)//����2-10
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
		n = i;//��Ŵ�
	}
	printf("%d", n);
	return 0;
}