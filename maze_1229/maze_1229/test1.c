#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//define语句后面不可以加分号
#define COL 3

char g_broad[ROW][COL];

int Menu()
{
	printf("**************\n");
	printf("**1.游戏开始**\n");
	printf("**2.游戏帮助**\n");
	printf("**3.游戏结束**\n");
	printf("**************\n");
	int choice = 0;
	printf("请输入您的选择：\n");
	scanf("%d", &choice);
	return choice;
}
int Menu1()
{
	printf("============\n");
	printf("***1.容易***\n");
	printf("***2.困难***\n");
	printf("============\n");
	int select = 0;
	printf("请输入电脑等级\n");
	scanf("%d", &select);
	return select;
}

void Print()
{	
	for (int row = 0; row < ROW; ++row)
	{
		printf("| %c | %c | %c |\n", g_broad[row][0],
			g_broad[row][1], g_broad[row][2]);
		printf("|---|---|---|\n");
	}
}
void PlayerMove()
{
	printf("玩家落子!\n");
	printf("输入一组坐标(两个数用空格隔开):");
	while (1)
	{
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || col<0 || row >= ROW || col>=COL)
		{
			printf("输入非法！请重新输入:\n");
			continue;
		}
		if (g_broad[row][col] != ' ')
		{
			printf("位置被占用！请重新输入:\n");
			continue;
		}
		g_broad[row][col] = 'x';
		break;
	}
}

void ComputerMove_1()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int row = rand() % ROW;
		int col = rand() % COL ;
		if (g_broad[row][col] != ' ')
		{
			continue;
		}
		g_broad[row][col] = 'o';
		break;
	}
}

void ComputerMove_2()
{
	int row = 1;
	int col = 1;
	while (1)
	{
		if (g_broad[row][col] == ' ')
		{
			g_broad[row][col] = 'o';
			break;
		}
	}

	


	for (row = 0; row < ROW; ++row) //判断每一行上是否有两个相同的棋子
	{
		if ((g_broad[row][0] == g_broad[row][1]) &&
			g_broad[row][2] == ' ' && g_broad[row][0]!=' ')
		{
			g_broad[row][2] = 'o';
			break;
		}
		if ((g_broad[row][0] == g_broad[row][2]) &&	
			g_broad[row][1] == ' '&& g_broad[row][0]!=' ')
		{
			g_broad[row][1] = 'o';
			break;
		}
		if ((g_broad[row][2] == g_broad[row][1]) && 
			g_broad[row][0] == ' '&& g_broad[row][2]!=' ')
		{
			g_broad[row][0] = 'o';
			break;
		}
	}
	for (col = 0; col < COL; col++) //判断每一列上是否有两个相同的棋子
	{
		if ((g_broad[0][col] == g_broad[1][col]) &&	
			g_broad[2][col] == ' '&& g_broad[0][col]!=' ')
		{
			g_broad[2][col] = 'o';
			break;
		}
		if ((g_broad[0][col] == g_broad[2][col]) &&	
			g_broad[1][col] == ' '&& g_broad[0][col]!=' ')
		{
			g_broad[1][col] = 'o';
			break;
		}
		if ((g_broad[2][col] == g_broad[1][col]) && 
			g_broad[0][col] == ' '&& g_broad[2][col]!=' ')
		{
			g_broad[0][col] = 'o';
			break;
		}
	}
	//判断主对角线上是否有两个相同的棋子
	while (1)
	{
		if ((g_broad[0][0] == g_broad[1][1]) &&	g_broad[2][2] == ' ')
		{
			g_broad[2][2] = 'o';
			break;
		}
		if ((g_broad[2][2] == g_broad[1][1]) &&	g_broad[0][0] == ' ') //做对角线
		{
			g_broad[0][0] = 'o';
			break;
		}

		//判断副对角线上是否有两个相同的棋子
	
		if ((g_broad[0][2] == g_broad[1][1]) &&	g_broad[2][0] == ' ') //做对角线
		{
			g_broad[2][0] = 'o';
			break;
		}
		if ((g_broad[2][0] == g_broad[1][1]) &&	(g_broad[0][2] == ' ')) //做对角线
		{
			g_broad[0][2] = 'o';
			break;
		}
	}
}
int IsFull()
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int line = 0; line < COL; ++line)
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
	//返回值是‘j’的话，则表示游戏没有结束。
	for (int row = 0; row < ROW; ++row)
	{
		if (g_broad[row][0] == g_broad[row][1] &&
			g_broad[row][0] == g_broad[row][2] &&
			g_broad[row][0]!=' ')
		{
			return g_broad[row][0];
		}
	}
	for (int col = 0; col < COL; ++col)
	{
		if (g_broad[0][col] == g_broad[1][col] &&
			g_broad[0][col] == g_broad[2][col] &&
			g_broad[0][col]!=' ')
		{
			return g_broad[0][col];
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
	return 'n';
}
void Init()
{
	//把数组每个元素初始化空格
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col < COL; ++col)
		{
			g_broad[row][col] = ' ';
		}
	}
}
int main()
{
	srand((unsigned int)time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 1)
		{
			while (1)
			{
				int select = Menu1();
				if (select == 1)
				{
					Init();//初始化数组
					char winner = '\0';
					while (1)
					{
						Print();       //打印棋盘
						PlayerMove();   //玩家落子
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						ComputerMove_1();//电脑落子
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						system("cls");
					}
					Print();
					if (winner == 'x')
					{
						printf("你赢了!\n");
					}
					else if (winner == 'o')
					{
						printf("你输了!\n");
					}
					else
					{
						printf("和棋!\n");
					}
				}
				else if (select == 2)
				{
					Init();//初始化数组
					char winner = '\0';
					while (1)
					{
						Print();//打印棋盘
						ComputerMove_2(); //电脑落子
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						PlayerMove();//玩家落子
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						Print();
						system("cls");
					}
					Print();
					if (winner == 'x')
					{
						printf("你赢了!\n");
					}
					else if (winner == 'o')
					{
						printf("你输了!\n");
					}
					else
					{
						printf("和棋!\n");
					}
				}
				else
				{
					printf("你的输入非法,请重新输入：\n");
					continue;
				}
				break;
			}//选择困难等级
		}		
		else if (choice == 2)
		{
			printf("三子棋的规则是当有一方的棋子连成一条线后，胜利\n");
			printf("可以是直线或对角线。当不可能连成一条线便会和棋\n");
			printf("请输入1返回菜单");
			int d = 0;
			scanf("%d", &d);
			continue;
		}
		else if (choice==3)
		{
			printf("游戏结束");
			break;
		}
		else
		{
			printf("你的输入非法，请重新输入：\n");
			continue;
		}
	}
	system("pause");
	return 0;
}