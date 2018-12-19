#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int to_find = 5;
	int left = 0;
	int right = 9;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < to_find)
		{
			left=mid+1;
		}
		else if (arr[mid] > to_find)
		{
			right = mid - 1;
		}
		else
		{
			break;
		}
	}
	if (left <= right)
	{
		printf("找到了,下标为：%d\n", mid);
	}
	else
	{
		printf("没找到\n");
	}

	system("pause");
}