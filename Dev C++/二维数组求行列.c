#include <stdio.h>

int main()
{
	int arr[3][4] = {0};
	
	printf("%d\n",sizeof(arr) / sizeof(arr[0]));
	printf("%d\n",sizeof(arr[0]) / sizeof(arr[0][0]));
	
	return 0;
}