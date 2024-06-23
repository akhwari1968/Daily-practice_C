#include <stdio.h>

void exchange(int arr[3][3],int x,int y)
{
	int i = 0;
	int j = 0;
	
	for (j = 0;j < y;j++)
	{
		for (i = 0;i < x;i++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	exchange(arr,3,3);
	
	return 0;
}