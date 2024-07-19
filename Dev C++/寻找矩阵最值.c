#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int arr[6][6];
	
	scanf("%d",&n);
	int i = 0;
	for (i = 0;i < n;i++)
	{
		int j = 0;
		for (j = 0;j < n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	int max = arr[0][0];
	int x = 0;
	int y = 0;
	for (i = 0;i < n;i++)
	{
		int j = 0;
		for (j = 0;j < n;j++)
		{
			if (fabs(max) < fabs(arr[i][j]))
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	
	printf("%d %d %d",max,x+1,y+1);
	
	return 0;
}