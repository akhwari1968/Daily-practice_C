#include <stdio.h>

int main()
{
	//xue为学号，c为c语言，m为数学，e为英语
	int xue = 0;
	float c = 0.0f;
	float m = 0.0f;
	float e = 0.0f;
	scanf("%8d;%f,%f,%f",&xue,&c,&m,&e);
	
	printf("The each subject score of No.%d is %.2f, %.2f, %.2f",xue,c,m,e);
	
	return 0;
}//19245689;56.25,100.00,25.36