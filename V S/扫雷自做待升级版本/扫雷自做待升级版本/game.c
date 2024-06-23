#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROWS][COLS], int rows, int cols, char set)//��ʼ������
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

void displayboard(char board[ROWS][COLS], int row, int col)//��ӡ����
{
	int i = 0;
	int j = 0;
	printf("--------ɨ��--------\n");
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
	printf("--------ɨ��--------\n");

}

void setmine(char board[ROWS][COLS], int row, int col)//����
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

void finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//����
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("���������꣺");
		scanf_s("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�������Ų飬����������\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("����\n");
					displayboard(mine, ROW, COL);//��ӡ����
					break;
				}
				else
				{
					win++;
					int count = get_mine_count(mine, x, y);//����������Χ�׵ĸ���
					show[x][y] = count + '0';//���ַ����������ת��
					displayboard(show, ROW, COL);//��ӡ����
				}
			}
		}
		else
		{
			printf("����Ƿ� ����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�� ���׳ɹ�\n");
		displayboard(mine, ROW, COL);//��ӡ����
	}
}

