#include <stdio.h>

int main()
{
	int achievement = 0;
	while (scanf("%d",&achievement) != EOF)
	{
		if (achievement > 100 || achievement < 0)
		{
			printf("Error!\n");
		}
		else if (achievement >= 90)
		{
			printf("A\n");
		}
		else if (achievement >= 75)
		{
			printf("B\n");
		}
		else if (achievement >= 60)
		{
			printf("C\n");
		}
		else if (achievement >= 0)
		{
			printf("D\n");
		}
	}
	
	return 0;
}