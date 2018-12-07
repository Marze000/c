//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, sum;
//	int a, b, c;
//	for (i = 100; i < 999; i++)
//	{
//		a = i / 100;
//		b = (i % 100) / 10;
//		c = i % 10;
//		sum = a * a*a + b * b*b + c * c*c;
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
//	//int i, j;
//	//for (i = 1; i <= 24; i += 2)
//	//{
//	//	if (i <= 11)
//	//	{
//	//		for (j = 1; j <= i; j++)
//	//		{
//	//			printf("*");
//	//		}	
//	//	}
//	//	printf("\n");
//	//	if (i >= 11)
//	//	{
//	//		for (j = i; j < 24; j++)
//	//		{
//	//			printf("*");
//	//		}
//	//	}
//	//}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int an = 0;
	int Sn = 0;
	scanf("%d %d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		an = 10*an + a;
		Sn += an;
	}
	printf("%d\n",Sn);
	system("pause");
	return 0;
}