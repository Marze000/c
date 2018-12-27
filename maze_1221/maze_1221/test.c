#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Mult(int n)
{
	
	int row, lin;
	
	for (row = 1; row <= n; row++)
	{
		for (lin = 1; lin <= row; lin++)
		{
			printf("%d*%d=%2d", row, lin, row*lin);
		}
		printf("\n");
	}
}

int main()
{	
	int n = 0;
	scanf("%d", n);
	Mult(n);

	system("pause");
	return 0;
}