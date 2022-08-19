#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 
#define ROW 3
#define COL 3

//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);

//玩家行动
void player_move(char board[ROW][COL], int row, int col);

//电脑行动
void com_move(char board[ROW][COL], int row, int col); 

//检验是否胜利
char check(char board[ROW][COL], int row, int col);


