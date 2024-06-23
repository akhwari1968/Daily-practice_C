#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("**** 1.play 0.exit ****\n");
	printf("***********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//后台数组
	char show[ROWS][COLS] = { 0 };//展示数组

	initboard(mine, ROWS, COLS, '0');//初始化数组元素均为'0'
	initboard(show, ROWS, COLS, '*');//初始化数组元素均为'*'
	
	setmine(mine,ROW,COL);//放雷
	displayboard(show, ROW, COL);//打印棋盘
	//displayboard(mine, ROW, COL);//打印棋盘

	finemine(mine,show,ROW,COL);//找雷
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("选择错误 请重新选择");
			break;
		}
	} while (input);

	return 0;
}