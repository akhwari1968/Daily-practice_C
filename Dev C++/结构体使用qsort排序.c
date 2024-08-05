#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu//创建结构体
{
	char name[200];//数据安全性
	int age;
	int c;
};

int main()
{
	int n = 0;
	struct stu arr[1005];//创建结构体变量数组
	struct stu tmp;//排序交换数据时需要使用的变量
	while (scanf("%d", &n) != EOF)//输入数据总个数
	{
		int i = 0;
		for (i = 0; i < n; i++)//输入测试数据
		{
			scanf("%s %d %d", arr[i].name, &arr[i].age, &arr[i].c);
		}
	
		for (i = 0;i < n-1;i++)//排序趟数
		{
			int j = 0;
			for (j = 0;j < n-1-i;j++)//每趟排序都会排除一个已经排好的数据所以减i
			{
				if ((arr[j].c) == (arr[j+1].c))//判断成绩是否相等
				{
					if (strcmp((arr[j].name),(arr[j+1].name)) == 0)//判断姓名次序是否相同
					{
						if ((arr[j].age) > (arr[j+1].age))//前两者都相等则按年龄排序
						{
							tmp = arr[j];//交换数据
							arr[j] = arr[j+1];
							arr[j+1] = tmp;
						}
					}
					else if (strcmp((arr[j].name),(arr[j+1].name)) > 0)//姓名次序不相同则按姓名排序
					{
						tmp = arr[j];//交换数据
						arr[j] = arr[j+1];
						arr[j+1] = tmp;
					}
				}
				else if ((arr[j].c) > (arr[j+1].c))//成绩不相等则按成绩排序
				{
					tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	
		for (i = 0; i < n; i++)//输出结果注意换行
		{
			printf("%s %d %d\n", arr[i].name, arr[i].age, arr[i].c);
		}
	}
	return 0;
}