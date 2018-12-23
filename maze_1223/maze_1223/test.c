#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//void Swap(int a,int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//}

void Swap(int* a,int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Year(int n)
{
	if (n%4==0 && n%100 != 0 || n%400==0)
	{
		printf("the %d is run year\n", n);
	}
	else
	{
		printf("the %d is not run year\n", n);
	}
		
}

int main()
{
	int n = 0;
	while (scanf("%d",&n)!=EOF)
	{
		//getchar();
		//scanf("%d",&n);
		Year(n);
	}

	//int x = 10;
	//int y = 20;
	//Swap(x,y);
	//Swap(&x, &y);
	//printf("%d %d\n", x, y);

	system("pause");
	return 0;
}