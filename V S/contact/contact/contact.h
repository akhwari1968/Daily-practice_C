#define  _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define max 100
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30


//���͵�����
typedef struct peoinfo//��ϵ����Ϣ
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}peoinfo;

typedef struct contact//ͨѶ¼
{
	peoinfo data[100];//����˵���Ϣ
	int conut;//��¼ͨѶ¼�ڵ�ʵ�ʸ���
}contact;

void initcontact(contact* pc);//��ʼ������������

void addcontact(contact* pc);//������ϵ�˺���������

void showcontact(const contact* pc);//��ӡͨѶ¼����Ϣ

void delcontact(contact* pc);//ɾ����ϵ��

int findbyname(contact* pc, char name[]);//������ϵ������

void searchcontact(contact* pc); //������ϵ��

void modifycontact(contact* pc);//�޸���ϵ��

void sortcontact(contact* pc);//������������ϵ��