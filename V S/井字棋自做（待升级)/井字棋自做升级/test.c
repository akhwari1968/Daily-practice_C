#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void jgame()
{
	char arr[ROW][COL] = { 0 };

	chuarr(arr, ROW, COL);//�����ʼ��

	display(arr, ROW, COL);//��ӡ��ʼ״̬����

	char ret = ' ';
	while (1)
	{
		playergame(arr, ROW, COL);//�������
		ret = iswin(arr, ROW, COL);//�ж���Ӯ
		if (ret != 'G')
		{
			break;
		}
		display(arr, ROW, COL);//��ӡ���Ӻ�����

		computergame(arr, ROW, COL);//��������
		ret = iswin(arr, ROW, COL);//�ж���Ӯ
		if (ret != 'G')
		{
			break;
		}
		display(arr, ROW, COL);//��ӡ���Ӻ�����
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
		display(arr, ROW, COL);//��ӡ���Ӻ�����
	}
	if (ret == '#')
	{
		printf("����Ӯ��\n");
		display(arr, ROW, COL);//��ӡ���Ӻ�����
	}
	if (ret == '!')
	{
		printf("ƽ��\n");
		display(arr, ROW, COL);//��ӡ���Ӻ�����
	}
}

void menu()
{
	printf("***********************\n");
	printf("**** 1.play 0.exit ****\n");
	printf("***********************\n");
}

int main()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			jgame();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);

	return 0;
}