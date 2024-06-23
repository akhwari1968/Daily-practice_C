#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	
	while (scanf("%d %d %d",&a,&b,&c) == 3)
	{
		if ((a + b > c)  && (a + c > b)  && (b + c > a))
		{
			if (a == b && a == c)
			{
				printf("等边三角形\n");
			}
			else if ((a == b && a != c)|| (a == c && a != b) || (b == c && b != a))
			{
				printf("等腰三角形\n");
			}
			else
			{
				printf("其他三角形\n");
			}
		}
		else
		{
			printf("不是三角形\n");
		}
	}
	
	
	return 0;
}