#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


void menu()
{
	printf("*************************\n");
	printf("********1.����Ϸ*********\n");
	printf("********0.�˳�***********\n");
	printf("*************************\n");
}


void game()
{
	int rd = rand() % 100 + 1;
	int guess = 0;
	
	while (1)

	{
		printf("���1-100���֣�");
		scanf("%d", &guess);
		if (guess < rd)
		{
			printf("��С��\n");
		}
		else if (guess > rd)
		{
			printf("�´���\n");
		}
		else if (guess == rd)
		{
			printf("�¶���\n");
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
				printf("����Ϸ\n");
				game();
				break;
			}
			case 0:
			{
				printf("�˳���Ϸ\n");
				break;
			}
			default:
			{
				printf("ѡ���������ѡ��\n");
				break;
			}
		}
	} while (input);
	return 0;
}