#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void menu()
{
	printf("*************************\n");
	printf("********1.玩游戏*********\n");
	printf("********0.退出***********\n");
	printf("*************************\n");
}


void game()
{
	int rd = rand() % 100 + 1;
	int guess = 0;
	
	while (1)

	{
		printf("请猜1-100数字：");
		scanf("%d", &guess);
		if (guess < rd)
		{
			printf("猜小了\n");
		}
		else if (guess > rd)
		{
			printf("猜大了\n");
		}
		else if (guess == rd)
		{
			printf("猜对了\n");
			break;
		}

	}

}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();

		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				printf("玩游戏\n");
				game();
				break;
			}
			case 0:
			{
				printf("退出游戏\n");
				break;
			}
			default:
			{
				printf("选择错误，重新选择\n");
				break;
			}
		}
	} while (input);
	return 0;
}