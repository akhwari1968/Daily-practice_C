#include <stdio.h>

int Add(int x,int y);//声明

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	
	int sum = Add(a,b);
	printf("%d\n",sum);
	
	return 0;
}

int Add(int x,int y)//定义
{
	return x + y;
}