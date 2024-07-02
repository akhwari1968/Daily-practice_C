#include <stdio.h>

int is_leap_year(int x)//判断闰年函数
{
	if (((x % 4 == 0)&&(x % 100 != 0))||(x % 400 ==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

struct time//定义结构体
{
	int year;
	int month;
	int day;
};

int main()
{
	struct time a;//创建结构体变量a
	int i = 0;
	int sum_days = 0;//输出变量
	int month1[12] = {31,29,31,30,31,30,31,31,30,31,30,31};//默认情况为闰年
	
	scanf("%d %d %d",&a.year,&a.month,&a.day);
	
	for (i = 0;i < a.month - 1;i++)//月数转化为天数
	{
		sum_days += month1[i];
	}
	
	sum_days += a.day;//加上天数
	
	if (a.month > 2)//月份大于2才进行闰年的判断
	{
		int t = is_leap_year(a.year);//调用函数判断闰年
		
		if (t == 1)//是则直接输出，不是减1输出
		{
			printf("%d",sum_days);
		}
		else
		{
			printf("%d",sum_days - 1);
		}
	}
	else//输入月份小于或等于2直接输出
	{
		printf("%d",sum_days);
	}
	
	//printf("%d %d %d",a.year,a.month,a.day);//检查输入
	
	return 0;
}