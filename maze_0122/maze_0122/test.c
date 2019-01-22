//2.不使用（a + b） / 2这种方式，求两个数的平均值。

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//4.
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。

//	student a am i
//	i ma a tneduts
//	i am a student
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int num = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		num = num + ((value >> i) & 1)*pow(2, 31 - i);
//	}
//	return num;
//}

//通过位运算直接将取出的第一位左移31位，第二位左移30位，
//当然在这过程中要设置一个变量以便进行移位运算，
//经过循环将每一位都进行左移，最后得出的数的十进制就是25翻转后的数。

//unsigned int reverse_bit(unsigned int value)
//{
//	//int i = 0;
//	//for (int i = 32; i < 0; --i)
//	//{
//	//	value = value << i;
//	//}
//	unsigned int ret = 0;
//	int i = 0;
//	while (i < 32)
//	{
//		ret = ret<< 1;
//		ret = ret | (value >> i) & 1;
//		++i;
//	}
//	return ret;
//}

int main()
{

	//int value = 0;
	//int num = 0;
	//scanf("%d", &value);
	//num = reverse_bit(value);
	//printf("%u\n", num);
	////该方法不能计算一个数为奇数一个数为偶数
	//int a = 0;
	//int b = 0;
	//printf("please put a and b:\n");
	//scanf("%d %d", &a, &b);
	//a = a + (b - a) / 2;
	//printf("a,b平均数是：%d\n", a);
	
	//移位
	//int a = 0;
	//int b = 0;
	//float c = 0.5;
	//printf("please inter a and b:\n");
	//scanf("%d %d", &a, &b);
	////printf("the average is %d",(b >>1)+(a >>1));
	////printf("%d , %d", a >> 1, b >> 1);
	////printf("%d", a + (b - a) / 2);
	////printf("%d",(a&b)+(a^b)>>1);
	//if ((a % 2 == 1) && (b % 2 == 1))
	//{
	//	printf("%d\n", 1 + (a >> 1) + (b >>1 ));
	//}
	//else if (((a % 2 == 0) && (b % 2 == 1)) || ((a % 2 == 1) && (b % 2 == 0)))
	//{
	//	printf("%f\n", (b >> 1) + (a >> 1) + c);
	//}
	//else
	//{
	//	printf("%d\n", (b >> 1) + (a >> 1));
	//}

	//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。

//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832



	//unsigned int ret = 0;
	//int i = 0;
	//while (i < 32)
	//{
	//	ret = ret << 1;   //乘以2
	//	ret = ret | （(value >> i) & 1）;
	//
	//                   3332 2222 2222 2111 1111 1110 0000 0000
 	//                   2109 8765 4321 0876 5432 1909 8765 4321
	//	++i;             0101 0100 0000 0000 0000 0000 0000 0000 //value
 	//}                  0001 0101 0100 0000   
	//return ret;        0010 1100   
	//                   0000 0001   
	//int num = 0;       0000 0000   
	//int value = 0;     0001 0110
	//scanf("%d", &value);    0000 0001   
	//num = reverse_bit(value);
	//printf("%lu\n", num);
	
	//3.编程实现：
	//	一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
	//	请找出这个数字。（使用位运算）

	int arr[9] = { 1, 2,2, 4, 1,2, 2, 3, 3 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sz==7
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("出现一次的数是：%d\n", ret);     

	//0000 0101 00//随机的一个数值
	//0000 0000 0101//5
	//0000 0101 0011//和5异或后的数值
	//0000 0000 0100//4
	//0000 0101 0111//和4异或后的数值
	//0000 0000 0101//5
	//0000 0101 0010

























	system("pause");
	return 0;
}