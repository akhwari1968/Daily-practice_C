#include <stdio.h>

int main()
{
	int N = 1;
	int arr[10];
	while (N)
	{
		scanf("%d",&N);
		int i = 0;
		int max = 0;
		for (i = 0;i < N;i++)
		{
			scanf("%d",&arr[i]);
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
		
		printf("%d\n",max);
	}
	
	return 0;
}