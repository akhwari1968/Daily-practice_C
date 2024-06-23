#include <stdio.h>

int main()
{
	int A = 0;
	
	scanf("%d",&A);
	
	int a = A/100;
	int b = A/10%10;
	int c = A%10;

	printf("%d",c*100 + b*10 + a);
	
	return 0;
}