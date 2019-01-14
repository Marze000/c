#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	//打印下列图像
	//       * 
	//      ***
	//     *****
	// 	  *******
	//   *********
	//    *******
	//     *****
	//      ***
	//	     * 
	//int n = 0;
	//printf("请输入打印的行数(只能输入奇数)");
	//scanf("%d", &n);
	//int row = 0;
	//int col = 0;
	//for (int row = 0; row < (n+1)/2; ++row)//上半部分
	//{
	//	for (int col = (n-1)/2; col > row; --col)
	//	{
	//		printf(" ");
	//	}
	//	for (int col = 0 ; col < 2*row+1; ++col )
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int row = 0; row < (n - 1)/2 ; ++row)//下半部分
	//{
	//	for (int col = 0; col < 2*row+1 ; col = col+2)
	//	{
	//		printf(" ");
	//	}
	//	for (col = n - 2; col > 2*row ; --col)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//int a = 1;//一角
	//int b = 2;//两角
	//int c = 5;//五角
	//int count = 0;
	//for (c = 0; c <= 10; c = c + 5)
	//{
	//	for (b = 0; b <= 10; b = b + 2)
	//	{
	//		for (a = 0;a <= 10;++a)
	//		{
	//			if (a + b + c == 10)
	//			{
	//				++count;					
	//			}
	//		}
	//	}
	//}
	//printf("%d", count);
	
	//int num = 0;
	//int factor = 0;
	//scanf("%d", &num);
	//for (factor = 1; factor < num; ++factor)
	//{
	//	if (num % factor == 0)
	//	{
	//		printf("%d\n", factor);
	//	}
	//}
	//printf("%d\n", num);

	//int day = 0;
	//int sum = 1;
	//for (day = 1; day < 10; ++day)
	//{
	//	sum = 2 * (sum + 1);
	//}
	//printf("%d\n", sum);

	//int i = 0;
	//int sum = 0;
	//int arr[10] = { 0,10,20,12,30,15,35,36,15,45 };
	//for (int i = 0; i < 10; ++i)
	//{
	//	if (arr[i] < 30)
	//	{
	//		sum = sum + arr[i];
	//	}		
	//}
	//printf("%d", sum);
	
	//int a[10] = { 0 };
	//int b[9] = { 0 };
	//int num = 0;
	//int i = 0;
	//printf("请输入10个整数:\n");
	//for (int i = 0; i < 10; ++i)
	//{
	//	scanf("%d", &a[i]);
	//}
	//for (int i = 0; i < 9; ++i)
	//{
	//	++num;
	//	b[i] = a[i] * a[i + 1];
	//	printf("%-3d ", b[i]);
	//	if (num % 3 == 0)
	//	{
	//		printf("\n");
	//	}
	//}




	//int a[10] = { 1,2,1,2,1,2,1,2,1,2 };
	//int qi = 0;
	//int j = 0;
	//int b[9] = { 0 };
	//for ( i = 0; i < 10; ++i)
	//{
	//	//for (j = 0; j < 9; ++j)
	//	//{
	//		b[j] = (a[i]) * (a[i + 1]);
	//	//}
	//					
	//	//printf("%d\n", b[j]);
	//}
	//for (int j = 0; j < 9; ++j)
	//{
	//	printf("%d\n", b[j]);

	//}
	//	//for (j = 0; j < 9; ++j)
	////{
	////	printf("%d", b[j]);
	////	if ((j + 1) % 3 == 0)
	////	{
	////		printf("\n");
	////	}
	////}
	int i = 0;
	int j = 0;
	int arr[3][3] = { 0,2,4,1,4,5,3,4,2 };
	for()
	printf("%d", arr[i][j]);

	system("pause");
	return 0;
}