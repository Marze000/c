#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void Print_z(int n)  //方法一
{	
	if (n < 10)
	{
		printf("%d", n);
	}
	else
	{
		Print_z(n / 10);
		printf("%d", n % 10);
	}
}

void print(int n)  //方法二
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}

void print_xh(int n)
{
	while(n)
	{
		printf("%d\n", n % 10);
		n = n / 10;
	}	
}

int main()
{
	//int n = 0;
	//scanf("%d", &n);
	//print_xh(n);
	//int n = 0;
	//scanf("%d", &n);
	//print(n);//方法二比较简单，只有5行
	//Print_z(n);
	
	system("pause");
	return 0;
}