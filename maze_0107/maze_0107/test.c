#include<stdio.h>
#include<stdlib.h>

//
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，**每位选手都说对了一半**，请编程确定比赛的名次。
void panbie(int A, int B, int C, int D, int E)
{
	for (A = 1; A <= 5; ++A)
	{
		for (B = 1; B <= 5; ++B)
		{
			for (C = 1; C <= 5; ++C)
			{
				for (D = 1; D <= 5; ++D)
				{
					for (E = 1; E <= 5; ++E)
					{
						//A选手说：B第二，我第三；
						//B选手说：我第二，E第四；
						//C选手说：我第一，D第二；
						//D选手说：C最后，我第三；
						//E选手说：我第四，A第一；
						//下面（）里的只能有一个是对的，另一个就是错的
						//对的那个结果为1，错的那个结果为0，加起来为1
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1)
						{
							if (A*B*C*D*E == 120)
							{
								printf("A是第%d名\n", A);
								printf("B是第%d名\n", B);
								printf("C是第%d名\n", C);
								printf("D是第%d名\n", D);
								printf("E是第%d名\n", E);
							}
						}
					}
				}
			}
		}
	}
}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。  muder != 'A '
//B说：是C。     muder == 'C ' 
//C说：是D。     muder == 'D '
//D说：C在胡说   muder != 'D '
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//void XiongShou(char muder)
//{
//	if (muder == 'A')
//	{
//		printf("%c", muder);
//	}
//	else if (muder == 'B')
//	{
//		printf("%c", muder);
//	}
//
//	
//}

//在屏幕上打印杨辉三角。
//       |.......1.........|
//       |......1.1........|
//       |.....1.2.1.......|
//       |....1.3.3.1......|
//       |...1.4.6.4.1.....|
//       |..1.5.10.10.5.1..|
 //      |.1.6.15.20.15.6.1|
int main()
{
	int row = 0;
	int i = 0;
	int j = 0;
	//       |......1.........|
	//       |.....1  1........|
	//       |....1  2  1.......|
	//       |...1  3  3  1......|
	//       |..1 4   6  4  1.....|
	//       |.1 5  10 10  5  1..|
	 //      |1 6 15 20  15  6   1|
	int arr[7][7] = " ";
	int row = 0;
	int col = 0;
	for (i = 1; i <= 7; ++i)
	{
		for (j = 1; j <= 7-i ; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{

		}
	}

	//char muder = 'A';
	//for (muder = 'A'; muder <= 'D'; ++muder)
	//{
	//	if (((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D')) == 3)
	//	{
	//		printf("muder is %c\n", muder);
	//	}
	//}
	//char muder = 'A';
	//XiongShou(muder);
	//int A, B, C, D;
	//char 1 = 'A';
	//char 2 = 'B';
	//char 3 = 'C';
	//char 4 = 'D';
	//char 5 = 'E';
	//int C = 0;
	//int D = 0;
	//int E = 0;
	//panbie(A, B, C, D, E);

	system("pause");
	return 0;
}