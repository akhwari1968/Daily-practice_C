#include <stdio.h>

int main()
{
	/*int arr[10] = {0};
	int i = 0;
	while ( i<10 )
	{
		scanf("%d",&arr[i]);
		i++;
	}
	int max = arr[0];
	i = 1;
	while ( i<10 )
	{
		if ( arr[i]>max )
		{
			max = arr[i];
		}
		i++;
	}
	printf("%d",max);*/
	int i = 1;
	int n = 0;
	int max = 0;
	scanf("%d",&max);
	
	while ( i<4 )
	{
		scanf("%d",&n);
		if( n>max )
		{
			max = n;
		}
		i++;
	}
	printf("%d\n",max);
	
	return 0;
}