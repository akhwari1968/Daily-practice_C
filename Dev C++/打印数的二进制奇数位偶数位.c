#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d",&n);
	
	int i = 0;
	
	for (i = 30;i >= 0;i -= 2)//求奇数位
	{
		printf("%d ",(n >> i) & 1);
	}
	printf("\n");
	
	for (i = 31;i >= 1; i -= 2)//求偶数位
	{
		printf("%d ",(n >> i) & 1);
	}
	
	return 0;
}