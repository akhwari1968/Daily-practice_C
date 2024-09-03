#include <stdio.h>

int main()
{
	int i = 0;
        int j = 0;
        int t = 0;
        int tmp = 9;
        int n = 1;
        for (i = 0;i < tmp;i++){
            for (t = 0;t < tmp-i;t++){
                printf(" ");
            }
            for (j = 0;j < n+i;j++){
                printf("*");
            }
            printf("\n");
            n++;
        }
	
	return 0;
}