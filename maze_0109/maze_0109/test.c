#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


void BubbleSort(int* arr , int size ,int is_desc )
{
	int bound = 0;
	for (; bound < size; ++bound)
	{
		//cur是每进行一次循环比较的次数
		//第一次循环，它进行五次，第二次循环，cur减一，依次递减下去
		for (int cur = size-1; cur > bound; --cur)
		{
			//升序排序,反之如果把大小符号改动则变为降序
			if (is_desc == 0)
			{
				if (arr[cur - 1] < arr[cur])//升序
				{
					// 前一项 > 后一项，就交换
					Swap(&arr[cur - 1], &arr[cur]);
				}
			}
			else if (is_desc == 1)
			{
				if (arr[cur - 1] > arr[cur])//升序
				{
					// 前一项 > 后一项，就交换
					Swap(&arr[cur - 1], &arr[cur]);
				}
			}
			
		}
	}
}

int main()
{	
	int arr[] = { 2,3,8,7,6,5 };
	BubbleSort(arr,6,1);//最后一位数字判定升序还是降序。
	// 0 降序 ,1升序
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}

	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}