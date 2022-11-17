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
struct plc //�߱��壬����ͷ 
{
	int x;
	int y;
};
struct plc snk[35] = {
	{10,25},//��ͷ��ʼ��
	{10,26},
	{10,27},
	{10,28}
};
int len = 4;//��ʼ������                                         2
struct plc food = { 0,0 };//��ʼ��ʳ���λ��       ������   1          3
int isfood = 0;//�ж��Ƿ���ʳ��                                   4
int fx = 1;//
struct plc temp, temp1;

int live() {//�ж����� 
	if (map[snk[0].x][snk[0].y] == '*') return 0;//�Ƿ�ǽ 
	int i;
	int f = 1;
	if (len > 1)
	{
		for (i = 1; i < len; i++)//�Ƿ����� 
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
	for (i = 0; i < len; i++)//��Ӧ��λ�û����� 
	{
		map[snk[i].x][snk[i].y] = 'O';
	}
	map[food.x][food.y] = '#';//��Ӧ��λ�û���ʳ��
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
			for (i = 0; i < len; i++)//�ж�����λ���Ƿ������ص� 
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
	snk[len] = temp;//���� 
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
		if (abs(fx - fx1) != 2) fx = fx1;//�޷���ͷ 
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
	printf("ʹ��AWDS�����������µ��ƶ�\n");
	printf("��Ϸ������ʼ..............");
	Sleep(3000);
	while (t1 == 1 && t == 1 && len < 35) {
		t = live();
		move();//�������ƶ��ͳɳ�
		produce();//�ٴ�����ʳ��
		t1 = printgame(); //���ɻ���
		for (i = 1; i < 22; i++)//���ɾ� ,���õ�ͼ 
		{
			for (j = 1; j < 49; j++)
			{
				map[i][j] = ' ';
			}
		}
		system("cls");//ˢ����Ļ��̬��
	}
	Sleep(1000);
	if (len == 35) {
		printf("ţ��");
	}
	else {
		printf("������\n");
		printf("�ߵĳ���Ϊ��%d\n", len);
	}
	printf("�������뽫�Զ��˳�");
	Sleep(5000);
	return 0;
}



