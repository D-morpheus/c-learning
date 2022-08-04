#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//int math(int x)
//{
//	if (x == 1)
//	{
//		return 1;
//	}
//	if (x == 2)
//	{
//		return 2;
//	}
//	if (x >= 3)
//	{
//		return math(x - 1) + math(x - 2);
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", math(n));
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) 
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//
//}


//int main()
//{
//	double count = 0.0;
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		count = count + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		count = count - 1.0 / i;
//	}
//	printf("%lf\n", count);
//	return 0;
//}
//
//
//int main()
//{
//	int flag = 1;
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%fl\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 100, 7, 8, 9, 10 };
//	int max = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[max] < arr[i])
//		{
//			max = i;
//		}
//
//	}
//	printf("%d\n", arr[max]);
//
//	return 0;
//}


//
//
//void chengfa(int d)
//{
//	int i = 0;
//	for (i = 1; i <= d; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d * %-2d = %-3d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//
//}
//
//
//
//
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	chengfa(i);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for(j = 2; j <= sqrt(i); j++)
//		{ 
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//
//
//	return 0;
//}




//void print(int i)
//{
//	if (i / 10 != 0)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//
//
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//
//
//
//	return 0;
//}


//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//
//}
//
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	char tmp = *str;
//	*str = *(str + right);
//	*(str + right) = '\0';
//
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//
//	*(str + right) = tmp;
//
//
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int DigitSum(int x)
//{
//	int count = 0;
//	if (x > 9)
//	{
//		return (x % 10) + DigitSum(x / 10);
//	}
//	else
//	{
//		return x;
//	}
//	
//}
//
//
//
//
//int main()
//{
//	int i = 1739;
//	int sum = DigitSum(i);
//	printf("%d\n", sum);
//
//	return 0;
//}

//double cifang(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * cifang(n, k - 1);
//	}
//	else if(0 == k)
//	{
//		return 1.0;
//	}
//	else if (k < 0)
//	{
//		return 1.0 / (cifang(n, -k));
//	}
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf\n",cifang(n, k));
//	
//	return 0;
//}

//
//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = {'b', 'i', 't'};
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//
//	return 0;
//
//}



int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{

		printf("&arr[%d] = %p\n", i, &arr[i]);

	}

	return 0;
}