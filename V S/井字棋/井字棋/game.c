#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROW][COL], int row, int col)//棋盘初始化
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void displayborad(char board[ROW][COL], int row, int col)//打印棋盘第一版本（笨办法）
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);//打印数据
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");//打印分隔符
//		}
//	}
//}

void displayborad(char board[ROW][COL], int row, int col)//打印棋盘第一版本
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//打印数据
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");可以将--- |为一次步骤打印
			for (j = 0; j < col; j++)
			{
				printf("---");//打印分隔符
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	printf("玩家下棋：\n");
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断非法性
		{
			if (board[x - 1][y - 1] == ' ')//判断是否占位
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，不能下棋，请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	
}

void computermove(char board[ROW][COL], int row, int col)//电脑下棋，随机下
{
	printf("电脑下棋\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//两数相除的余数永远不会大于或等于除数，从而得到0到row-1范围内的下标
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int isfull(char board[ROW][COL], int row, int col)//判断数组中是否还存在空格
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char iswin(char board[ROW][COL], int row, int col)//判断输赢(升级为动态判断)
{
	int i = 0;//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	int j = 0;//判断列
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}


	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')//判断主副对角线
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (isfull(board, row, col))//判断平局
	{
		return 'Q';
	}

	return 'c';
}

