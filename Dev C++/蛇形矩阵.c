#include <stdio.h>

int main()
{
	int n = 0;
	int arr[100][100];
	int row,column;
	int z = 1;
	int i = 0;
	while (scanf("%d",&n) == 1 && n)
	{
		for (i = 0;i < n;i++)
		{
			row = i;
			column = 0;
			while (1)
			{
				arr[row][column] = z;
				z++;
				if (row == 0 && column == i)
				{
					break;
				}
				row--;
				column++;
			}
		}
		for (row = 0;row < n;row++)
		{
			for (column = 0;column < n-row;column++)
			{
				printf("%d ",arr[row][column]);
			}
			printf("\n");
		}
		}
	
	return 0;
}