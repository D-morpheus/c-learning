#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows; j++)
		{
			board[i][j] = set;
		}

	}

}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷游戏-------\n");
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
	printf("--------扫雷游戏-------\n");

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

static int my_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int ret = 0;
	int i = 0;
	int j = 0;
	for (i = -1; i <= 1; i++)
	{
		
		for (j = -1; j <= 1; j++)
		{
			ret = ret + mine[x + i][y + j];
		}
		
	}
	return ret - 9 * '0';

}





void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = my_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法， 请重新输入\n");
		}
	}
	
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
		DisplayBoard(mine, ROW, COL);

	}
}

