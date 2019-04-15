#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#include<time.h>
#define ROW 9              
#define COL 9              
#define ROWS ROW+2         
#define COLS COL+2           
#define MineNum 10     
//菜单信息
void menu();
//执行菜单
void test(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2);
//游戏主体
void game(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2);
//打印雷阵
void InitBoard(char arr[ROWS][COLS], int row, int col);
//埋雷子
void SetMine(char mine[ROWS][COLS], int row, int col);
//找雷子
int FindMine(char mine[ROWS][COLS], int row1, int col1,
			 char show[ROWS][COLS], int row2, int col2);
//空白算法
void Find(char mine[ROWS][COLS], int row1, int col1, 
		  char show[ROWS][COLS], int row2, int col2,
		  int x, int y, int exam[ROWS][COLS]);

int main()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	srand((unsigned int)time(NULL));  //生成随机数，用于随机埋雷
	int i = 0, j = 0;
	test(mine, ROWS, COLS, show, ROWS, COLS); //测试函数
	system("pause");
	return 0;
}

void menu()
{
	printf("******************\n");
	printf("******1.play *****\n");
	printf("******0.exit *****\n");
	printf("******************\n");
}

//这个函数是用来打印信息的，打印一个简单的菜单。

//执行菜单
void test(char mine[ROWS][COLS], int row1, int col1,
	      char show[ROWS][COLS], int row2, int col2)
{
	int m = 0;
	do
	{
		menu();
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			game(mine, row1, col1, show, row2, col2);
			break;
		case 0:
			exit(0);
		default:
			printf("输入错误！\n");
		}
	} while (m);
}

void game(char mine[ROWS][COLS], int row1, int col1,
		  char show[ROWS][COLS], int row2, int col2)
{
	int i = 0, j = 0;
	int flag = 0;
	int count = 0;
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			mine[i][j] = '0';
		}
	}
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			show[i][j] = '*';
		}
	}
	SetMine(mine, row1, col1);
	while (1)
	{
		InitBoard(mine, row1 - 1, col1 - 1);
		printf("------------------------\n");
		InitBoard(show, row2 - 1, col2 - 1);
		flag = FindMine(mine, row1, col1, show, row2, col2);
		if (flag == 0)
		{
			printf("扫雷失败！\n");
			InitBoard(mine, row1 - 1, col1 - 1);
			break;
		}
		else if (flag == 1)
		{
			for (i = 1; i < row2 - 1; i++)
			{
				for (j = 1; j < col2 - 1; j++)
				{
					if (show[i][j] == '*')
					{
						count++;
					}
				}
			}
			printf("count == %d\n", count);
			if (count == MineNum)
			{
				printf("扫雷成功！\n");
				break;
			}
			else
			{
				count = 0;
			}
		}
	}
}

//这个函数是游戏的主体部分。在一开始定义了一个标志变量flag和一个计数变量count。之后，
//使用了两个两个for循环对二维数组进行了初始化，mine被初始化为全’0’, show被初始化了全’*’。
//然后，使用了SetMine()函数对mine进行了埋雷活动。最后使用个一个while死循环，开始进行扫雷游戏。
//在while循环里首先是两个InitBoard()函数对mine和show进行打印。
//FindMine函数是扫雷函数。它会返回一个值，如果被雷炸死了，他会返回0，
//如果点开区域没有触发雷的话，它会返回1。
//接下来如果flag == 1时，开始进行扫描，看看show中还剩下几个星号，
//如果剩下10个星号，那么就证明扫完了，此时打印获胜信息，并break跳出循环。
//如果没有剩下10个星号，那么将已有的count信息清除，继续进行以上步骤。

//打印面板函数
void InitBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


//这是一个简单的打印函数，show和mine都可以公共使用。第一个for循环打印的是列坐标。
//第二个for循环中，第一个printf函数打印的是行坐标。

//埋雷函数
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int m = 0, n = 0;
	int count = 0;
	while (count < MineNum)
	{
		m = rand() % 9 + 1;
		n = rand() % 9 + 1;
		if (mine[m][n] == '0')
		{
			mine[m][n] = '1';
			count++;
		}
	}
}


//这是一个埋雷函数。埋雷需要用到随机数，我使用m和n来存放随机数。
//while循环的终止条件是埋雷数 count 达到预设雷数 MineNum 。rand() % 9 + 1是为了产生1~9的随机数。
//if语句保证设雷地区不重复。

//扫雷函数
int FindMine(char mine[ROWS][COLS], int row1, int col1,
		     char show[ROWS][COLS], int row2, int col2)
{
	int m = 0, n = 0;
	int flag = 0;
	static int fflag = 0;
	int a1 = 0, a2 = 0;
	int exam[ROWS][COLS] = { 0 };
	while (1)
	{
		scanf_s("%d %d", &m, &n);
		if ((m >= 1 && m <= 9) && (n >= 1 && n <= 9))
		{
			break;
		}
		else
		{
			printf("输错了吧？\n");
		}
	}
	if (mine[m][n] == '0')
	{
		Find(mine, row1, col1, show, row2, col2, m, n, exam);
		flag = 1;
	}
	if (mine[m][n] == '1' && fflag > 0)
	{
		flag = 0;
	}
	if (mine[m][n] == '1' && fflag == 0)
	{
		mine[m][n] = '0';
		a1 = m;
		a2 = n;
		while (1)
		{
			m = rand() % 9 + 1;
			n = rand() % 9 + 1;
			if (mine[m][n] == '0'&& m != a1 && n != a2)
			{
				mine[m][n] = '1';
				flag = 1;
				break;
			}
		}
		fflag = 1;
	}
	return flag;
}

//这是一个扫雷函数。m和n是用来保存位置，flag 是标志变量，fflag也是踩雷标志变量。
//a1和a2是暂存m和n的位置的。exam是一个标志数组，它将在Find函数发挥作用。
//第一个while死循环它的作用是确保输入正确的坐标信息。在确保输入的m和n的数据是正确的后。
//开始处理数据，第一个if语句，如果第一下没有踩雷，那么将执行Find空白的算法，结果是产生周围雷数。
//第二个if语句中，如果不是第一下踩雷，那么将会反馈爆炸信息flag == 0。第三个if语句中，
//如果第一下踩雷了，那么将这颗雷移动到别的地方去。
//移动的方法是将踩雷地点先用a1和a2记录下来，然后生成随机数，
//该随机数必须在 无雷 并且 不同于 m和n的坐标的地方。

//空白算法函数
void Find(char mine[ROWS][COLS], int row1, int col1, 
		 char show[ROWS][COLS], int row2, int col2, 
		 int x, int y, int exam[ROWS][COLS])
{
	int count = 0;

	if (x <= 0 || y <= 0 || x >= row1 - 1 || y >= col1 - 1)
	{
		return;
	}
	count = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + 
		    mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] +
		    mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
	
	show[x][y] = '0' + count;

	if (show[x][y] == '0' && exam[x][y] == 0)
	{
		if (show[x][y] == '0')
		{
			exam[x][y] = 1;
		}
	//假设我们首先点开了棕色区域中心点，那么接下来 从x - 1, y - 1以顺时针方向开始探索。
	//此时我们进入到第一个if中，检查条件，exam该点默认为0，表示我们没有操作过它。
	//接下来将该点exam相对应的地方改成1。然后进入第一个Find()探索，也就是x - 1, y - 1。
	//由于该点是‘ 1 ’，所以return，返回到上层。此时按次序执行第二个Find()，也就是 x - 1, y。
	//由于该点是‘ 0 ’，所以以这个点为中心，进行探索（以红色为标记的九宫格）。
	//探索前将这个点的标记位改为‘ 1 ’，表示我们已经进行了该点的探索。
	//以该点 为 x, y，它的x - 1, y - 1是’ 0 ‘，所以以黄色九宫格探索。
	//以此类推直到触顶、触底停止，或者是周围有不为 ‘ 0 ’的数字停止。
	//这里为了防止两个九宫格相互循环，所以添加了exam标志位。
	//当子九宫格再次探索到上个函数‘ 0 ’时，
	//发现其对应的exam标志为1，不跳越至上个函数‘ 0 ’继续进行探索或返回。

		Find(mine, row1, col1, show, row2, col2, x - 1, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x - 1, y, exam);
		Find(mine, row1, col1, show, row2, col2, x - 1, y + 1, exam);
		Find(mine, row1, col1, show, row2, col2, x, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x, y + 1, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y - 1, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y, exam);
		Find(mine, row1, col1, show, row2, col2, x + 1, y + 1, exam);
	}
	else
	{
		return;
	}
}