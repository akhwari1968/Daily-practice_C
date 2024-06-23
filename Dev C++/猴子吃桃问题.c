#include <stdio.h>

int main()
{
	int N = 0;
	int i = 0;
	int peach = 1;
	scanf("%d",&N);
	
	for (i = N - 1;i > 0;i--)
	{
		peach = (peach + 1) * 2;
	}
	
	printf("%d",peach);
	
	return 0;
}