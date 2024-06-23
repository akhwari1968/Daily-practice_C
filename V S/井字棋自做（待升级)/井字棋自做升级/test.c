#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void jgame()
{
	char arr[ROW][COL] = { 0 };

	chuarr(arr, ROW, COL);//数组初始化

	display(arr, ROW, COL);//打印初始状态棋盘

	char ret = ' ';
	while (1)
	{
		playergame(arr, ROW, COL);//玩家下棋
		ret = iswin(arr, ROW, COL);//判断输赢
		if (ret != 'G')
		{
			break;
		}
		display(arr, ROW, COL);//打印落子后棋盘

		computergame(arr, ROW, COL);//电脑下棋
		ret = iswin(arr, ROW, COL);//判断输赢
		if (ret != 'G')
		{
			break;
		}
		display(arr, ROW, COL);//打印落子后棋盘
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
		display(arr, ROW, COL);//打印落子后棋盘
	}
	if (ret == '#')
	{
		printf("电脑赢了\n");
		display(arr, ROW, COL);//打印落子后棋盘
	}
	if (ret == '!')
	{
		printf("平局\n");
		display(arr, ROW, COL);//打印落子后棋盘
	}
}

void menu()
{
	printf("***********************\n");
	printf("**** 1.play 0.exit ****\n");
	printf("***********************\n");
}

int main()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			jgame();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
		}
	} while (input);

	return 0;
}