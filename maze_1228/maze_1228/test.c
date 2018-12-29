#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3//define�����治���Լӷֺ�
#define LINE 3

char g_broad[ROW][LINE];

int Menu()
{
	printf("***************\n");
	printf("*****������****\n");
	printf("***1.��ʼ��Ϸ**\n");
	printf("***2.������Ϸ**\n");
	printf("***************\n");
	printf("��ѡ��:\n");
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
	printf("�������!\n");
	while (1)
	{
		printf("����һ������(�������ÿո����)\n");
		int row = 0;
		int line = 0;
		scanf("%d %d", &row, &line);
		if (row < 0 || line<0 || row >= ROW || line>LINE )
		{
			printf("����ʦ��������Ƿ�������������:\n");
			continue;
		}
		if (g_broad[row][line] != ' ')
		{
			printf("λ���ѱ�ռ�ã�����������:\n");
			continue;
		}
		g_broad[row][line] = 'x';
		break;
	}
}

void ComputerMove_1()
{
	printf("�������ӣ�\n");
	while (1)
	{
		int row = rand() % ROW;
		int line = rand() % LINE;
		if (g_broad[row][line] != ' ')//��������Ƿ���
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
	//����ֵ�ǡ�x���Ļ��������ʤ��
	//����ֵ�ǡ�o���Ļ��������ʤ��
	//����ֵ�ǡ�h���Ļ������ʾ����
	//����ֵ�ǡ� ���Ļ������ʾ��Ϸû�н�����
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
	//������ÿ��Ԫ�س�ʼ���ո�
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
	
	Init();//��ʼ������
	char winner = '\0';
	while (1)
	{
		Print();//��ӡ����
		PlayerMove();//�������
		winner = CheckWinner();
		if (winner != ' ')
		{
			break;
		}
		ComputerMove_1();//��������
		winner = CheckWinner();
		if (winner != ' ')
		{
			break;
		}
	}
	Print();
	if (winner == 'x')
	{
		printf("����ʦӮ��!\n");
	}
	else if (winner == 'o')
	{
		printf("����ʦ��ˣ�\n");
	}
	else
	{
		printf("���壡\n");
	}

	system("pause");
	return 0;
}