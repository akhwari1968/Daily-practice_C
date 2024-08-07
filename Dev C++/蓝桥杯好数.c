#include <stdio.h>

int conut(int x)//测算每次i的位数
{
	int a = 0;
	
	while (x)
	{
		a++;
		x /= 10;
	}
	
	return a;
}

int main()
{
	int n = 0;
	int h = 0;//好数个数计数
	scanf("%d",&n);
	
	for (int i = 1;i <= n;i++)
	{
		int tmp = i;//对tmp进行取数操作，用i会导致上层循环出现问题
		int a1 = conut(i);
		int j = 0;
		int w = 1;
		int t1 = 1;
		int t2 = 1;
		
		for (j = 0;j < a1;j++)//遍历1到n的数字
		{
			if (w % 2 != 0)//判断是否为奇位
			{
				if ((tmp % 10) % 2 == 0)//判断奇位上的数是否为奇数
				{
					t1 = 0;//不是则改变变量并进入下个n
					break;
				}
				else
				{
					t1 = 1;//是则不改变t
				}
			}
			else if (w % 2 == 0)//判断偶位
			{
				if ((tmp % 10) % 2 != 0)//判断偶位数是否为偶数
				{
					t2 = 0;//不是则改变变量并进入下个n
					break;
				}
				else
				{
					t2 = 1;//是则不改变变量
				}
			}
			w++;//位次增加
			tmp /= 10;
		}
		if (t1 == 1 && t2 == 1)//每轮循环结束通过t1，t2判断是否为好数
		{
			h++;//是则加1
		}
	}
	
	printf("%d",h);
}

//此为变种改版
/*#include <stdio.h>
#include <math.h>


int count(int x)
{
	int a = 0;
	
	while (x)
	{
		a++;
		x /= 10;
	}
	
	return a;
}

int main()
{
	int n = 0;
	int hao = 0;
	scanf("%d",&n);
	
	for (int i = 1;i <= n;i++)
	{
		int a1 = count(i);
		int j = 0;
		int wei = 1;
		int t1 = 1;
		int t2 = 1;
		int p = a1;
		
		for (j = 0;j < a1;j++)
		{
			if (wei % 2 != 0)
			{
				if (((i / (int)(pow(10,p-1))) % 10 ) % 2 == 0)
				{
					t1 = 0;
					break;
				}
				else
				{
					t1 = 1;
				}
			}
			else if (wei % 2 == 0)
			{
				if (((i / (int)(pow(10,p-1))) % 10 ) % 2 != 0)
				{
					t2 = 0;
					break;
				}
				else
				{
					t2 = 1;
				}
			}
			wei++;
			p--;
		}
		if (t1 == 1 && t2 == 1)
		{
			hao++;
			printf("%d ",i);
		}
	}
	
	printf("\n%d",hao);
	
	return 0;
}*/