#include <stdio.h>
#include <math.h>

void print(int x)
{
	int i = 0;
	int a = 0;

	for (i = 3;i >= 0;i--)
	{
		a = x / pow(10,i);
		printf("%d ",a % 10);
	}
}

int main()
{
	int number = 0;
	
	scanf("%d",&number);
	
	print(number);
	
	return 0;
}