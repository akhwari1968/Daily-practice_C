#include <stdio.h>

int main() 
{
    int k,a,b,c,d;
    char arr[100];
    
    while (~(k = scanf("%d.%d.%d.%d",&a,&b,&c,&d)))
    {
    	gets(arr);
    	if (arr[0] != '\0')
    	{
    		printf("N\n");
    		continue;
		}
		else if (k < 4)
		{
			printf("N\n");
			continue;
		}
		else if (a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255&&d>=0&&d<=255)
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
    
    return 0;
}