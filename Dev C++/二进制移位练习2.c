#include <stdio.h>

int main()
{
	unsigned int value = 0;
	int n1,n2;
	scanf("%u %d %d",&value,&n1,&n2);
	
	value = value >> n1;
	value <<= n1;
	value <<= (32 - n2 -1);
	value >>= (32 - n2 -1);
	
	printf("%u",value);
	
	return 0;
}