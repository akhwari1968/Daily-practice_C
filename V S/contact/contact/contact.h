#define  _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define inc_sz 2
#define default_sz 3
#define max 100
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30


//类型的声明
typedef struct peoinfo//联系人信息
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
}peoinfo;

////静态版本
//typedef struct contact//通讯录
//{
//	peoinfo data[max];//存放人的信息
//	int conut;//记录通讯录内的实际个数
//}contact;

//动态版本
typedef struct contact//通讯录
{
	peoinfo* data;//存放人的信息
	int conut;//记录通讯录内的实际个数
	int capacity;//动态通讯录容量
}contact;

int initcontact(contact* pc);//初始化函数的声明

void destroycontact(contact* pc);//销毁通讯录

void addcontact(contact* pc);//增加联系人函数的声明

void showcontact(const contact* pc);//打印通讯录的信息

void delcontact(contact* pc);//删除联系人

int findbyname(contact* pc, char name[]);//查找联系人名字

void searchcontact(contact* pc); //查找联系人

void modifycontact(contact* pc);//修改联系人

void sortcontact(contact* pc);//按名字排序联系人