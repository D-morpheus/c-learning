#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	float a[6][5] = { 0 };
//
//	for (i = 0; i < n; i++)
//	{
//		int r = 0;
//		int c = 0;
//		float num = 0;
//		scanf("%d", &c);
//		scanf("%d", &r);
//		scanf("%f", &num);
//		a[r - 1][c - 1] += num;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			a[i][4] += a[i][j];
//		}
//	}
//	for (j = 0; j < 5; j++)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			a[5][j] += a[i][j];
//		}
//	}
//
//
//	for (i = 0; i < 6; i++)//打印数组
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if(j == 4)
//			{
//				printf("%.1f\n", a[i][j]);
//
//			}
//			else
//			{
//				printf("%.1f\t", a[i][j]);
//
//			}
//		}
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	int a[11][11] = { 0 };
//
//	scanf("%d%d", &m, &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= m; i++)//初始化数组
//	{
//		for (j = 1; j <= n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	//for (i = 1; i <= m; i++)//打印数组
//	//{
//	//	for (j = 1; j <= n; j++)
//	//	{
//	//		if (j == n)
//	//		{
//	//			printf("%d\n", a[i][j]);
//
//	//		}
//	//		else
//	//		{
//	//			printf("%d\t", a[i][j]);
//
//	//		}
//	//	}
//	//}
//	int x = 0;
//	int y = 0;
//
//	scanf("%d %d", &x, &y);
//
//	int sum = a[x - 1][y - 1] + a[x - 1][y] + a[x - 1][y + 1]
//		+ a[x][y - 1] + a[x][y + 1]
//		+ a[x + 1][y - 1] + a[x + 1][y] + a[x + 1][y + 1];
//
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//
//#define        MAXLEN        110
//
//int        isPrime(int n);//判断一个整数是否是质数，是则返回1，否则返回0 
//int        getResult(char word[]);
//
//int main()
//{
//    char    word[MAXLEN];
//    //int n = 0;
//    //scanf("%d", &n);
//    //printf("%d", isPrime(n));
//
//    scanf("%s", word);
//    printf("%d\n", getResult(word));
//
//    return 0;
//}
//
///* 请在这里填写答案 */
//int        isPrime(int n)
//{
//    if (n == 2)
//    {
//        return 1;
//    }
//    else
//    {
//        int i = 0;
//        for (i = 2; i <= n / 2; i++)
//        {
//            if (n % i == 0)
//            {
//                return 0;
//            }
//        }
//        return 1;
//    }
//
//}

//int        getResult(char word[])
//{
//    int a[27] = { 0 };
//    int i = 0;
//    for (i = 0; word[i] != '\0'; i++)
//    {
//        a[word[i] - 'a' + 1]++;
//    }
//
//    int max = a[1];
//    int min = 1;
//    for (i = 1; i <= 26; i++)
//    {
//        if (a[i] > max)
//        {
//            max = a[i];
//        }
//    }
//    min = max;
//    for (i = 1; i <= 26; i++)
//    {
//        if (a[i] < min && a[i] >= 1)
//        {
//            min = a[i];
//        }
//    }
//    if (isPrime(max - min))
//    {
//        return max - min;
//    }
//    else
//    {
//        return -1;
//    }
//}
