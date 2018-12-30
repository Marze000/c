#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int n = 0x0011223344;
	//char* pc = (char*)&n;
	//char* pi = &n;


	//*pc = 0x55;
	//*pi = 0;

	//printf("%p\n", &pc);
	//printf("%p\n", &pi);


	//int n = 10;
	//char* pc = (char*)&n;
	//int* pi = &n;

	//printf("%p\n", &n);
	//printf("%p\n", pc);     //pc取地址的时候把n的类型转换为char型，则地址向右移动一位，
	//printf("%p\n", pc + 1); // 位置也移动一位，相邻字符位置差一个字节。
	//printf("%p\n", pi);    //n的类型是int型，相邻的字符位置差4个字节
	//printf("%p\n", pi+1);
    ////打印	
	////004FFD74   n的地址
	////004FFD74   字符之间差1个字节
	////004FFD75
	////004FFD74	 int 整形之间差4个字节
	////004FFD78



	//int a = 10;
	//int* p = &a;
	//return 0;
	
	system("pause");
	return 0;
}