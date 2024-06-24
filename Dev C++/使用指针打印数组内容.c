#include <stdio.h>

void print(int* p,int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	print(arr,sz);
	
	return 0;
}