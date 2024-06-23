#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数");
	scanf("%d %d",&a,&b);
	
	int max = 0;
	if ( a > b )
	{
		max = a;
		printf("最大的数为%d",max);
	}
	else
	{
		max = b;
		printf("最大的数为%d",max);
	}
	
	return 0;
	
}