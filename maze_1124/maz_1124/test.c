//打印100—200之间的素数
#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
			printf(" %d ", i);
	}



//打印乘法口诀表
#include<stdio.h>
#include<stdlib.h>
	int i,j;
	for (i = 1; i <= 9; i++)        /*控制行数*/
	{
		for (j = 1; j <= i; j++)   /*控制列数*/
 		{
			printf("%d*%d=%2d ", j, i, j*i);
		if (i == j)
			printf("\n");
		}
	}
	system("pause");
	return 0;


//判断1000-2000的闰年年份
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf(" %d ", year);
	}

	printf("\n");
	system("pause");
	return 0;
}

 
//交换两个数的值
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, b = 2, t;
	printf("a=%d,b=%d\n", a, b);
	  t = a;
	  a = b;
	  b = t;
	printf("a=%d,b=%d\n",a,b);
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	   a = a + b;
       b = a - b;
	   a = a - b;
	printf("a=%d,b=%d\n", a,b);
	printf("\n");
    system("pause");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{

	system("pause");
	return 0;
}




