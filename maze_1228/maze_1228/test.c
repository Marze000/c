#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//define语句后面不可以加分号
#define LINE 3

char g_broad[ROW][LINE];

int Menu()
{
	printf("***************\n");
	printf("*****三子棋****\n");
	printf("***1.开始游戏**\n");
	printf("***2.结束游戏**\n");
	printf("***************\n");
	printf("请选择:\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Print()
{
	int row = 0;
	for (; row < ROW; ++row)
	{
		printf("| %c | %c | %c |\n", g_broad[row][0],
			g_broad[row][1], g_broad[row][2]);
		printf("|---|---|---|\n");
	}
}

void PlayerMove()
{
	printf("玩家落子!\n");
	while (1)
	{
		printf("输入一组坐标(两个数用空格隔开)\n");
		int row = 0;
		int line = 0;
		scanf("%d %d", &row, &line);
		if (row < 0 || line<0 || row >= ROW || line>LINE )
		{
			printf("汤老师您的输入非法！请重新输入:\n");
			continue;
		}
		if (g_broad[row][line] != ' ')
		{
			printf("位置已被占用！请重新输入:\n");
			continue;
		}
		g_broad[row][line] = 'x';
		break;
	}
}

void ComputerMove_1()
{
	printf("电脑落子！\n");
	while (1)
	{
		int row = rand() % ROW;
		int line = rand() % LINE;
		if (g_broad[row][line] != ' ')//电脑输入非法！
		{
			continue;
		}
		g_broad[row][line] = 'o';
		break;
	}
}

int IsFull()
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int line = 0; line < LINE; ++line)
		{
			if (g_broad[row][line] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char CheckWinner()
{
	//返回值是‘x’的话，则玩家胜利
	//返回值是‘o’的话，则电脑胜利
	//返回值是‘h’的话，则表示和棋
	//返回值是‘ ’的话，则表示游戏没有结束。
	for (int row=0 ; row < ROW; ++row)
	{
		if (g_broad[row][0] == g_broad[row][1] &&
			g_broad[row][0] == g_broad[row][2] &&
			g_broad[row][0]!= ' ');
		{
			return g_broad[row][0];
		}
	}
	for (int line = 0; line < LINE; ++line)
	{
		if (g_broad[0][line] == g_broad[1][line] &&
			g_broad[0][line] == g_broad[2][line] &&
			g_broad[0][line]!=' ');
		{
			return g_broad[0][line];
		}
	}
	if (g_broad[0][0] == g_broad[1][1] &&
		g_broad[0][0] == g_broad[2][2] &&
		g_broad[0][0]!=' ')
	{
		return g_broad[0][0];
	}
	if (g_broad[2][0] == g_broad[1][1] &&
		g_broad[2][0] == g_broad[0][2] &&
		g_broad[2][0]!=' ')
	{
		return g_broad[2][0];
	}
	if (IsFull())
	{
		return 'h';
	}
	else
	{
		return ' ';
	}
}

void Init()
{
	//把数组每个元素初始化空格
	for (int row=0; row < ROW; ++row)
	{
		for (int line=0; line < LINE;++line)
		{
			g_broad[row][line] = ' ';
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	
	Init();//初始化数组
	char winner = '\0';
	while (1)
	{
		Print();//打印棋盘
		PlayerMove();//玩家落子
		winner = CheckWinner();
		if (winner != ' ')
		{
			break;
		}
		ComputerMove_1();//电脑落子
		winner = CheckWinner();
		if (winner != ' ')
		{
			break;
		}
	}
	Print();
	if (winner == 'x')
	{
		printf("汤老师赢了!\n");
	}
	else if (winner == 'o')
	{
		printf("汤老师真菜！\n");
	}
	else
	{
		printf("和棋！\n");
	}

	system("pause");
	return 0;
}