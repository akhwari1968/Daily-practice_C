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
	char mine[ROWS][COLS] = { 0 };//��̨����
	char show[ROWS][COLS] = { 0 };//չʾ����

	initboard(mine, ROWS, COLS, '0');//��ʼ������Ԫ�ؾ�Ϊ'0'
	initboard(show, ROWS, COLS, '*');//��ʼ������Ԫ�ؾ�Ϊ'*'
	
	setmine(mine,ROW,COL);//����
	displayboard(show, ROW, COL);//��ӡ����
	//displayboard(mine, ROW, COL);//��ӡ����

	finemine(mine,show,ROW,COL);//����
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("ѡ����� ������ѡ��");
			break;
		}
	} while (input);

	return 0;
}