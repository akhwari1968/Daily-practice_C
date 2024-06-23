#include <stdio.h>

//打印3的倍数
int main()
{
	int i = 0;
	int a = 0;
	
	for (i = 1;i < 101;i++)
	{
		a = i % 3;
		if (a == 0)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}