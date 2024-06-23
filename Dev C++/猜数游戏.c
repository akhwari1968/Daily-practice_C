#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个一到一百的数\n");
	do {
		printf("请猜一个一到一百的数：");
		scanf("%d",&a);
		count ++;
		if ( a > number ) {
			printf("你猜的数大了\n");
		} else if ( a < number ) {
			printf("你猜的数小了\n");
		}
	} while (a != number);
	printf("恭喜你，你%d次就猜到了答案\n",count);
	return 0;
}