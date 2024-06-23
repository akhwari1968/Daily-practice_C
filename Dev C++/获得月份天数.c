#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	while (scanf("%d %d",&year,&month) == 2)
	{
		day = days[month];
		
		if (month == 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			{
				day++;
			}
		}
		
		printf("%d\n",day);
			
	}
	
	
	return 0;
}