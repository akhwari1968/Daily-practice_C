#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	
	printf("%d\n",(a >> 4) & 15);
	
	return 0;
}