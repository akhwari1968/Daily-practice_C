#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d",&a,&b,&c);
	
	if ( a>b && a>c)
	{
		
		if ( b>c )
		{
			printf("%d %d %d",c,b,a);
		}
		else 
		{
			printf("%d %d %d",b,c,a);
		}
	}
	else if ( b>a && b>c)
	{
		if ( c>a )
		{
			printf("%d %d %d",a,c,b);
		}
		else
		{
			printf("%d %d %d",c,a,b);
		}
	}
	else if ( c>a && c>b)
	{
		if ( a>b )
		{
			printf("%d %d %d",b,a,c);
		}
		else
		{
			printf("%d %d %d",a,b,c);
		}
	}
	else
	{
		printf("您输的数字相等");
	}
		
	return 0;
}