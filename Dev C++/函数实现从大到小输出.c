#include <stdio.h>

void Swap (int* px,int* py)
{
	int temp = 0;
	temp = *px;
	*px = *py;
	*py = temp;
}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//int temp = 0;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a < b)
	{
		/*temp = a;
		a = b;
		b = temp;*/
		Swap (&a,&b);
	}
	if (a < c)
	{
		/*temp = a;
		a = c;
		c = temp;*/
		Swap (&a,&c);
	}
	if (b < c)
	{
		/*temp = b;
		b = c;
		c = temp;*/
		Swap (&b,&c);
	}
	
	printf("%d %d %d",a,b,c);
	
	return 0;
}