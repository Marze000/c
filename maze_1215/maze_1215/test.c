#include<stdio.h>
#include<stdlib.h>

int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Max(a,b);
	printf("max=%d", ret);
	system("pause");
}


