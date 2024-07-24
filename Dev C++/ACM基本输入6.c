#include <stdio.h>

int main()
{
	int a = 0;
	int sum = 0;
	int n = 0;
	
	while (scanf("%d",&n) != EOF);
	{
		int i = 0;
		while (i < n)
		{
			scanf("%d",&a);
			sum += a;
			i++;
		}
		printf("%d\n",sum);
		sum = 0;
	}

	return 0;
}