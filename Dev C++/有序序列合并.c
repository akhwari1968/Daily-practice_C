#include <stdio.h>

int main()
{
	int n,m;
	int arr1[1000];
	int arr2[1000];
	
	scanf("%d %d",&n,&m);
	
	int i = 0;
	for (i = 0;i < n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i = 0;i < m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	int j = 0;
	for (i = 0;i < n && j < m;)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ",arr1[i]);
			i++;
		}
		else
		{
			printf("%d ",arr2[j]);
			j++;
		}
	}
	if (i == n)
	{
		for (j = j;j < m;j++)
		{
			printf("%d ",arr2[j]);
		}
	}
	else if (j == m)
	{
		for (i = i;i < n;i++)
		{
			printf("%d ",arr1[i]);
		}
	}
	
	return 0;
}