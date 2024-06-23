#include <stdio.h>

int main()
{
	/*int m = 0;
	int n = 0;//定义输入变量
	int i = 0;//定义除数变量
	scanf("%d %d",&m,&n);
	//a = m * n;
	while (n != 0)//辗转相除法求得最大公约数
	{
		i = n;
		n = m % n;
		m = i;
	}
	printf("%d ",m);*/
	
	
	/*int a = 0;
	int b = 0;
	
	scanf("%d %d",&a,&b);
	
	int min = (a < b) ? a : b;
	int m = min;
	
	while (1)
	{
		if (a % m == 0 && b % m == 0)
		{
			break;
		}
		m--;
	}
	printf("%d\n",m);//公约数暴力求解法*/
	
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d",&a,&b);
	
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	
	printf("%d\n",b);//公约数辗转相除法升级版
	
	return 0;
}