#include <stdio.h>

int main()
{
	int arr[4];
	int i = 0;
	for (i = 0;i < 4;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int m = 3;
	while (m >= 0)
	{
		for (i = 0;i < 4;i++)
		{
			if (i == m)
			{
				continue;
				for (int j = 0;j < 4;j++)
				{
					if (j == m)
					{
						continue;
						for (int k = 0;k < 4;k++)
						{
							if (k == m)
							{
								continue;
								if (i != j&&j !=k&&i != k)
								{
									printf("%d %d %d\n",arr[i],arr[j],arr[k]);
								}
							}
						}
					}
				}
			}	
		}
		m--;
	}
	
	return 0;
}