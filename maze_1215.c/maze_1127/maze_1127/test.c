//�������������Լ�� 
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
flag:            //��Ϊ���
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

//�������������Լ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, t;
	printf("��������������");
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

