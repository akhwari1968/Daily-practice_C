#include <stdio.h>

int jie (int x)
{
	if (x > 0)
	
	{
		return x * jie(x - 1);
	}
}

int main()
{
	int n = 0;
	scanf ("%d",&n);
	
	int ret = jie(n);
	
	printf("%d",ret);
	
	return 0;
}