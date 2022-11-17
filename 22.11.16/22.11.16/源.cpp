#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
char map[23][51] = {
"**************************************************",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"*                                                *",
"**************************************************" };
struct plc //蛇本体，包括头 
{
	int x;
	int y;
};
struct plc snk[35] = {
	{10,25},//蛇头初始化
	{10,26},
	{10,27},
	{10,28}
};
int len = 4;//初始化长度                                         2
struct plc food = { 0,0 };//初始化食物的位置       方向标记   1          3
int isfood = 0;//判断是否有食物                                   4
int fx = 1;//
struct plc temp, temp1;

int live() {//判断死活 
	if (map[snk[0].x][snk[0].y] == '*') return 0;//是否触墙 
	int i;
	int f = 1;
	if (len > 1)
	{
		for (i = 1; i < len; i++)//是否自噬 
		{
			if (snk[0].x == snk[i].x && snk[0].y == snk[i].y)
			{
				f = 0; break;
			}
		}
	}
	return f;
}

int printgame()
{
	int i, j;
	if (map[snk[0].x][snk[0].y] == '*') return 0;
	for (i = 0; i < len; i++)//相应的位置画上蛇 
	{
		map[snk[i].x][snk[i].y] = 'O';
	}
	map[food.x][food.y] = '#';//相应的位置画上食物
	for (i = 0; i < 23; i++)
	{
		for (j = 0; j < 51; j++)
		{
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
	Sleep(25);
	return 1;
}

int produce()
{
	int i;
	if (isfood == 1) return 0;
	else
	{
		while (isfood == 0)
		{
			isfood = 1;
			srand((unsigned int)time(NULL));
			food.x = 1 + rand() % 21;
			food.y = 1 + rand() % 47;
			for (i = 0; i < len; i++)//判断生成位置是否与蛇重叠 
			{
				if (food.x == snk[i].x && food.y == snk[i].y)
				{
					isfood = 0;
					break;
				}
			}
		}
	}
}

void grow()
{
	snk[len] = temp;//新增 
	len = len + 1;
	isfood = 0;
}

int move()
{
	int i;
	char c;
	int fx1;
	if (kbhit())
	{
		c = getch();
		switch (c)
		{
		case('a'):fx1 = 1; break;
		case('w'):fx1 = 2; break;
		case('d'):fx1 = 3; break;
		case('s'):fx1 = 4; break;
		}
		if (abs(fx - fx1) != 2) fx = fx1;//无法回头 
	}
	switch (fx)
	{
	case(1):
		temp = snk[len - 1];
		for (i = len - 1; i > 0; i--)
		{
			snk[i] = snk[i - 1];
		}
		snk[0].y = snk[0].y - 1;
		break;
	case(2):
		temp = snk[len - 1];
		for (i = len - 1; i > 0; i--)
		{
			snk[i] = snk[i - 1];
		}
		snk[0].x = snk[0].x - 1;
		break;
	case(3):
		temp = snk[len - 1];
		for (i = len - 1; i > 0; i--)
		{
			snk[i] = snk[i - 1];
		}
		snk[0].y = snk[0].y + 1;
		break;
	case(4):
		temp = snk[len - 1];
		for (i = len - 1; i > 0; i--)
		{
			snk[i] = snk[i - 1];
		}
		snk[0].x = snk[0].x + 1;
		break;
	}
	if (snk[0].x == food.x && snk[0].y == food.y) grow();

}

int main()
{
	int t = 1, t1 = 1;
	int i, j;
	printf("使用AWDS进行左上右下的移动\n");
	printf("游戏即将开始..............");
	Sleep(3000);
	while (t1 == 1 && t == 1 && len < 35) {
		t = live();
		move();//包括了移动和成长
		produce();//再次生成食物
		t1 = printgame(); //生成画面
		for (i = 1; i < 22; i++)//擦干净 ,重置地图 
		{
			for (j = 1; j < 49; j++)
			{
				map[i][j] = ' ';
			}
		}
		system("cls");//刷新屏幕动态化
	}
	Sleep(1000);
	if (len == 35) {
		printf("牛逼");
	}
	else {
		printf("你死了\n");
		printf("蛇的长度为：%d\n", len);
	}
	printf("还有五秒将自动退出");
	Sleep(5000);
	return 0;
}



