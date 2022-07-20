#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char password[20] = { 0 };
//
//	printf("请输入密码：");
//
//	scanf("%s", password);
//	int tem = 0;
//	while ((tem = getchar()) != '\n');//清理缓冲区中多个字符
//
//	printf("请确认密码（Y/N）：");
//	int ch = getchar();
//	
//	
//	if ('Y'==ch)
//		printf("确认成功");
//	else
//		printf("确认失败");
//
//
//	return 0;
//}


//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '9' || ch <'0')
//			continue;
//			putchar(ch);
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hh\n");
//		}
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//	{
//		k++;
//		printf("hhe\n");
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//	     a = i * a;
//	}
//
//	printf("%d", a);
//	return 0;
//}
//



int main()
{
	printf("%d", sizeof(int));
	return 0;
}