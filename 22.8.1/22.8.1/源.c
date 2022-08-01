//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//
////int main()
//{
//	int i = 0;
//	int d = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 0;
//		for (d = 2; d < i; d++)
//		{
//			if (0 == i % d)
//			{
//				flag++;
//				break;
//			}
//
//			
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int d = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 0;
//		for (d = 2; d < i; d++)
//		{
//			if (0 == i % d)
//			{
//				break;
//			}
//
//			
//		}
//		if (i == d)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int d = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1;
//		
//		for (d = 2; d <= sqrt(i); d++)
//		{
//			if (i % d == 0)
//			{
//				flag--;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 120");
//again :
//	printf ("电脑将在120s后关机，输入“我是猪”取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//
//	}
//
//	return 0;
//}