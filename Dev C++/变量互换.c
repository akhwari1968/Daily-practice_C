#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int t;
	 t = a;
	 a = b;
	 b = t;
	printf("a=%d b=%d",a,b);
	
	return 0;
}