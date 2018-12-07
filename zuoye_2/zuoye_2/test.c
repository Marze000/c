#include<stdio.h>
#include<stdlib.h>

int MaxGongyue(int x, int y)
{
	int max_gongyue = 0;
	for (int i = 1; i <= x && i <= y; ++i)
	{
		if (x%i == 0 && y%i == 0)
		{
			max_gongyue = i;
		}
	}
	return max_gongyue;
}

int main()
{
	printf("%d\n",MaxGongyue(10,20));





	//求出数组中的最大值；
	//int arr[] = { 0,5,6,45,7,12,48,65 };
	//int max = arr[0];
	//for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); ++i)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d", max);
	system("pause");
}