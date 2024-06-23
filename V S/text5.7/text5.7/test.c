#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void 不需要返回
//void test()
//{
//	static  int a = 1;
//	a++;
//	printf("%d ", a);
//	
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

int main()
{
	char c1 = 'C';
	char c2 = 'h';
	char c3 = 'i';
	char c4 = 'n';
	char c5 = 'a';
	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c4);

	char b1 = 'G';
	char b2 = 'l';
	char b3 = 'm';
	char b4 = 'r';
	char b5 = 'e';

	c1 = b1;
	c2 = b2;
	c3 = b3;
	c4 = b4;
	c5 = b5;

	printf("%c%c%c%c%c", c1, c2, c3, c4, c5);

	return 0;
}