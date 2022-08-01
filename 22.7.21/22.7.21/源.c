#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	int i = 0;
//	do 
//	{
//		if (5 == i)
//		{
//			break;
//		}
//
//		printf("%d ", i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int i = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a = i * a;
//	}
//	
//	printf("%d", a);
//	
//	return 0;
//
//}

//
//
//int main()
//{
//	int ret = 1;
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//
//	for(n = 1; n <= 3; n++)
//	{
//		
//		for ( ; i <= n; i++)
//		{
//			 ret = i * ret;
//		}
//
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//
//}


//
//
//int main()
//{
//	int ret = 1;
//	int i = 1;
//	int n = 0;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = n * ret;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，k是%d\n", mid + 1);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "hello world! I love you!!!!";
//	char arr2[] = "###########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//睡眠
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码(还可输入%d次）：", 3 - i);
//		scanf("%s", password);
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次输入错误密码，已启动报警程序");
//	}
//	return 0;
//}

//void exchange(int x, int y)
//{
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//
//	scanf("%d%d%d", &a, &b, &c);
//	exchange(&a, &b);
//	exchange(&a, &c);
//	exchange(&b, &c);
//		
//
//	printf("%d %d %d", a, b, c);
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//
//		}
//	
//	}
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;

	scanf("%d%d", &a, &b);
	int min = a < b ? a : b;
	for (; 1; min--)
	{
		if ((0 == a % min) && (0 == b % min))
		{
			printf("%d", min);
			break;
		}
	}
}