#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	int b ;
	scanf("%d", &a);
	if (a < 0) {
		b = 1;
	}
	else if (a > 0) {
		b = -1;
	}
	else {
		b = 0;
	}
	printf("%d", b);//单一出口原则
	return 0;
}