#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Menu()
{
	printf("=====================\n");
	printf("||  1.star game    ||\n");
	printf("||  2.game over    ||\n");
	printf("=====================\n");
	printf("please put your choice:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game()
{
	
	//v1=rand()%100;����ȡֵ��0-99
	//v2=rand()%100+1;����ȡֵ��1-100
	//v3=rand()%30+1985;ȡֵ��1985-2014
	long long result = rand()%100+1;
	//֮����ʹ��long long���������̫��int���ʹ�������
	int a = 0;
	while (a<10)
	{
		++a;
		if (a > 10)
		{
			break;
		}
		printf("please put a finger that from 1 to 100:");
		int num = 0;
		scanf("%d", &num);
		if (num > result)
		{
			printf("high!\n");
		}
		else if (num < result)
		{
			printf("low!\n");
		}
		else
		{
			printf("you are right");
			break;
		}
	}
	printf("game over\n");

}

int main()
{
	srand(time(0));//srand()��ʾһ���������
	//time(0)��ʾ��ǰʱ�䣬ת����������������
	//�õ�ǰʱ���ȥ1970��1��1��0ʱ0��0��
	while(1)
	{
		int choice = Menu();//����Menu����
		if (choice == 1)
		{
			Game();//��ʾ��Ϸ��ʼ
		}
		else if (choice == 2)
		{
			printf("game over\n");
			break;
		}
		else
		{
			printf("please put correct word:\n");
		}
	}
	system("pause");
}