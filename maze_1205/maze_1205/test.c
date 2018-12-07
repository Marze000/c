#include<stdio.h>
#include<stdlib.h>

//定义素数和这个函数
int IsPrime(int num)
{
	if (num==0||num == 1)
	{
		return 0;
	}
	if (num == 2)
	{
		return 1;
	}
	for (int i = 2; i < num; ++i)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int PrintMulti()//定义乘法口诀表的函数
{
	for (int row = 1; row <= 9; ++row)
	{
		for (int lin = 1; lin <= row; ++lin)
		{
			printf(" %d*%d=%2d", lin, row, row*lin);
		}
		printf("\n");
	}
}

int IsLeapyear(int year)
{
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	if (year % 4 == 0)
	{
		return 1;
	}
	return 0;
	
	
}

int main()
{




	//打印1000-2000闰年
	//for (int year = 1000; year <= 2000; ++year)
	//{
	//	if (IsLeapyear(year))//调用上面所定义的函数
	//		printf(" %d\n", year);
	//}


	//PrintMulti();//打印乘法口诀表

	//printf("%d\n", IsPrime());判断一个数是否是素数
	//for (int i = 100; i <= 200; ++i)
	//{
	//	if (IsPrime(i) == 1)  //调用函数
	//	{
	//		printf("%d\n", i);
	//	}
	//}

	system("pause");
}
