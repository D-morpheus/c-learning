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

	//初始化棋盘
	initboard(board, ROW, COL);

	// 打印棋盘
		displayboard(board, ROW, COL);

	while (1)
	{
		//玩家行动
		player_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = check(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		

		//电脑行动
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
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'q')
	{
		printf("平局\n");
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
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
		
	} while (input);



	return 0;
}