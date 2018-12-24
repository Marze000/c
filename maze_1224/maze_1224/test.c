#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Menu()
{
	printf("=========================\n");
	printf("======1.初始化数组=======\n");
	printf("======2.逆置数组=========\n");
	printf("======3.清空数组=========\n");
	printf("======4.结束=============\n");
	printf("=========================\n");
}

void init(int a[])//实现一个函数init初始化数组。
{
	int i = 0;
	printf("please put ten fingers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("初始化后的数组为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("数组初始化成功！\n");
	printf("\n");
}

void empty(int a[])//清空该数组。
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = 0;
		printf("%4d", a[i]);
	}
	printf("清空数组完成！\n");
	printf("\n");
}

void reverse(int a[])//实现函数的,完成数组元素的调换。
{
	int i = 0;
	printf("逆置后的数组为：\n");
	for (i = 9; i >= 0; i--)
	{
		printf("%4d", a[i]);
	}
	printf("数组逆置完成！\n");
	printf("\n");
}

int main()
{
	//创建一个数组，
	int arr[10];
	int num = 0;
	while (1)
	{
		Menu();
		printf("please put your choice:\n");
		scanf("%d", &num);
		if (num = 1)
		{
			 init(arr);//实现一个函数init（）初始化数组、
		}
		if (num = 2)
		{
			 reverse(arr);//实现reverse()函数完成数组元素的逆置。
		}
		if (num = 3)
		{
			 empty(arr);//实现empty()清空数组、
		}
		if (num = 4)
		{
			break;
		}
		else
		{
			printf("Put illeague!\n");
		}
	}

	system("pause");
	return 0;
}


