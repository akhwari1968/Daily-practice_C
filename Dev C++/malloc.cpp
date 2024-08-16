#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	*p = 20;
	
	printf("%d",*p);
	
	free(p);
	p = NULL;
	
	return 0;
}