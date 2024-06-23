#include <stdio.h>

int main()
{
int n;
	
	scanf("%d",&n);
	int fact = 1;
	
	int i = n;
	for ( n=n; n>1; n--) {
		fact *= n;//1*2*3*4*5*6
	}
	
	printf("%d!=%d\n",i,fact);
	return 0;
}