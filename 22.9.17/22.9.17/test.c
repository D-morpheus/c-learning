#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("********1.game*********\n");
	printf("********0.exit*********\n");
	printf("***********************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
		
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);




	return 0;
}