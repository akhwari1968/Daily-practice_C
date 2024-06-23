#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d",&a,&b);
	
	c = a / b;
	d = a % b;
	printf("%d %d",c,d);
	
	return 0;
}