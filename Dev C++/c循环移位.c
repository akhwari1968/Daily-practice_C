#include <stdio.h>

int main()
{
	unsigned int a = 0;
	int n = 0;
	int tmp = 0;
	scanf("%u %d",&a,&n);
	
	int i = 0;
	for (i = 0;i < n;i++)
	{
		tmp = a & 1;
		a >>= 1;
		if (tmp == 1)
		{
			a |= 0x80000000;
		}
	}
	
	printf("%u",a);
	
	return 0;
}