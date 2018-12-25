#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Sushu(int num, int m)
{
	for (num; m < sqrt(num); m++)
	{
		if (num%m == 0)
		{
			printf("%d is sushu!", num);
			break;
		}
		else
		{
			printf("%d is not sushu!", num);
			break;
		}
	}
}

int sushu(int num)
{
	int a = 1;
	int i = 0;
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			a--;
			break;
		}
	}
	return a;
}

int Su_Shu(int num)
{
	for(int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("该数不是素数！");
			break;
		}
		else
		{
			printf("该数是素数！");
			break;
		}
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	//Sushu(num, m);
	Su_Shu(num);
	//if (sushu(num))
	//{
	//	printf("yes");
	//}
	//else
	//{
	//	printf("no");
	//}
	system("pause");
	return 0;
}
