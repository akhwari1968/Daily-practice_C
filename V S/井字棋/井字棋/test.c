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
	char ret = 0;
	char board[ROW][COL] = { 0 };
	
	initboard(board, ROW, COL);//初始化棋盘的函数
	displayborad(board,ROW,COL);//打印（输出）棋盘
	while (1)//下棋
	{
		playermove(board, ROW, COL);//玩家
		ret = iswin(board, ROW, COL);//检查输赢
		if (ret != 'c')//iswin函数输出任何非c（继续）情况则中断循环
		{
			break;
		}
		displayborad(board, ROW, COL);

		computermove(board, ROW, COL);//电脑(尝试升级电脑，堵玩家思路算法)
		ret = iswin(board, ROW, COL);//检查输赢
		if (ret != 'c')
		{
			break;
		}
		displayborad(board, ROW, COL);
	}

	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{ 
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	displayborad(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数生成起点
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);

	return 0;
}