#include <stdio.h>

int conut(int x)
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
		int tmp = i;
		int a1 = conut(i);
		int j = 0;
		int wei = 1;
		int t1 = 1;
		int t2 = 1;
		
		for (j = 0;j < a1;j++)
		{
			if (wei % 2 != 0)
			{
				if ((tmp % 10) % 2 == 0)
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
				if ((tmp % 10) % 2 != 0)
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
			tmp /= 10;
		}
		if (t1 == 1 && t2 == 1)
		{
			hao++;
		}
	}
	
	printf("%d",hao);
}