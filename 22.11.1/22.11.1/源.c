#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//double fz(double x, int n)
//{
//    int i = 0;
//    double ret = 1;
//
//    for (i = 1; i <= n; i++)
//    {
//        ret *= x;
//    }
//    return ret;
//
//
//}
//double fm(int n)
//{
//
//    int i = 0;
//    double ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//
//}
//
//
//int main()
//{
//    double x = 0;
//    scanf("%lf", &x);
//
//    int i = 0;
//    double ret = 0;
//
//    for (i = 1; ; i++)
//    {
//        double a = fz(x, i);
//        double b = fm(i);
// 
//        if (fabs(a / b) < 1e-8)
//        {
//            break;
//        }
//        else
//        {
//            ret += a / b;
//        }
//    }
//    printf("%.4lf", ret + 1);
//
//    return 0;
//}





//#include<stdio.h>
//
//int convert(int n);
//
//int main()
//{
//    int        n;
//
//    scanf("%d", &n);
//
//    printf("%d\n", convert(n));
//    return 0;
//}
//
///* 请在这里填写答案 */
//
//
//int convert(int n)
//{
//    if (n == 0 || n == 1)
//    {
//        return n;
//    }
//    else
//    {
//        return n % 10 + convert(n / 10) * 2;
//    }
//}


//int main()
//{
//	int i = 0;
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		a[i] = 0;
//		printf("hh\n");
//	}
//
//
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++);
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "*********";
//	char arr2[10] = "hello";
//
//	printf("%s\n", arr1);
//
//	
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//printf("%s\n", arr2);
//
//	return 0;
//
//}



//int main()
//{
//	int a[] = {1, 2, 3, 4, 5};
//	int* p = a;
//
//	printf("%d\n", a);
//	printf("%d\n", p);
//
//	return 0;
//}

//int my_strlen(const char* a)
//{
//	assert(a);
//	int count = 0;
//	while (*a++)
//	{
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char a[] = "123456789";
//	
//	printf("%d\n", my_strlen(a));
//	printf("%d\n", strlen(a));
//
//	return 0;
//}
//int hh(int n)
//{
//	int count = 0;
//	unsigned int a = n;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	
//	return count;
//}
//
//int hh(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int hh(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", hh(n));
//	return 0;
//
//}

//int main()
//{
//	int m = 1999;
//	int n = 2299;
//
//	int h = m ^ n;
//	int i = 0;
//	int count = 0;
//	for(i = 0; i < 32; i++)
//	{
//		if ((h >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//static int a = 1;
//
//int test()
//{
//	 int a = 3;
//	return a;
//}
//
//int main()
//{
//	test();
//	printf("%d", a);
//	return 0;
//
//}

char* reverse(char* left, char* right)
{
	
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	char* end = start;
//	while (*start)
//	{
//		
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (end == '\0')
//		{
//			start = end;
//		}
//		else
//		{
//			start = end + 1;
//			end++;
//		}
//		
//
//	}
//
//	printf("%s", arr);
//	return 0;
//}


int main()
{
	unsigned int i = 1;
	for (i = 1; i >= 0; i--)
	{
		printf("%u\n", i);
	}
	return 0;
}