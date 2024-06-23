#include <stdio.h>

int main()
{
	char ch = 0;
	
	while(scanf("%c",&ch) == 1)
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			printf("%c 是字母\n",ch);
		}
		else
		{
			printf("%c 不是字母\n",ch);
		}
		
		getchar();//销毁\n
	}
	
	return 0;
}