#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void chuarr(char arr[ROW][COL], int row, int col)//数组初始化
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void display(char arr[ROW][COL], int row, int col)//打印初始状态棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			
		}
		printf("\n");
	}
}

void playergame(char arr[ROW][COL], int row, int col)//玩家下棋
{
	int num1 = 0;
	int num2 = 0;
	while (1)
	{
		printf("玩家下棋:");
		scanf_s("%d %d", &num1, &num2);
		if (num1 <= row && num1 > 0 && num2 <= col && num2 > 0)
		{
			if (arr[num1 - 1][num2 - 1] == ' ')
			{
				arr[num1 - 1][num2 - 1] = '*';
				break;
			}
			else
			{
				printf("位置已落子，请重新选择：\n");
			}
		}
		else
		{
			printf("位置非法，请重新输入：\n");
		}
	}
}

void computergame(char arr[ROW][COL], int row, int col)//电脑下棋(待升级)
{
	printf("电脑下棋\n");
	while (1)
	{
		int num1 = rand() % row;
		int num2 = rand() % col;

		if (arr[num1][num2] == ' ')
		{
			arr[num1][num2] = '#';
			break;
		}
	}
}

char iswin(char arr[ROW][COL], int row, int col)//判断输赢(待升级)
{
	int i = 1;
	int j = 1;
	int true = 0;

	//for (i = 0; i < row; i++)//判断行
	//{
	//	for (j = 0; j < col - 1; j++)
	//	{
	//		if (arr[i][j] == arr[i][j + 1] && arr[i][j] != ' ')
	//		{
	//			true = 1;
	//		}
	//		else
	//		{
	//			true = 0;
	//		}
	//	}
	//	if (true == 1)
	//	{
	//		return arr[i][j];
	//		break;
	//	}
	//}


	for (i = 0; i < row; i++)//判断行
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}

	for (j = 0; j < col; j++)//判断列
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[1][j] != ' ')
		{
			return arr[1][j];
		}
	}
	
	//i = 1;
	//j = 1;
	//while (i < row)
	//{
	//	if (arr[0][0] == arr[i][j] && arr[i][j] != ' ')//判断主对角线
	//	{
	//		true = 1;
	//	}
	//	else
	//	{
	//		true = 0;
	//	}
	//	i++;
	//	j++;
	//}
	//if (true == 1)
	//{
	//	return arr[0][0];
	//}

	//i = 0;
	//j = col - 1;
	//while (j > 0)
	//{
	//	if (arr[i][j] == arr[i++][j--] && arr[i][j] != ' ')//判断副对角线
	//	{
	//		true = 1;
	//	}
	//	else
	//	{
	//		true = 0;
	//	}
	//	i++;
	//	j--;
	//}
	//if (true == 1)
	//{
	//	return arr[0][col - 1];
	//}

	//老版
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')//判断主对角线
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')//判断副对角线
	{
		return arr[1][1];
	}

	for (i = 0; i < row; i++)//判断是否继续
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 'G';
			}
		}
	}
	
	return '!';
}