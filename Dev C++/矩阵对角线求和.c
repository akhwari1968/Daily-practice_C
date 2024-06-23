#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3] = {};
	
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		//scanf("\n");
	}
	
	/*for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	
	int sum1 = arr[0][0] + arr[1][1] + arr[2][2];
	int sum2 = arr[0][2] + arr[1][1] + arr[2][0];
	
	printf("%d %d",sum1,sum2);
	
	return 0;
}