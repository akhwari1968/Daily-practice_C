#include <stdio.h>

int main()
{
	int i = 0;
	int left = 0;
	int right = 0;
	i = 1234;
	
		left = i / 100;
		right = i % 100;
	
	printf("%d",right);
	return 0;
}