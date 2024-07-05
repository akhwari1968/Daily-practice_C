#include <stdio.h>

int main()
{
	int t = 0;
	int H = 0;
	int M = 0;
	
	scanf("%d",&t);
	
	H = t / 60 / 60;
	t = t - H * 60 * 60;
	M = t / 60;
	t = t - M * 60;
	
	printf("%d:%d:%d",H,M,t);
	
	return 0;
}