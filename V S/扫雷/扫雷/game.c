#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)//初始化数组mine无雷时全为'0'，数组show为'*'
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏-----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
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
	printf("-----扫雷游戏-----\n");
}

void setmine(char board[ROWS][COLS], int row, int col)//放置雷到mine
{
	int count = EASY_COUNT;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)//计算show周围雷显示数
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//排雷
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)//排雷成功的条件
	{
		printf("请输入要排查的坐标:");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断合法性  为什么输入非数字符号时会死循环
		{
			if (show[x][y] != '*')//判断是否重复输入
			{
				printf("坐标已排查，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')//是雷
				{
					printf("很遗憾，你被炸死了\n");
					displayboard(mine, ROW, COL);//打印棋盘
					break;
				}
				else//不是雷
				{
					win++;
					int count = get_mine_count(mine, x, y);//统计mine数组中，x，y坐标周围有几个雷
					show[x][y] = count + '0';//转换为数字字符
					displayboard(show, ROW, COL);//打印棋盘
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		displayboard(mine, ROW, COL);//打印棋盘
	}
}
//待升级
//1.雷点标记功能
//2.展开一片功能