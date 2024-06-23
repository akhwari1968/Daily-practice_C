#include <stdio.h>

int main()
{
	/*int chu = 0;
	scanf("%d",&chu);
	
	int y = chu / 10000;
	int m = chu / 100%100;
	int d = chu % 100;
	
	printf("%d\n",y);
	
	if ( m<10 )
	{
		printf("0%d\n",m);
	}
	else
	{
		printf("%d\n",m);
	}
	if ( d<10 )
	{
		printf("0%d\n",d);
	}
	else
	{
		printf("%d\n",d);
	}*/
	
	int y = 0;
	int m = 0;
	int d = 0;
	scanf("%4d%2d%2d",&y,&m,&d);
	
	printf("%d\n",y);
	printf("%02d\n",m);
	printf("%02d",d);
	
	return 0;
}
	
		
		