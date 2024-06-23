#include <stdio.h>

int main()
{
	double x = 0;
	scanf("%lf",&x);
	double f = 2 * x;
	switch (x<0) {
		case 1:
			printf("-1");
			break;
		case 0:
			printf("%lf",2 * x);
			break;
	}
	return 0;
}