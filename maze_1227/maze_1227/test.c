#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//��дһ������ʵ��n^k
int zhishu(int n,int k)
{
	int y = 1;
	int i = 1;
	if (k == 0)
	{
		return 1;
	}
	for (; i <= k; ++i)
	{
		y = y * n;
	}
	
	return y;
}

//ʹ�õݹ�ʵ��n^k
int ZhiShu(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	if (k == 0)
	{
		return 1;
	}

	return n * ZhiShu(n, k - 1);

}

int main()
{
	int n = 0;
	int k = 0;
	printf("������һ��������ָ����\n");
	scanf("%d %d", &n,&k);

	//printf("%d", zhishu(n, k));
	//printf("%d", ZhiShu(n, k));
	system("pause");
	return 0;
}