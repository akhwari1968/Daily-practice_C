#include <stdio.h>

int main()
{
	int arr[10] = {0};
	int i = 0;
	int sz = sizeof(arr) / sizeof([0]);
	
	for (i = 0;i < sz;i++)//数组下标的写法
	{
		arr[i] = 1;
	}
	
	int* p = arr;
	for (i = 0;i < sz;i++)
	{
		*p = 1;
		p++;
	}
	
	int* p = arr;
	for (i = 0;i < sz;i++)
	{
		*(p + i) = 1;
	}
	
	return 0;
}