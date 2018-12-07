//将数组A中的内容和数组B的内容进行交换(数组一样大)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int i, t;
	printf("arr1=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
		
	}
	printf("new arr1=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("new arr2=");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//计算1/1-1/2+1/3-1/4....+1/99-1/100的值
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	double sum = 0.0, temp = 0.0;
	for (i = 1; i <= 100; i++)
	{
		temp = pow(-1, i + 1);//使用pow函数得加入math.h头文件，pow(x,y)其中x为底数，y为指数。
		sum = sum + temp * 1 / i;
	}
	printf("sum is %f\n", sum);
	printf("\n");
	system("pause");
	return 0;
}

//编写程序数一下从1-100出现多少次9
#include<stdio.h>
#include<stdlib.h>
 int main()
{
	 int i = 0;
	 int j = 0;
for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 9 == 0)
			j++;
	}
	printf("%d\n", j);
	printf("\n");
	system("pause");
	return 0;
}








