#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("hello\n");
//	return 0;
//}



//
//
//int main()
//{
//	char arr[] = "hello";
//
//
//	return 0;
//
//}

//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c' ,'\0'};
//
// 
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
// 
// 
//
//	printf("%d\n", len1);
//	printf('%d\n', len2);
//
//
//
//	return 0;
//}
//

//
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//
//







//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	while (1)
//	{
//		printf("���������C������õ���Ƶ��(1/0)\n");
//		scanf("%d", &input);
//		if (1 == input)
//		{
//			printf("�ֵ������ǰ;���Ժ����it�еĴ�ţ\n");
//			break;
//		}
//		else
//		{
//			printf("�������룬�����Լ������ģ�");
//		}
//	}
//	return 0;
//}


#include<stdio.h>

/*
int main()
{
	printf("%d\n",'\32');


	return 0;
}*/




//int main()
//{
//	int input = 0;
//
//	printf("��Ҫ�úö�����(1/0):\n");
//
//	scanf("%d", &input);
//	
//
//
//	if (input == 1)
//		printf("\n��ῼ�Ϻ�ѧУ��ӭȢ�׸��������������۷�\n");
//	else
//		printf("\n����ܻ�������\n");
//
//
//
//
//
//	return 0;
//}



//
//
//
//int main()
//{
//
//	int line = 0;
//	while (line<30000)
//	{
//		printf("д����;%d\n",line );
//		line++;
//	}
//
//	if (line == 30000)
//	{
//		printf("��Ϊ��ţ\n");
//	}
//
//	return 0;
//}

//
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum=ADD(a, b);
//
//	printf("%d", sum);
//
//
//	return 0;
//}




//int main()
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8 };
//	int i = 0;
//
//	while (i < 8)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//
//	return 0;
//}




//
//int main()
//{
//	float a = 9.0/2.0;
//	printf("%f", a);
//
//
//
//
//	return 0;
//}




int main()
{
	int arr[10] = { 0 };

	int sz = sizeof(arr) / sizeof(arr[1]);
	printf("%d\n", sz);
	return 0;
}