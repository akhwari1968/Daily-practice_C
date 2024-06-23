#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch = 0;
	
	/*while (scanf("%c",&ch) == 1)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c\n",ch-32);
		}
		else
		{
			printf("%c\n",ch + 32);
		}
		
		getchar();
	}*/
	
	while (scanf("%c",&ch) != EOF)
	{
		if (islower(ch))
		{
			printf("%c\n",toupper(ch));
		}
		else if (isupper(ch))
		{
			printf("%c\n",tolower);
		}
	}
	
	return 0;
}