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
	
	//v1=rand()%100;代表取值在0-99
	//v2=rand()%100+1;代表取值在1-100
	//v3=rand()%30+1985;取值在1985-2014
	long long result = rand()%100+1;
	//之所以使用long long是怕随机数太大，int类型存贮不下
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
	srand(time(0));//srand()表示一个随机种子
	//time(0)表示当前时间，转换成以秒计算的数字
	//用当前时间减去1970年1月1号0时0分0秒
	while(1)
	{
		int choice = Menu();//调用Menu函数
		if (choice == 1)
		{
			Game();//表示游戏开始
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