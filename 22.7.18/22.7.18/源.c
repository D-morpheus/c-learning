#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char ch[10] = "hello bit";
//	printf(" % s\n", ch);
//
//	return 0;
//}
//int a = 0;
//int b = 0;
//int c = 0;

//
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////int test()
////{
////	
////
////	 c=a > b ? a : b;
////}
//
//int main()
//{
//	
//	scanf("%d%d", &a, &b);
//
//	int m=max(a,b);
//
//	printf("%d\n",m );
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c =( a % 7);
//	
//	printf("�����ǣ�%d\n", c);
//	if (c = 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


//int main()
//{
//	int c = 5 % 3;
//	printf("%d", c);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 7 == 0)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}



//int main()
//{
//	int age = 0;
//		scanf("%d", &age);
//		if (age < 18)
//			printf("δ����\n");
//		else if(age<26)
//			printf("����\n");
//		else if(age<40)
//			printf("׳��\n");
//
//	return 0;
//}




//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//		if (b == 9)
//			printf("yes\n");
//		else
//			printf("no\n");
//	else
//		printf("ok");
//	return 0;
//}

//
//
//int main()
//{
//	int a = 0;
//	while (100 >= a)
//	{
//		if (1 == a % 2)
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1  :
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)
//	{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//			printf("����\n");
//			break;
//		default :
//			printf("����\n");
//			break;
//
//
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}



int main()
{
	int ch = 0;
	ch = getchar();
	while (ch !=EOF)
		putchar(ch);
	
	return 0;
}