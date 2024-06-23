#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	
	scanf("%d %d",&A,&B);
	
	int a = A + B;
	int b = A - B;
	int c = A * B;
	int d = A / B;
	
	printf("%d + %d = %d\n",A,B,a);
	printf("%d - %d = %d\n",A,B,b);
	printf("%d * %d = %d\n",A,B,c);
	printf("%d / %d = %d\n",A,B,d);
	
	return 0;
}