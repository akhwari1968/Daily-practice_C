#include <stdio.h>

int main()
{
	int x;
	//int i;
	
	scanf("%d",&x);
	
	int isprime = 1;
	
	for ( int i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isprime = 0;
			break;
		}
	}
	if ( isprime == 1 ) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}

	return 0;
}