#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("******   1. play   ******\n");
	printf("******   0. exit   ******\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷
	char show[ROWS][COLS] = { 0 };//存放排查的信息

	initboard(mine, ROWS, COLS,'0');//初始化数组mine无雷时全为'0'
	initboard(show, ROWS, COLS,'*');//初始化数组show无雷时全为'*'

	setmine(mine, ROW, COL);//放置雷到mine
	displayboard(show, ROW, COL);//打印展示棋盘
	//displayboard(mine, ROW, COL);//打印后台棋盘

	findmine(mine, show, ROW, COL);//排雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}