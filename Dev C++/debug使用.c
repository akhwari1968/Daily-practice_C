#include <stdio.h>

int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("ret = %d",ret);
	
	return 0;
}