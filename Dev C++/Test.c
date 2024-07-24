#include<stdio.h>

int main()
{
	int a,b,n;
	
	scanf("%d",&n);

	for(int i=n-1;i>=0;i--)
	{
	
	    if(i>=0)
		{
	        scanf("%d %d",&a,&b);
	        printf("%d\n",a+b);
	        continue;
	
	    }
	}
	
	return 0;
}