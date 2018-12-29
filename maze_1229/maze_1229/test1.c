#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//define�����治���Լӷֺ�
#define COL 3

char g_broad[ROW][COL];

int Menu()
{
	printf("**************\n");
	printf("**1.��Ϸ��ʼ**\n");
	printf("**2.��Ϸ����**\n");
	printf("**3.��Ϸ����**\n");
	printf("**************\n");
	int choice = 0;
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	return choice;
}
int Menu1()
{
	printf("============\n");
	printf("***1.����***\n");
	printf("***2.����***\n");
	printf("============\n");
	int select = 0;
	printf("��������Եȼ�\n");
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
	printf("�������!\n");
	printf("����һ������(�������ÿո����):");
	while (1)
	{
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || col<0 || row >= ROW || col>=COL)
		{
			printf("����Ƿ�������������:\n");
			continue;
		}
		if (g_broad[row][col] != ' ')
		{
			printf("λ�ñ�ռ�ã�����������:\n");
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

	


	for (row = 0; row < ROW; ++row) //�ж�ÿһ�����Ƿ���������ͬ������
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
	for (col = 0; col < COL; col++) //�ж�ÿһ�����Ƿ���������ͬ������
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
	//�ж����Խ������Ƿ���������ͬ������
	while (1)
	{
		if ((g_broad[0][0] == g_broad[1][1]) &&	g_broad[2][2] == ' ')
		{
			g_broad[2][2] = 'o';
			break;
		}
		if ((g_broad[2][2] == g_broad[1][1]) &&	g_broad[0][0] == ' ') //���Խ���
		{
			g_broad[0][0] = 'o';
			break;
		}

		//�жϸ��Խ������Ƿ���������ͬ������
	
		if ((g_broad[0][2] == g_broad[1][1]) &&	g_broad[2][0] == ' ') //���Խ���
		{
			g_broad[2][0] = 'o';
			break;
		}
		if ((g_broad[2][0] == g_broad[1][1]) &&	(g_broad[0][2] == ' ')) //���Խ���
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
	//����ֵ�ǡ�x���Ļ��������ʤ��
	//����ֵ�ǡ�o���Ļ��������ʤ��
	//����ֵ�ǡ�h���Ļ������ʾ����
	//����ֵ�ǡ�j���Ļ������ʾ��Ϸû�н�����
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
	//������ÿ��Ԫ�س�ʼ���ո�
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
					Init();//��ʼ������
					char winner = '\0';
					while (1)
					{
						Print();       //��ӡ����
						PlayerMove();   //�������
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						ComputerMove_1();//��������
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
						printf("��Ӯ��!\n");
					}
					else if (winner == 'o')
					{
						printf("������!\n");
					}
					else
					{
						printf("����!\n");
					}
				}
				else if (select == 2)
				{
					Init();//��ʼ������
					char winner = '\0';
					while (1)
					{
						Print();//��ӡ����
						ComputerMove_2(); //��������
						winner = CheckWinner();
						if (winner != 'n')
						{
							break;
						}
						PlayerMove();//�������
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
						printf("��Ӯ��!\n");
					}
					else if (winner == 'o')
					{
						printf("������!\n");
					}
					else
					{
						printf("����!\n");
					}
				}
				else
				{
					printf("�������Ƿ�,���������룺\n");
					continue;
				}
				break;
			}//ѡ�����ѵȼ�
		}		
		else if (choice == 2)
		{
			printf("������Ĺ����ǵ���һ������������һ���ߺ�ʤ��\n");
			printf("������ֱ�߻�Խ��ߡ�������������һ���߱�����\n");
			printf("������1���ز˵�");
			int d = 0;
			scanf("%d", &d);
			continue;
		}
		else if (choice==3)
		{
			printf("��Ϸ����");
			break;
		}
		else
		{
			printf("�������Ƿ������������룺\n");
			continue;
		}
	}
	system("pause");
	return 0;
}