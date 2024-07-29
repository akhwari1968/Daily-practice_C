#include <stdio.h>

int main()
{
	enum 
	{
		stone,cloth,scissors
	}a,b;
	
	enum
	{
		lose = -1,draw,win
	}r;
	
	scanf("%d %d",&a,&b);
	if (a - b == 1 || a - b == -2)
	{
		r = win;
	}
	else if (a == b)
	{
		r = draw;
	}
	else
	{
		r = lose;
	}
	
	printf("%d",r);
	
	return 0;
}