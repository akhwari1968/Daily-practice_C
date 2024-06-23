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
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name,ps->age,ps->sex,ps->tele);

}
int main()
{ 
	struct student s = { "张三", 20, "男", "13154615899"};
	//结构体对象.成员名
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}

