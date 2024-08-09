#include <stdio.h>

int main()
{
	int k = '0';
	for (k = '0';k <= 'd';k++)
	{
		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
		{
			printf("%c\n",k);
		}
	}
	
	return 0;
}