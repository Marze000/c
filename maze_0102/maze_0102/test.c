#include<stdio.h>
#include<stdlib.h>

int main()
{
	//printf("%d", sizeof(char*));
	//char num = 10;
	//char* p = &num;
	//printf("%d\n", *p);
	////10 ->  00 00 00 0a
	//printf("%d\n", sizeof(int*));
	//int i = 0;
	//int a = 0;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	////a先=0再赋值给i ，此时a=0；由于短路求值，后面的bcd都不算了。最后a自加1
	//i = a++ && ++b && d++; i = 0;	
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	////a=1,b=2,c=3,d=4;&&
	//printf("%d\n", i); //i = 0;

	////a先等于0，再计算b,b自加1之后b=3 由于短路求值，后面的都不计算。
	//i = a++ || ++b || d++;  //i=1; a=1,b=3,c=3,d=4;
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	////a=1,b=3,c=3,d=4;||
	//printf("%d\n", i);	//i = 1;赋值在最后一步算的

	//int num =1;
	//int*p = num;//加取地址符
	//printf("%d\n", *p);
	////解引用空指针导致程序崩溃。
	////地址必须先申请再使用。否则就是无效指针，有效指针才能解引用
	////无效指针为未定义行为，空指针为无效指针中的一种

	//int* p = NULL;//宏 ，空指针
	
	//int num = 10;
	//char* p = &num;
	//printf("%d",*p);
	//int* ,char*不能随便转换

	//int* p = NULL;
	//printf("%d\n", p );
	////指针加减整数
	//int n = 0x11223344;
	//char* p = (char*)&n;
	//printf("%x", *p);//

	//int arr[] = { 0,1,3,4 };
	//printf("%p\n", arr);== printf("%p",&arr);
	//printf("%p\n", &arr[0]);
	//数组名的地址和首元素的地址是一样的

	//int arr[4] = { 0,1,2,3 };
	//int* p1 = arr;
	//int* p2 = &arr[2];//int* p2 = arr + 2;
	//printf("%d\n", p2 - p1);
	//指针的操作除了解引用外，其他的操作都是弊大于利。
	
	//指针数组：是一个数组。int* arr[4] = {0，1，4，7}；非常有用
	//数组指针：是一个指针。int(*arr)[4]= {0, 1, 2, 3};用处不大，在面试中有的
	
	//int arr[4] = { 1,2,3,4 };
	//printf("%p\n", arr); //int*
	//printf("%p\n", &arr);//数组指针 （int*) [4]

	

	system("pause");
	return 0;
}