#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//			continue;
//		}
//
//		else if (i % 100 == 0)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		count++;
//		
//	}
//	printf("count = %d", count);
//	return 0;
//
//}



//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}


int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int a = 0;

			for (j = 2; j <= i - 1; j++)
			{
				if (i % j == 0)
				{
					a++;
					break;
				}


			}
		if (i == j)
		{
			printf("%d ", i);
		}

	}


	return 0;
}