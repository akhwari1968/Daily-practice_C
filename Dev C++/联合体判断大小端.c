#include <stdio.h>

int check()
{
	union un
	{
		int a;
		char b;
	}u;
	
	u.a = 1;
	return u.b;
}

int main()
{
	int ret = check();
	
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}