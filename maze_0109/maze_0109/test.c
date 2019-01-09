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
		//cur��ÿ����һ��ѭ���ȽϵĴ���
		//��һ��ѭ������������Σ��ڶ���ѭ����cur��һ�����εݼ���ȥ
		for (int cur = size-1; cur > bound; --cur)
		{
			//��������,��֮����Ѵ�С���ŸĶ����Ϊ����
			if (is_desc == 0)
			{
				if (arr[cur - 1] < arr[cur])//����
				{
					// ǰһ�� > ��һ��ͽ���
					Swap(&arr[cur - 1], &arr[cur]);
				}
			}
			else if (is_desc == 1)
			{
				if (arr[cur - 1] > arr[cur])//����
				{
					// ǰһ�� > ��һ��ͽ���
					Swap(&arr[cur - 1], &arr[cur]);
				}
			}
			
		}
	}
}

int main()
{	
	int arr[] = { 2,3,8,7,6,5 };
	BubbleSort(arr,6,1);//���һλ�����ж������ǽ���
	// 0 ���� ,1����
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", arr[i]);
	}

	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}