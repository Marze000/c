#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


//void BubbleSort(int* arr , int size ,int is_desc )
//{
//	int bound = 0;
//	for (; bound < size; ++bound)
//	{
//		//cur是每进行一次循环比较的次数
//		//第一次循环，它进行五次，第二次循环，cur减一，依次递减下去
//		for (int cur = size-1; cur > bound; --cur)
//		{
//			//升序排序,反之如果把大小符号改动则变为降序
//			if (is_desc == 0)
//			{
//				if (arr[cur - 1] < arr[cur])//升序
//				{
//					// 前一项 > 后一项，就交换
//					Swap(&arr[cur - 1], &arr[cur]);
//				}
//			}
//			else if (is_desc == 1)
//			{
//				if (arr[cur - 1] > arr[cur])//升序
//				{
//					// 前一项 > 后一项，就交换
//					Swap(&arr[cur - 1], &arr[cur]);
//				}
//			}
//			
//		}
//	}
//}


typedef int(*Cmp)(int, int);//函数指针
//int(*)(int a ,int b)

void BubbleSort(int* arr, int size, Cmp cmp)
{
	int bound = 0;
	for (; bound < size; ++bound)
	{
		//cur是每进行一次循环比较的次数
		//第一次循环，它进行五次，第二次循环，cur减一，依次递减下去
		for (int cur = size - 1; cur > bound; --cur)
		{
			if (cmp(arr[cur-1],arr[cur])== 0)
			{
				//等于0的时候，两元素不符合规则，则调换位置
				Swap(&arr[cur - 1], &arr[cur]);				
			}
		}
	}
}

int less(int x, int y)//升序
{
	//x 位前一位数字，y位后一位数字，如果x<y则不调换位置
	return x < y ? 1 : 0;	
}

int Gretter(int x, int y)//降序
{
	return x < y ? 0 : 1;
}

int absless(int x, int y)//绝对值升序排列
{
	return abs(x) < abs(y) ? 1 : 0;
	//if (abs(x) < abs(y))
	//{
	//	return 1;
	//}
	//return 0;
}

int main()
{	
	//int arr[] = { 2,-3,8,-7,6,5 };
	//BubbleSort(arr,6,absless);
	////第三个参数很灵活，可以随意调用用户自定义的函数。
	//
	//for (int i = 0; i < 6; ++i)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//int i = 0;
	//int a[] = { 1,2,3,4 };
	////sizeof判断元素所占的空间的字节
	////printf("%d\n", sizeof(a));//16
	////a是一个数组名，1个元素4个字节
	//
	////printf("%d\n", a[i]);
	//printf("%d\n", sizeof(a + 0));//数组名a+0之后会被隐式转换位指针,//32位系统下，为4
	//
	//printf("%d\n", sizeof(*a));//a转换为指针（隐式转换为首元素的指针），解引用得到的元素是1为int型
	//
	//printf("%d\n", sizeof(a + 1));//8 因为在64位操作系统下

	//printf("%d\n", sizeof(a[1]));//a[1]代表的元素是2int型，所占字节为4

	//printf("%d\n", sizeof(&a[1]));//得到2之后，取地址之后为一个指针，在64位操作系统是8

	//printf("%d\n", sizeof(&a));//数组名取地址是一个指针，称数组指针，在32位系统是4

	//printf("%d\n", sizeof(*&a));//16 先取地址得到的是数组指针，在解引用返回了数组。

	//printf("%d\n", sizeof(&*a));//8 先解引用得到的是1 int型，然后取地址得到一个指针。

	//printf("%d\n", sizeof(&a + 1));//8 a取地址位数组指针，数组指针加一为也为指针。

	//printf("%d\n", sizeof(&a[0]+1));//8 
	//只要计算指针，在32位系统下就为4.

	//char arr[] = { 'a','b','c','d','e','f' };

	//printf("%d\n",sizeof(arr));//6  字符数组不是字符串，没有‘\0’

	//printf("%d\n", sizeof(arr+0));//8 arr本来是一个数组名，加一变为指针。在64位操作系统是8

	//printf("%d\n", sizeof(*arr));//1 *arr取到的是a,a占一个字节 

	//printf("%d\n", sizeof(arr[1]));// 1 

	//printf("%d\n", sizeof(&arr));//8 数组名取地址得到一个数组指针，64位

	//printf("%d\n", sizeof(&arr+1));//8 取到地址后为数组指针，数组指针加一仍然为指针

	//printf("%d\n", sizeof(&arr[0]+1));//8 []得到了一个字符，字符取地址为字符指针，加一还是指针。


	//printf("%d\n", strlen(arr));//未定义行为， UB

	//printf("%d\n", strlen(arr+0));//未定义行为， UB 

	//printf("%d\n", strlen(*arr));//*arr得到的是一个字符，strlen对字符求长度，闪退。
	//strlen要求的参数是char*（指针），而*arr的类型是char（字符）,参数不同。

	//printf("%d\n", strlen(&arr));//未定义行为，&arr为数组指针和char*类型也不匹配

	//printf("%d\n", strlen(&arr+1));//同上

	//printf("%d\n", strlen(&arr[0]+1));// 未定义行为
	//字符数组如果不是字符串不要使用srtlen

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 字符串后面还有一个‘\0’，也算一个元素

	//printf("%d\n", sizeof(arr+0));//8 arr加0之后变为指针，在32为操作系统是4

	//printf("%d\n", sizeof(*arr));// 1

	//printf("%d\n", sizeof(arr[1]));// 1

	//printf("%d\n", sizeof(&arr));// 数组指针   8

	//printf("%d\n", sizeof(&arr+1));//同上  得到的是字符指针

	//printf("%d\n", sizeof(&arr[0]+1));//8  得到的类型是char*

	
	//printf("%d\n", strlen(arr));//6 strlen 算的是字符串的长度，而sizeof算的是字节数

	//printf("%d\n", strlen(arr+0));//arr数组转换为char*  +0或不加0都一样

	//printf("%d\n", strlen(*arr));//取到的是字符a,字符a的类型是char.未定义行为

	//printf("%d\n", strlen(arr[1]));//同上，取出的是一个字符b

	//printf("%d\n", strlen(&arr));//6 取地址得到一个数组指针，数组和char*不一样，
	//但数组指针得到数值和首元素一样，地址相同。

	//printf("%d\n", strlen(&arr+1));//数组指针加一跳过整个数组，指向最后面的元素的下一位，越界。

	//printf("%d\n", strlen(&arr[0]+1));//5  arr[0]首元素取地址得到的是char*
	//加一还是char*，但指针指向了b

	//printf("%d\n", strlen(&arr[1]+1));//4  arr[1]取到的是b，char*型，再加一指针指向c,剩余4个字符


	char* arr = "abcdef";
	//printf("%d", sizeof(arr));//8 arr代表的是指针

	//printf("%d", sizeof(arr+0));//8 （64位系统）

	//printf("%d", sizeof(*arr));//1 得到的是a字符，占一个字节

	//printf("%d", sizeof(arr[1]));//1

	//printf("%d", sizeof(&arr));//8 取地址得到的是一个二级指针

	//printf("%d", sizeof(&arr+1));// 8 同上

	//printf("%d", sizeof(&arr[0]+1));//8  首先a[0]得到一个a，取地址得到char*，再加一

	//printf("%d", strlen(arr));// 6

	//printf("%d", strlen(arr+1));//5 arr是char*,加一跳过一个字节

	//printf("%d", strlen(*arr));// 取到的是a,类型是char,strlen要求的是char*

	//printf("%d", strlen(arr[1]));//取到的是b,同上，未定义行为

	//printf("%d", strlen(&arr));//二级指针，得到的是char**














	system("pause");
	return 0;
}