#include <stdio.h>

int main()
{
	int x;
	
	//scanf("%d",&x);
	
	for ( x = 2; x<100; x++)
	{
	
		int i;
		int isprime = 1;
		for ( i=2; i<x; i++) {
			if ( x % i == 0 ) {
				isprime = 0;
				break;
		}
		}
		if ( isprime == 1 ) {
			printf(" %d",x);
		} 
	}
	printf("\n"); 
	return 0;
}