#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 
#define ROW 3
#define COL 3

//��ʼ������
void initboard(char board[ROW][COL], int row, int col);

//��ӡ����
void displayboard(char board[ROW][COL], int row, int col);

//����ж�
void player_move(char board[ROW][COL], int row, int col);

//�����ж�
void com_move(char board[ROW][COL], int row, int col); 

//�����Ƿ�ʤ��
char check(char board[ROW][COL], int row, int col);


