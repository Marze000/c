#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int Menu()
{
	printf("=======================\n");
	printf("    1.开始游戏\n");
	printf("    2.结束游戏\n");
	printf("=======================\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game()
{
	//程序输入一个[1,100]的随机数
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("请输入一个数字进行比较：\n");
		int num = 0;
		scanf("%d", &num);
		if (num > result)
		{
			printf("高了!\n");
		}
		else if (num < result)
		{
			printf("低了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{



	////设置随机种子，只要随机种子不同那么序列就不同；
	//srand(time(0));//代表时间一直在变化
	//while (1)
	//{
	//	int choice = Menu();
	//	if (choice == 1)
	//	{
	//		//开始游戏
	//		Game();
	//	}
	//	else if (choice == 2)
	//	{
	//		//结束游戏
	//		printf("游戏结束！\n");
	//		break;
	//	}
	//	else
	//		printf("非法输入！\n");
	//}





	////三次输入密码，最多输入三次，
	////密码正确则提示登录成功，密码错误则提示密码错误，请重新输入，
	////最多输入三次，三次过后则退出程序。
	//int i = 0;
	//for (; i < 3; ++i)
	//{
	//	printf("请输入密码：");
	//	char password[1024] = { 0 };//初始化password
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		break;
	//	}
	//	printf("密码错误，请重新输入！\n");
	//}
	//if (i < 3)
	//{
	//	printf("登录成功！\n");
	//}
	//else(printf("登录失败！\n"));
	system("pause");
}