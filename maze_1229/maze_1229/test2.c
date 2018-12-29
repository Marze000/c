//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define ROW 3
//#define COL 3
//
//char g_broad[ROW][COL];
//
//void Init()
//{
//	for (int row = 0; row < ROW; ++row)
//	{
//		for (int col = 0; col < COL; ++col)
//		{
//			g_broad[row][col] = ' ';
//		}
//	}
//}
//					
//void Print()
//{
//	for (int row = 0; row < ROW; ++row)
//	{
//		printf("| %c | %c | %c |\n", g_broad[row][0],
//			g_broad[row][1], g_broad[row][2]);
//		if (row != ROW - 1)
//		{
//			printf("|---|---|---|\n");
//		}
//	}
//}
//
//void PlayerMove()
//{
//	printf("����һ�����꣬�ÿո����\n");
//	while (1)	
//	{
//		printf("�������:\n");
//		int row = 0;
//		int col = 0;
//		scanf("%d %d", &row, &col);
//		if (row < 0 || row >= ROW || col < 0 || col >= COL)
//		{
//			printf("������[0,3)������:");
//			continue;
//		}
//		if (g_broad[row][col] != ' ')
//		{
//			printf("��λ�ñ�ռ������λ�����ӣ�");
//			continue;
//		}
//		g_broad[row][col] = 'x';
//		break;
//	}
//}
//
//int IsFull()
//{
//	for (int row = 0; row < ROW; ++row)
//	{
//		for (int col = 0; col < COL; ++col)
//		{
//			if (g_broad[row][col] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//char CheckWinner()
//{
//	for (int row = 0; row < ROW; ++row)
//	{
//		if (g_broad[row][0] == g_broad[row][1] 
//			&& g_broad[row][0] == g_broad[row][2] 
//			&& g_broad[row][0] != ' ')
//		{
//			return g_broad[row][0];
//		}
//	}
//	for (int col = 0; col < COL; ++col)
//	{
//		if (g_broad[0][col] == g_broad[1][col]
//			&& g_broad[0][col] == g_broad[2][col]
//			&& g_broad[0][col] != ' ')
//		{
//			return g_broad[0][col];
//		}
//	}
//	if (g_broad[0][0] == g_broad[1][2]
//		&& g_broad[0][0] == g_broad[2][2]
//		&& g_broad[0][0] != ' ')
//	{
//		return g_broad[0][0];
//	}
//	if (g_broad[2][0] == g_broad[1][1]
//		&& g_broad[2][0] == g_broad[0][2]
//		&& g_broad[2][0] != ' ')
//	{
//		return g_broad[2][0];
//	}
//	if (IsFull())
//	{
//		return 'q';
//	}
//	return ' ';
//}
//
//void ComputerMove()
//{
//	printf("\n");
//	while (1)
//	{
//		int row = rand() % ROW;
//		int col = rand() % COL;
//		if (g_broad[row][col] != ' ')
//		{
//			continue;
//		}
//		g_broad[row][col] = 'o';
//		break;
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(0));
//	Init();
//	char winner = '\0';
//	while (1)
//	{
//		Print();
//		PlayerMove();
//		winner = CheckWinner();
//		if (winner != ' ')
//		{
//			break;
//		}
//		ComputerMove();
//		winner = CheckWinner();
//		if (winner != ' ')
//		{
//			break;
//		}
//		system("cls");
//	}
//
//	Print();
//	if (winner == 'x')
//	{
//		printf("��Ӯ��");
//	}
//	else if (winner == 'o')
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("����");
//	}
//		
//	system("pause");
//	return 0;
//}



//int i = 0;
//for (i = 0; i < row; i++) //�ж�ÿһ�����Ƿ���������ͬ������
//{
//	if ((board[i][0] == board[i][1]) && (board[i][2] == ' ') && board[i][0] != ' ')
//	{
//		board[i][2] = 'D';
//		return 1;
//	}
//	if ((board[i][0] == board[i][2]) && (board[i][1] == ' ') && board[i][2] != ' ')
//	{
//		board[i][1] = 'D';
//		return 1;
//	}
//	if ((board[i][2] == board[i][1]) && (board[i][0] == ' ') && board[i][1] != ' ')
//	{
//		board[i][0] = 'D';
//		return 1;
//	}
//}
//for (i = 0; i < col; i++) //�ж�ÿһ�����Ƿ���������ͬ������
//{
//	if ((board[0][i] == board[1][i]) && (board[2][i] == ' ') && board[0][i] != ' ')
//	{
//		board[2][i] = 'D';
//		return 1;
//	}
//	if ((board[0][i] == board[2][i]) && (board[1][i] == ' ') && board[2][i] != ' ')
//	{
//		board[1][i] = 'D';
//		return 1;
//	}
//	if ((board[2][i] == board[1][i]) && (board[0][i] == ' ') && board[1][i] != ' ')
//	{
//		board[0][i] = 'D';
//		return 1;
//	}
//}
////�ж����Խ������Ƿ���������ͬ������
//if ((board[0][0] == board[1][1]) && (board[2][2] == ' ') && (board[0][0] != ' '))
//{
//	board[2][2] = 'D';
//	return 1;
//
//}
//if ((board[2][2] == board[1][1]) && (board[0][0] == ' ') && (board[1][1] != ' ')) //���Խ���
//{
//	board[0][0] = 'D';
//	return 1;
//
//}
//if ((board[0][0] == board[2][2]) && (board[1][1] == ' ') && (board[2][2] != ' ')) //���Խ���
//{
//	board[1][1] = 'D';
//	return 1;
//}
////�жϸ��Խ������Ƿ���������ͬ������
//if ((board[0][2] == board[2][0]) && (board[1][1] == ' ') && (board[0][2] != ' '))
//{
//	board[1][1] = 'D';
//	return 1;
//}
//if ((board[0][2] == board[1][1]) && (board[2][0] == ' ') && (board[1][1] != ' ')) //���Խ���
//{
//	board[2][0] = 'D';
//	return 1;
//}
//if ((board[2][0] == board[2][2]) && (board[0][2] == ' ') && (board[2][2] != ' ')) //���Խ���
//{
//	board[0][2] = 'D';
//	return 1;
//}
//return 0;