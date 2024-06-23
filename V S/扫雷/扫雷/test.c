#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("******   1. play   ******\n");
	printf("******   0. exit   ******\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ���
	char show[ROWS][COLS] = { 0 };//����Ų����Ϣ

	initboard(mine, ROWS, COLS,'0');//��ʼ������mine����ʱȫΪ'0'
	initboard(show, ROWS, COLS,'*');//��ʼ������show����ʱȫΪ'*'

	setmine(mine, ROW, COL);//�����׵�mine
	displayboard(show, ROW, COL);//��ӡչʾ����
	//displayboard(mine, ROW, COL);//��ӡ��̨����

	findmine(mine, show, ROW, COL);//����
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}