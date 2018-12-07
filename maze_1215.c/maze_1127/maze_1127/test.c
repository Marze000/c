//求两个数的最大公约数 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 12, b = 18, t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
flag:            //作为标记
	if (a%b == 0)
	{
		printf("%d", b);
	}
	else
	{
		t = a;
		a = b;
		b = t % b;
		goto flag;
	}
	system("pause");
	return 0;
}

//求两个数的最大公约数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, t;
	printf("请输入两个数：");
	scanf_s("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}	
flag:        
	if (a%b == 0)
	{
		printf("%d", b);
	}
	else
	{
		t = a;
		a = b;
		b = t % b;
		goto flag;
	}
	system("pause");
	return 0;
}

