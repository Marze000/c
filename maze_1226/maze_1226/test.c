#include<stdio.h>
#include<stdlib.h>


//�����ݹ�Ĵ�ӡ���֡�
void PrintNum(int num)
{
	if (num > 9)
	{
		PrintNum(num / 10);
	}
	printf("%d ", num % 10);
}

//ѭ����һ���ַ�����ĳ��ȡ�
int strlen(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		++i;
	}
	return i;
}

//�ݹ麯�����ַ����ĳ���
int Strlen(char arr[])
{
	if (arr[0] == '\0')
	{
		return 0;
	}
	return 1 + Strlen(arr+ 1);
}

//����ѭ��������׳ˡ�
int factor(int n)
{
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}

//�ݹ麯����׳ˡ�
int Factor(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * Factor(n - 1);
}

//�ݹ�˼����쳲���������
int fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

//ѭ��˼����쳲���������
int Fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	long long last1 = 1;//��i-1��
	long long last2 = 1;//��i-2��
	long long sum = 0;
	for (int i = 3; i <= n;++i)
	{
		sum = last1 + last2;
		//����last1,last2
		last2 = last1;
		last1 = sum;
	}
	return sum;
}


//���������������򣬺������ǵݹ�͵ݹ��ʵ�֣��ݹ��ѭ����


//ͨ������£�ʹ��ѭ����Ч�ʣ�ʱ��죬�ռ䣨�ڴ棩С���ձ���ڵݹ�

int main()
{



	//printf("%lld", Fib(100));

	//printf("%d", fib(40));//�ظ�����ļ�����̫��

	//printf("%d", Factor(5));

	//printf("%d", factor(5));

	//char arr[] = "abcde";

	//printf("%d\n", Strlen(arr));

	//printf("%d\n", strlen(arr));

	//PrintNum(1234);//��ӡ����1234

	system("pause");
	return 0;
}