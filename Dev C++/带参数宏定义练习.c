#include <stdio.h>

#define chang(x,y) (t) = (x),(x) = (y),(y) = (t)

int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	
	chang(a,b);
	printf("%d %d",a,b);
	
	return 0;
}