#include <stdio.h>

void getreal(double x)
{
	printf("%.lf\n",x);
}

void getstring(char* p)
{
	printf("%s",p);
}

int main()
{
	double n = 0;
	char arr[100];
	printf("please  input  a  number:\n");
	scanf("%lf",&n);
	printf("please  input  a  string:\n");
	scanf("%s",arr);
	getreal(n);
	getstring(arr);
	
	return 0;
}