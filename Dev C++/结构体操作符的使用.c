#include <stdio.h>
#include <string.h>

struct stu
{
	char name[20];
	int age;
	double score;
};

void set_stu(struct stu* ps)
{
	strcpy(ps->name,"zhangsan");
	ps->age = 20;
	ps->score = 100.0;
}

void print_stu(struct stu* ps)
{
	printf("%s %d %lf",ps->name,ps->age,ps->score);
}

int main()
{
	struct stu s = { 0 };
	
	set_stu(&s);
	print_stu(&s);
	
	return 0;
}