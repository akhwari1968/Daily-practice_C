#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)//初始化数组
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
	printf("--------扫雷--------\n");
	for (j = 1; j <= col; j++)
	{
		if (j == 1)
		{
			printf("   ");
		}
		printf("%d ", j);
	}
	printf("\n\n");
	for (i = 1; i <= row;i++)
	{
		printf("%d  ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	} 
	printf("--------扫雷--------\n");

}

void setmine(char board[ROWS][COLS], int row, int col)//放雷
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;

	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
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

void finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//找雷
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标：");
		scanf_s("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("坐标已排查，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("踩雷\n");
					displayboard(mine, ROW, COL);//打印棋盘
					break;
				}
				else
				{
					win++;
					int count = get_mine_count(mine, x, y);//计算坐标周围雷的个数
					show[x][y] = count + '0';//加字符零进行类型转换
					displayboard(show, ROW, COL);//打印棋盘
				}
			}
		}
		else
		{
			printf("坐标非法 请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你 排雷成功\n");
		displayboard(mine, ROW, COL);//打印棋盘
	}
}

