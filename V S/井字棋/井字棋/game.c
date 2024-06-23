#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROW][COL], int row, int col)//���̳�ʼ��
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

//void displayborad(char board[ROW][COL], int row, int col)//��ӡ���̵�һ�汾�����취��
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);//��ӡ����
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");//��ӡ�ָ���
//		}
//	}
//}

void displayborad(char board[ROW][COL], int row, int col)//��ӡ���̵�һ�汾
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//��ӡ����
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");���Խ�--- |Ϊһ�β����ӡ
			for (j = 0; j < col; j++)
			{
				printf("---");//��ӡ�ָ���
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	printf("������壺\n");
	while (1)
	{
		printf("����������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�жϷǷ���
		{
			if (board[x - 1][y - 1] == ' ')//�ж��Ƿ�ռλ
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã��������壬��ѡ������λ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	
}

void computermove(char board[ROW][COL], int row, int col)//�������壬�����
{
	printf("��������\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//���������������Զ������ڻ���ڳ������Ӷ��õ�0��row-1��Χ�ڵ��±�
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int isfull(char board[ROW][COL], int row, int col)//�ж��������Ƿ񻹴��ڿո�
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

char iswin(char board[ROW][COL], int row, int col)//�ж���Ӯ(����Ϊ��̬�ж�)
{
	int i = 0;//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}

	int j = 0;//�ж���
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}


	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')//�ж������Խ���
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (isfull(board, row, col))//�ж�ƽ��
	{
		return 'Q';
	}

	return 'c';
}

