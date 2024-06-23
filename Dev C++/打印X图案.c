#include <stdio.h>

int main()
{
	/*int n = 0;
	char arr[20][20];
	int i = 0;
	int j = 0;
	
	scanf("%d",&n);

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			arr[i][j] = ' ';
		}
	}
	
	for (i = 0;i < n;i++)
	{
		arr[i][i] = '*';
	}
	
	i = 0;
	j = n-1;
	while (i <= n)
	{
		arr[i][j] = '*';
		i++;
		j--;
	}
	
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}*/
	
	int n = 0;
	while (scanf("%d",&n) == 1)//通过判断是否读取到数实现多组输入
	{
		int i = 0;
		int j = 0;
		for (i = 0;i < n;i++)
		{
			for (j = 0;j < n;j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if (i+j == n-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}