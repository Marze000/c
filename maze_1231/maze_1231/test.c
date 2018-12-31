#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int Fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n-2);
}

int Fib_h(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	long long last1 = 1;//第i-1项
	long long last2 = 1;//第i-2项
	long long sum = 0;
	for (int i = 3; i <= n; ++i)
	{
		sum = last1 + last2;
		//更新last1,last2
		last2 = last1;
		last1 = sum;
	}
	return sum;

}


int main()
{




	//char a = 'b';
	//int* p = NULL;
	////printf("%d\n", !0);
	////printf("%d\n", !2);
	//a = -a;
	//p = &a;
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (a));
	//printf("%d", sizeof int);    //错误的表达式
	//printf("%d", sizeof (int));

	//char str1[] = "hehe";
	//char str2[] = "hehe";

	////strcmp()讨论字符的地址内容的大小。
	//if (strcmp(str1, str2) == 0)
	//{
	//	printf("yes");
	//}
	//else
	//{
	//	printf("no");
	//}
	//	

	//char* str1 = "hehe";
	//char* str2 = "hehe";

	//if (str1 == str2)
	//{
	//	printf("ok");
	//}
	//else
	//{
	//	printf("no");
	//}
	//int num = 1;
	//++num;
	////num=num+1;
	////return num;

	//num++;
	////int tmp=num;
	////num = num+1;
	////return tmp;

	//int num = 10;
	//++num;
	//num++;
	//printf("%d", num);
	//int x = 0;
	//printf("%x", ~x);	

	//int num = -1;
	//int count = 0;
	//for (int n = 0; n < 32; ++n)
	//{
	//	if (1 & (num >> n))//if(0x1<<n & num)这个条件也行的。
	//	{
	//		count++;
	//	}
	//}
	//printf("%d", count);
	//printf("%d", num >> 1);


	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	count++;
	//	num = num & (num - 1);//每执行一次二进制数字就会少一个1.直到num=0跳出循环。
	//}
	//printf("%d", count);


	
	//int a = 0x1;
	//a = a << 5;
	//printf("%d", a);
	
	
	////求一个整数存在内存中的二进制中1的个数，
	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 0)//判断最后一位数字是否是1，如果是的话则count+1；如果不是则num/2
	//	{
	//		++count;
	//	}
	//	num = num / 2;//计算最后一位的前一位是否是1；
	//}
	//printf("%d", count);//不能打印负数


	////按位异或：二进制上的数字相同则取0，不同取1
	//int a = 10;//10的二进制为   0 1010
	//int b = 20;//20的二进制为   1 0100
	//a = a ^ b;              //a=1 1110  
	//b = a ^ b;              //b=0 1010
	//a = a ^ b;              //a=1 0100 
	//printf("%d %d", a, b);


	//int i = 10;
	//int num = 0;
	//int ret = 0;
	//ret = num | (i << i);

	//ret = num & ~(i << i);
	//printf("%lld", Fib_h(100));

	//使用递归求第n个斐波那契数
	//int n = 0;
	//int ret = 0;
	//printf("输入求的第n个斐波那契数");
	//scanf("%d", &n);
	//ret = Fib(n);
	//printf("%d\n", ret);

	system("pause");
	return 0;
}