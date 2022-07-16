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
//		printf("你觉得这是C语言最好的视频吗？(1/0)\n");
//		scanf("%d", &input);
//		if (1 == input)
//		{
//			printf("兄弟你很有前途，以后必是it中的大牛\n");
//			break;
//		}
//		else
//		{
//			printf("你再想想，问问自己的良心？");
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
//	printf("你要好好读书吗？(1/0):\n");
//
//	scanf("%d", &input);
//	
//
//
//	if (input == 1)
//		printf("\n你会考上好学校，迎娶白富美，走上人生巅峰\n");
//	else
//		printf("\n你可能会卖红薯\n");
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
//		printf("写代码;%d\n",line );
//		line++;
//	}
//
//	if (line == 30000)
//	{
//		printf("成为大牛\n");
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