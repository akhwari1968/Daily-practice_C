#include <stdio.h>

int main()
{
	int arr1[] = {1,2,3,4,5,6};
	int arr2[] = {6,5,4,3,2,1};
	
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	
	for (i = 0;i < sz;i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	
	printf("arr1 = ");
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	printf("arr2 = ");
	for (i = 0;i < sz;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	return 0;
}