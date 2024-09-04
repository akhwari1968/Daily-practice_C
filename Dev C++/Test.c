#include <stdio.h>

int main()
{
	int T = 0;
	int M = 0;
	int arr[100][2];
	
	scanf("%d %d",&T,&M);
	int i = 0;
	for (i = 0;i < M;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	/*for (i = 0;i < M;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}*/

	int sumv = 0;
	int sumt = 0;
	
	for (i = 0;i < M;i++)
	{
		sumt += arr[i][0];
	}
	
	if (sumt < T)
	{
		for (i = 0;i < M;i++)
		{
			sumv += arr[i][1];
		}
		printf("%d",sumv);
		
		return 0;
	}
	
	
	
	return 0;
}