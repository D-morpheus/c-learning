#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("********     1.play     *********\n");
	printf("********     0.exit     *********\n");
	printf("*********************************\n");
	printf("*********************************\n");
}


void game()
{
	char board[ROW][COL];
	char ret = 0;

	//��ʼ������
	initboard(board, ROW, COL);

	// ��ӡ����
		displayboard(board, ROW, COL);

	while (1)
	{
		//����ж�
		player_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = check(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		

		//�����ж�
		com_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		char ret = check(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}


	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	return 0;
}















int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		
	} while (input);



	return 0;
}