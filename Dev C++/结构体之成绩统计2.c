#include <stdio.h>

typedef struct student//定义结构体
{
	char xue[10];
	char name[10];
	int a;
	int b;
	int c;
} student;

void pin(student* stu,int n)//求平均值
{
	int i = 0;
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0;i < n;i++)
	{
		sum += stu[i].a;
		sum1 += stu[i].b;
		sum2 += stu[i].c;
	}
	sum /= n;
	sum1 /= n;
	sum2 /= n;
	
	printf("%d %d %d\n",sum,sum1,sum2);
}

void print(student* stu,int n)//遍历结构体变量数组比较大小并输出
{
	int i = 0;
	int max = stu[0].a + stu[0].b + stu[0].c;
	int tmp = 0;
	for (i = 1;i < n;i++)
	{
		if (max < (stu[i].a + stu[i].b + stu[i].c))
		{
			max = (stu[i].a + stu[i].b + stu[i].c);
			tmp = i;
		}
	}
	
	printf("%s %s %d %d %d",stu[tmp].xue,stu[tmp].name,stu[tmp].a,stu[tmp].b,stu[tmp].c);
}

int main()
{
	student stu[100];//结构体变量可以为数组
	
	int n = 0;
	scanf("%d",&n);
	
	int i = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%s %s %d %d %d",stu[i].xue,stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
	}
	
	pin(stu,n);
	print(stu,n);
	
	return 0;
}