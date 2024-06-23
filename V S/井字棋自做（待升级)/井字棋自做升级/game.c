#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void chuarr(char arr[ROW][COL], int row, int col)//�����ʼ��
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

void display(char arr[ROW][COL], int row, int col)//��ӡ��ʼ״̬����
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

void playergame(char arr[ROW][COL], int row, int col)//�������
{
	int num1 = 0;
	int num2 = 0;
	while (1)
	{
		printf("�������:");
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
				printf("λ�������ӣ�������ѡ��\n");
			}
		}
		else
		{
			printf("λ�÷Ƿ������������룺\n");
		}
	}
}

void computergame(char arr[ROW][COL], int row, int col)//��������(������)
{
	printf("��������\n");
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

char iswin(char arr[ROW][COL], int row, int col)//�ж���Ӯ(������)
{
	int i = 1;
	int j = 1;
	int true = 0;

	//for (i = 0; i < row; i++)//�ж���
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


	for (i = 0; i < row; i++)//�ж���
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}

	for (j = 0; j < col; j++)//�ж���
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
	//	if (arr[0][0] == arr[i][j] && arr[i][j] != ' ')//�ж����Խ���
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
	//	if (arr[i][j] == arr[i++][j--] && arr[i][j] != ' ')//�жϸ��Խ���
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

	//�ϰ�
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')//�ж����Խ���
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')//�жϸ��Խ���
	{
		return arr[1][1];
	}

	for (i = 0; i < row; i++)//�ж��Ƿ����
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