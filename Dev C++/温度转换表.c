#include <stdio.h>

int ctof(int c)
{
	return (32 + c * 9 / 5);
}

int main()
{
	int i = -100;
	
	for (i = -100;i < 151;i+=5)
	{
		printf("c=%d->f=%d\n",i,ctof(i));
	}
	
	return 0;
}