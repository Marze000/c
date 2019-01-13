#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	////打印下列图型
	////*****
	//// *****
	////  *****
	////   *****
 //	//    .....
	//int row = 0;
	//int col = 0;
	//int n = 1;
	//printf("请输入要打印的行数\n");
	//scanf("%d", &n);
	//for (row = 1; row <= n; ++row)
	//{
	//	for (int col = 1; col < row; ++col)
	//	{
	//		printf(" ");
	//	}		
	//	printf("*****");		
	//	printf("\n");
	//}

	//int a = 56;
	//printf("%o\n", a);
	//printf("%0x\n", a);
	//char d;
	//float const a = 3.25;
	//float const b = 3.00;
	//float const c = 2.75;
	//
	//int m = 0;
	//float m1 = 0.05;
	//float m2 = 0.1;
	//float x = 0;//需要加油的量；
	//scanf("%f %c %c", &x,&m,&d );

	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;//第几天.
	int days = 0;
	scanf("%d %d %d", &year, &month, &day);
	if (month > 12 || day>31)
	{
		printf("输入非法：\n");
		system("pause");
	}
	switch (month)
	{
	case 1:
		days = 0;
		break;
	case 2:
		days = 31;
		break;
	case 3:
		days = 59;
		break;
	case 4:
		days = 90;
		break;
	case 5:
		days = 120;
		break;
	case 6:
		days = 151;
		break;
	case 7:
		days = 181;
		break;
	case 8:
		days = 212;
		break;
	case 9:
		days = 243;
		break;
	case 10:
		days = 273;
		break;
	case 11:
		days = 304;
		break;
	case 12:
		days = 334;
		break;
	default:
		printf("月份输入非法：\n");
	}	
	days = days + day;
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
	{
		++days;
	}
	printf("%d\n", days);


	system("pause");
	return 0;
}