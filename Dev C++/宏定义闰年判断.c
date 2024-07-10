#include <stdio.h>

#define leap_year(y) (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))

int main()
{
	int y = 0;
	
	scanf("%d",&y);
	
	if (leap_year(y))
	{
		printf("L");
	}
	else
	{
		printf("N");
	}
	
	return 0;
}