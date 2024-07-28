#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	char f;
	double a,b = 0;
	
	scanf("%d %d %c",&num1,&num2,&f);
	
	switch (f)
	{
		case '+':
			printf("%d",num1+num2);
			printf("\n");
			break;
		case '-':
			printf("%d",num1-num2);
			printf("\n");
			break;
		case '*':
			printf("%d",num1*num2);
			printf("\n");
			break;
		case '/':
			b = num1/num2;
			printf("%lf",b);
			printf("\n");
			break;
		case '%':
			a = num1%num2;
			printf("%lf",a);
			printf("\n");
			break;
	}
	
	return 0;
}