#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c", ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c", ch + 32);
		}
		else
		{
			;
		}
	}
	system("pause");
	return 0;
}