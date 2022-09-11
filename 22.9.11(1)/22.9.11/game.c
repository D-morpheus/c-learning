#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("------ɨ����Ϸ------\n");
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	
	while (count > 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

int my_mine_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1]
		+ board[x][y - 1]
		+ board[x + 1][y - 1]
		+ board[x - 1][y]
		+ board[x + 1][y]
		+ board[x - 1][y + 1]
		+ board[x][y + 1]
		+ board[x + 1][y + 1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�������ꡪ���������Ϸ���
	//2.�Ų�
	//	1ը����
	//	2ûը�����������ж���Χ������
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź���ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = my_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}

		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬��Ӯ��\n");
		DisplayBoard(mine, row, col);

	}


}

