#include <stdio.h>

int main()
{
	int arr[3][4] = {};
	int i = 0;
	
	//printf("%d\n",arr[2][0]);
	
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}