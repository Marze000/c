#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_arr1(int arr[3][5],int row ,int col)
{
	int i = 0;
	int j = 0;
	for (i; i < row; ++i)
	{
		for (j; j < col; ++j)
		{
			printf("%d\n", arr[i][j]);
		}
		printf("\n");
	}
}


	//比特科技
	//	思考：
	//	当一个函数的参数部分为一级指针的时候，函数能接收什么参数？ 比如：
	//	二级指针传参
	//	思考：
	//	当函数的参数为二级指针的时候，可以接收什么参数？
	//一级指针p，传给函数
		
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{	
		printf("%d\n", *(p + i));
	}
}

void test(char** p)
{

}

int main()
{

	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));

	//char arr[] = { 'a','b','c','d','e','f' };
	char* arr[] = "abcdef";
	//printf("%d\n", strlen(arr1 + 0));
	//printf("%d\n",strlen( &arr1+1));//wei ding yi
	//printf("%d\n", strlen(&arr1[0] + 1));
	printf("%d", strlen(&arr));

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));

	//char c = 'b';
	//char* pc = &c;
	//char** ppc = &pc;
	//char* arr[10];
	//test(&pc);//ok
	//test(ppc);//ok
	//test(arr);//ok
	//test(pc);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	//int *p = arr;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//print(p, sz);

	//int arr[3][5] = { 0,1,2,3,4,5,6,7,8,9 };
	//printf(arr, 3, 5);

	system("pause");
	return 0;
}