#include<stdio.h>
#include<stdlib.h>


//�ݹ���׳�
int jiechen(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * jiechen(n - 1);
}

//ѭ����׳�
int jiechen_xun(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; ++i)
	{
		ret = ret * i;
	}
	return ret;
}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int strlen_di(char arr[])
{
	if (arr[0] == '\0')
	{
		return 0;
	}
	return 1 + strlen_di(arr + 1);
}


int strlen_xun(char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		++i;
	}
	return i;

}


int main()
{


	//char arr[] = "maze shi yige aixuexi de ren";
	//printf("%d\n", strlen_xun(arr));
	//printf("%d\n", strlen_di(arr));
	//printf("%d\n", jiechen(10));
	//printf("%d\n", jiechen_xun(10));
	system("pause");
	return 0;
}