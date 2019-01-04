#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return  DigitSum(n / 10) + (n % 10);
}

int digit_sum_fuzhengshu(int n)
{
	if (n > -10)
	{
		return -n;
	}
	return digit_sum_fuzhengshu(n/10) + (-n%10);
}

int digit_z_f_sum(int n)
{
	if (n > 0)
	{
		if (n < 9)
		{
			return n;
		}
		return digit_z_f_sum(n / 10) + (n % 10);
	}
	else
	{
		if (n > -10)
		{
			return -n;
		}
		return digit_z_f_sum(n / 10) + (-n % 10);
	}
}

//编写一个函数 reverse_string(char * p)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
char* reverse_string(char* p)
{
	int n = 0;//共有n个字符，不包括‘\0’
	char tmp;
	char* q;
	q = p;//把p赋值给q，给p建立副本。
	while (*p != 0)
	{
		n++;
		p++;
	}//求出字符串共有几个字符。
	if (n > 1)
	{
		tmp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		reverse_string(q + 1);
		q[n - 1] = tmp;
	}
	return q;
}

int main()
{
	printf("put some words :\n");
	//char* string = '\0';
	char p[] = "ma ze zhen de he nu li ";
	//scanf("%s", &p);//只能输入连续的字符串。
	printf("原字符串为:%s\n", p);
	printf("逆字符串为:%s\n", reverse_string(p));

	//char arr[] = "\0";
	//char arr[] = "\0";
	//getchar();
	//scanf("%s", &arr);
	//char ch = '\0';
	//while ((ch=getchar())!= '\0')
	//{
	//	char arr[] = " ch" ;
	//	int left = 0;
	//	int right = strlen(ch) - 1;
	//	while (left <= right)
	//	{
	//		char tmp =  arr[left];
	//		arr[left] = arr[right];
	//		arr[right] = tmp;
	//		++left;
	//		--right;
	//	}
	//}
	//printf("%s", ch);

	//给定字符串将字符串逆序。
	//char arr[] = "hello world";
	//int left = 0;
	//int right = strlen(arr) - 1;
	//while (left <= right)
	//{
	//	char tmp = arr[right];
	//	arr[right] = arr[left];
	//	arr[left] = tmp;
	//	++left;
	//	--right;
	//}
	//printf("%s", arr);
	//char string='\0';
	//scanf("%s", &string);
	//printf("%s", reverse_string(string));
	//n4 = n % 1000;
	//n3 = (n / 10) % 10;

	//printf("put a finger that big zero");
	//
	//scanf("%d", &n);
	//printf("%d+%d+%d+%d=%d\n", n1, n2, n3, n4, n);
	//printf("%d\n", DigitSum(n));
	//printf("%d", digit_z_f_sum(n));
	//printf("%d\n", digit_sum_fuzhengshu(n));
	//printf("%d", -23 / 10);//-2
	//printf("%d", -23 % 10);//-3
	system("pause");
	return 0;
}