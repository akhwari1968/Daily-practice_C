#include <stdio.h>

//结构体的成员可以是数组，指针，变量等等
typedef struct student//typedef是关键字，它的作用是为已有的类型创建类型别名，可让引用结构体变量时更方便
{
	char xue[20];
	char n[20];
	int c;
	int m;
	int e;
} student;

void input (student* stu,int n)//输入，输入时注意int变量要取地址
{
	int i = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%s %s %d %d %d",stu[i].xue,stu[i].n,&stu[i].c,&stu[i].m,&stu[i].e);
	}
}

void print(student* stu,int n)//输出，注意格式要求以及换行
{
	int i = 0;
	for (i = 0;i < n;i++)
	{
		printf("%s,%s,%d,%d,%d",stu[i].xue,stu[i].n,stu[i].c,stu[i].m,stu[i].e);
		printf("\n");
	}
	
}

int main()
{
	student stu[100];//创建结构体数组
	
	int n = 0;
	scanf("%d",&n);
	
	input(stu,n);
	print(stu,n);
	
	return 0;
}