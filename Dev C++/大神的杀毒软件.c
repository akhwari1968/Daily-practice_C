#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	int arr[100];
	int i = 0;
	int j = 0;
	
	while (scanf("%d",&n) != EOF)
	{
		for (i = 0;i < n;i++)
		{
			scanf("%d",&arr[i]);
		}
	
		for (i = n - 1;i > 0;i--)
		{
			for (j = 0;j < i;j++)
			{
				if (arr[j] < arr[j+1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j+1] = t;
				}
			}
		}
		
		for (i = 0;i < n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	
	return 0;
}