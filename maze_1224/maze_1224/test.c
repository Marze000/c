#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Menu()
{
	printf("=========================\n");
	printf("======1.��ʼ������=======\n");
	printf("======2.��������=========\n");
	printf("======3.�������=========\n");
	printf("======4.����=============\n");
	printf("=========================\n");
}

void init(int a[])//ʵ��һ������init��ʼ�����顣
{
	int i = 0;
	printf("please put ten fingers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("��ʼ���������Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("�����ʼ���ɹ���\n");
	printf("\n");
}

void empty(int a[])//��ո����顣
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = 0;
		printf("%4d", a[i]);
	}
	printf("���������ɣ�\n");
	printf("\n");
}

void reverse(int a[])//ʵ�ֺ�����,�������Ԫ�صĵ�����
{
	int i = 0;
	printf("���ú������Ϊ��\n");
	for (i = 9; i >= 0; i--)
	{
		printf("%4d", a[i]);
	}
	printf("����������ɣ�\n");
	printf("\n");
}

int main()
{
	//����һ�����飬
	int arr[10];
	int num = 0;
	while (1)
	{
		Menu();
		printf("please put your choice:\n");
		scanf("%d", &num);
		if (num = 1)
		{
			 init(arr);//ʵ��һ������init������ʼ�����顢
		}
		if (num = 2)
		{
			 reverse(arr);//ʵ��reverse()�����������Ԫ�ص����á�
		}
		if (num = 3)
		{
			 empty(arr);//ʵ��empty()������顢
		}
		if (num = 4)
		{
			break;
		}
		else
		{
			printf("Put illeague!\n");
		}
	}

	system("pause");
	return 0;
}


