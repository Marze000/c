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
			printf("%-2d*%-2d=%-3d ", row, lin, row*lin);
		}
		printf("\n");
	}
}

int main()
{
	//int num = 0;
	//scanf("%d", &num);
	//int i = 1;
	//int j = 1;
	//int sum = 0;
	//for (; i <= num; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		sum = i * j;
	//		printf("%2d*%2d=%2d ",i,j,i*j);

	//	}
	//	printf("\n");
	//}
	int n = 0;
	scanf("%d",&n);
	Mult(n);
	system("pause");
	return 0;
}