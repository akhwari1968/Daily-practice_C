#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d",&a,&b);
	
	int c = a/100*60 + a%100;
	int d = (c+b)/60*100 + (c+b)%60;
	
	printf("%d",d);
	
	return 0;
}