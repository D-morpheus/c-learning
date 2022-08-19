#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}




void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		{
			for (j = 0; j < col; j++)
			{
				if (0 == j)
				{
					printf(" %c ", board[i][j]);
				}
				else
				{
					printf("| %c ", board[i][j]);

				}
			}
			printf("\n");
		}
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (0 == j)
				{
					printf("---");
					
				}
				else
				{
					printf("|---");
					

				}
			}
			printf("\n");
		}
		



	}
	
}



void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������������꣨�����Ͻ�Ϊԭ��   ������+�ո�+�����꣩��");
	scanf("%d %d", &x, &y);
	
	//�ж�����Ϸ���
again:
	if (1 <= x && x <= row && 1 <= y && y <= row)
	{
		if(board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
		}
		else
		{
			printf("�����ѱ�ռ�ã����������룺");
			scanf("%d %d", &x, &y);
			goto again;
		}
	}
	else
	{
		printf("����Ƿ�������������");
		scanf("%d %d", &x, &y);
		goto again;
	}

}

void com_move(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");
	while (1)
	{
		int x = rand() % COL;
		int y = rand() % ROW;
		if (board[y][x] == ' ')
		{
			board[y][x] = '#';
			break;
		}
	}

}

char check(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][2] && board[i][2] == board[i][0] && board[i][0] != ' ')
		{
			if (board[i][1] == '*');
			return '*';
			if (board[i][1] == '#');
			return '#';

		}

	}

	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			if (board[1][j] == '*');
			return '*';
			if (board[1][j] == '#');
			return '#';
		}

	}
	if (board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[0][0] != ' ')
	{
		if(board[1][1] == '*');
		return '*';
		if (board[1][1] == '#');
		return '#';
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		if (board[1][1] == '*');
		return '*';
		if (board[1][1] == '#');
		return '#';
	}

	int f = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				f = 1;
			}
		}

	}
	if (f == 0)
	{
		return 'q';
	}
	return 'c';
	

}