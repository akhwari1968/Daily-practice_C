#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100];
	
	while (1)
	{
		scanf("%d",&n);
		if (n == 0)
		{
			break;
		}
		
		int i = 0;
		for (i = 0;i < n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		for (i = 0;i < n-1;i++)
		{
			int j = 0;
			for (j = 0;j < n-1-i;j++)
			{
				if (abs(arr[j]) < abs(arr[j+1]))
				{
					int tmp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = tmp;
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