#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。

//	student a am i
//	i ma a tneduts
//	i am a student

void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	} 
}

void str_reverse(char* str)
{	
	int len = strlen(str);
	reverse(str, str + len - 1);  //全部逆置
	while (*str != '\0')
	{
		char* pos = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(pos, str - 1);    //每个单词的逆置
		if (*str != '\0')
		{
			str++;
		}
	}
}

//调整数组使奇数全部都位于偶数前面。

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

void odd_left(int* p1,int len)
{
	//p1首先代表最左边的指针，只有遇到偶数才指向后一位
	//p2首先代表最右边的指针，只有遇到奇数才指向前一位
	int* p2 = p1 + len - 1;
	while (p1 < p2)
	{
		while ((*p1 & 1) == 1)//等于1为偶数
		{
			++p1;
		}
		while ((*p2 & 1) == 0)//等于0为奇数
		{
			--p2;
		}
//		if (p1 < p2)
	//	{
			int tmp = *p1;
			*p1 = *p2;
			*p2 = tmp;
		//}
	}
	return;
}


int main()
{
	int arr[] = { 2,9,4,7,5,6,12,3,45,20,10 };
	int len = sizeof(arr)/sizeof(arr[0]);
	for (int j = 0; j < len; ++j)
	{
		printf(" %d ", arr[j]);
	}
	printf("\n");
	odd_left(arr,len);
	for (int i = 0; i < len; ++i)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
	








	//char str[] = "student a am i";
	//printf("原字符串为：%s\n", str);
	//str_reverse(str);
	//printf("翻转后的字符串为：%s\n", str);
	

	//	2.杨氏矩阵 
	//	有一个二维数组.
	//	数组的每行从左到右是递增的，每列从上到下是递增的.
	//	在这样的数组中查找一个数字是否存在。
	//	时间复杂度小于O(N);

	//数组：
	//	1 2 3
	//	2 3 4
	//	3 4 5

	//	1 3 4
	//	2 4 5
	//	4 5 6

	//	1 2 3
	//	4 5 6
	//	7 8 9

	system("pause");
	return 0;
}