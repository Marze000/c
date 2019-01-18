#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//const限定的对象通常是运行时不能被赋值的对象，因此用const限定
	//的对象的值并不是一个真正的常量，不能用作数值维度等！
	//const int n = 10;
	//int a[n];
	//不能使用const 定义的常量的来做数组的维度
	
	//volatile 的语法和const相反，这个修饰的变量可以随便的修改
	//说明一个变量的实质是在向编译程序的描述变量的类型，但并不为变量分配存贮空间
	//不应该在头文件中定义变量,因为一个头文件可能会被一个程序的许多源文件所包含。	
	
	//scanf中用%lf输入一个double类型的数据
	//在printf中却不能使用%lf输出double类型的数据，只能使用%f输出。
	//
	//char str1[20], str2[20];
	//int i;
	//printf("please input string1:\n");
	//gets(str1);
	//printf("please input string2:\n");
	//gets(str2);

	//i = strcmp(str1, str2);
	//if (i > 0)
	//{
	//	printf("str1>str2\n");
	//}
	//else if(i<0)
	//{
	//	printf("str2>str1\n");
	//}
	//else
	//{
	//	printf("str1 = str1\n");
	//}

	//printf("%d\n", str1);
	//printf("%d\n", str2);


	//char str[10];
	//gets(str);
	//strupr(str);
	//puts(str);

	// strupr.c
	//将小写字符转换成大写字符	
	//char s[] = "Copywrite 1999-2000 GGV Technologies";
	//char* s2 = _strupr(s);//把s数组中的字符串转换成大写并且返回s用来初始化s2
	//printf("%s\n", s2);
	//printf("%s\n", s); //这个时候s和s2是相等的，指向同一个字符串。
	
	// 注意：不能使用以下方式调用
	// char* p="for test";
	// strupr(p);
	// 这样调用会产生异常，原因是：指针p 这里定义的是常量字串，而常量字串我们知道是不可以更改的
	
	//int i = 0;
	//int j = 0;
	//int arr[2][3] = { (0,1,2),(3,4,5) };
	//for (i = 0; i < 2; ++i)
	//{
	//	for (j = 0; j < 3; ++j)
	//	{
	//		printf("%-4d", arr[i][j]);			
	//	}
	//	printf("\n");
	//}

	//int arr[][4] = { 1,2,3,4,5,6,7,8};
	//for (j = 0; j < 2; ++j)
	//{
	//	for (i = 0; i < 4; ++i)
	//	{
	//		printf("%-3d", arr[j][i]);			 			
	//	}
	//	printf("\n");
	//}

	//int i = 0;
	////char arr[12] = { 'a','s','f','d','d','d' };
	//char arr[12];
	//for (i = 0; i < 12; ++i)
	//{
	//	scanf("%c ", &arr[i]);
	//}
	//for (i = 0; i < 12; ++i)
	//{
	//	printf("%c  ", arr[i]);
	//}

	//int i = 0;
	//char arr[12];
	//scanf("%s", arr);
	////scanf("%s", &arr);
	////该形式是错误的，虽然结果一样，但运行大有不同
	//printf("%s", arr);

	//字符串函数
	//puts  gets strcat strcpy strcmp  strlen strlwr strupr

	char c[] = "hello";
	puts(c);
















	system("pause");
	return 0;
}