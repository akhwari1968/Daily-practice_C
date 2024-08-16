#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "contact.h"

void menu()
{
	printf("*********************************\n");
	printf("*****  1. add    2. del    ******\n");
	printf("*****  3. search 4. modify  *****\n");
	printf("*****  5. show   6. sort   ******\n");
	printf("*****  0. exit             ******\n");
	printf("*********************************\n");

}

int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			addcontact(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			searchcontact(&con);
			break;
		case 4:
			modifycontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			sortcontact(&con);
			break;
		case 0:
			destroycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}