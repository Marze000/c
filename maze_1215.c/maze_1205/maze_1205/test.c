#include<stdio.h>
#include<stdlib.h>

//�����������������
int IsPrime(int num)
{
	if (num==0||num == 1)
	{
		return 0;
	}
	if (num == 2)
	{
		return 1;
	}
	for (int i = 2; i < num; ++i)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int PrintMulti()//����˷��ھ���ĺ���
{
	for (int row = 1; row <= 9; ++row)
	{
		for (int lin = 1; lin <= row; ++lin)
		{
			printf(" %d*%d=%2d", lin, row, row*lin);
		}
		printf("\n");
	}
}

int IsLeapyear(int year)
{
	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}	
	}
	if (year % 4 == 0)
	{
		return 1;
	}
	return 0;
	
	
}

int main()
{




	//��ӡ1000-2000����
	//for (int year = 1000; year <= 2000; ++year)
	//{
	//	if (IsLeapyear(year))//��������������ĺ���
	//		printf(" %d\n", year);
	//}


	//PrintMulti();//��ӡ�˷��ھ���

	//printf("%d\n", IsPrime());�ж�һ�����Ƿ�������
	//for (int i = 100; i <= 200; ++i)
	//{
	//	if (IsPrime(i) == 1)  //���ú���
	//	{
	//		printf("%d\n", i);
	//	}
	//}

	system("pause");
}
