#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
struct student
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct student* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name,ps->age,ps->sex,ps->tele);

}
int main()
{ 
	struct student s = { "����", 20, "��", "13154615899"};
	//�ṹ�����.��Ա��
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}

