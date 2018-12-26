#include<stdio.h>
#include<stdlib.h>


//函数递归的打印数字。
void PrintNum(int num)
{
	if (num > 9)
	{
		PrintNum(num / 10);
	}
	printf("%d ", num % 10);
}

//循环求一个字符数组的长度。
int strlen(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		++i;
	}
	return i;
}

//递归函数求字符串的长度
int Strlen(char arr[])
{
	if (arr[0] == '\0')
	{
		return 0;
	}
	return 1 + Strlen(arr+ 1);
}

//定义循环函数求阶乘。
int factor(int n)
{
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}

//递归函数求阶乘。
int Factor(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * Factor(n - 1);
}

//递归思想求斐波那契数列
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

//循环思想求斐波那契数列
int Fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	long long last1 = 1;//第i-1项
	long long last2 = 1;//第i-2项
	long long sum = 0;
	for (int i = 3; i <= n;++i)
	{
		sum = last1 + last2;
		//更新last1,last2
		last2 = last1;
		last1 = sum;
	}
	return sum;
}


//二叉树，先序，中序，后续（非递归和递归的实现）递归比循环简单


//通常情况下，使用循环的效率（时间快，空间（内存）小）普遍高于递归

int main()
{



	//printf("%lld", Fib(100));

	//printf("%d", fib(40));//重复运算的计算量太大。

	//printf("%d", Factor(5));

	//printf("%d", factor(5));

	//char arr[] = "abcde";

	//printf("%d\n", Strlen(arr));

	//printf("%d\n", strlen(arr));

	//PrintNum(1234);//打印数字1234

	system("pause");
	return 0;
}