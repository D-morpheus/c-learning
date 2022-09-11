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
	printf("------扫雷游戏------\n");
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
	printf("------扫雷游戏------\n");

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
	//1.输入坐标————检查合法性
	//2.排查
	//	1炸死了
	//	2没炸死————判断周围几个雷
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，炸死了\n");
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
			printf("坐标不合法，请重新输入\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
		DisplayBoard(mine, row, col);

	}


}

