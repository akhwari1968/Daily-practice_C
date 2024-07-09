#include <stdio.h>

#define yu(x,y) x % b;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	int num = yu(a,b);
	printf("%d",num);
	
	return 0;
}