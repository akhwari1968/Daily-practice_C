/*#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	i = 1;
	while ( i <= n ) {
		j = 1;
		while ( j <= i ) {
			printf("%d*%d=%d",j,i,i*j);
			if ( i*j < 10) {
				printf("   ");
			} else {
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/
#include <stdio.h>

int main()
{
	int n;
	//scanf("%d",n);
	n = 3;
	int i,j;
	i = 1;
	while ( i<=n ) {
		j = 1;
		while ( j <= i) {
			printf("%d*%d=%d",j,i,j*i);
			if ( j*i>10 ) {
				printf("  ");
			} else {
				printf("   ");
			}
			j ++;
		}
		printf("\n");
		i ++;
	}
	return 0;
}