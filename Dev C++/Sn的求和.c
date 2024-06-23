#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int i = 0;
	int Sn = 2;
	int sum = 2;
	scanf("%d",&n);
	if (n > 0)
	{
		for (i = 1;i < n;i++)
		{
		sum = sum * 10 + 2;
		Sn += sum;	
		}
	
		printf("%d",Sn);
	}
	else
	{
		printf("0");
	}
	
	return 0;
}