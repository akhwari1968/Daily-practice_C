#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d",&n) != EOF)
	{
		int i = 0;
		for (i = 0;i < n;i++)
		{
			printf("*");
			for (int j = 0;j < n;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n\n");
		}
		for (i = 0;i < n+2;i++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	
	return 0;
}