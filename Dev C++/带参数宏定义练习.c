#include <stdio.h>
#include <math.h>

#define chang(a,b) t=a,a=b,b=t;

int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	chang(a,b);
	printf("%d %d",a,b);
	
	return 0;
}