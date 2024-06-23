#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int a = 0;
	int e = 0;
	scanf("%d %d",&m,&n);
	
	int b = m;
	int c = n;
	
	while (a = m % n)
	{
		m = n;
		n = a;
	}
	
	e = b * c / n;
	
	printf("%d\n%d",n,e);
	
	return 0;
}