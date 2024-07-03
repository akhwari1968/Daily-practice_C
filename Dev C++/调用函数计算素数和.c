#include <stdio.h>
#include <math.h>

int isprime(int x)
{
	if (x <= 1) 
	{
        return 0;
    }
	
	int i = 0;
	
	for(i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int m = 0;
	int n = 0;
	int sum = 0;
	
	scanf("%d %d",&m,&n);
	
	int i = 0;
	int sz;
	
	for (i = m;i <= n;i++)
	{
		sz = isprime(i);
		
		if (sz == 1)
		{
			sum += i;
		}
	}
	
	printf("%d",sum);
	
	return 0;
}