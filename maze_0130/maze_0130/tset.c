#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//�ַ�������ͷ�ļ���
#include <string.h>//�ַ���������ͷ�ļ���

//void* GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	if (str != NULL)
//	{
//		strcpy(str, "hello world");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}


//char* GetMemory()
//{
//	char* p;
//	p = (char*)malloc(100);
//
//	if (p != NULL)
//	{
//		return p;
//	}
//}
//
//void Test(void)
//{
//	char* str = GetMemory();
//	strcpy(str, "hello world!");
//	printf(str);
//	
//	free(str);
//	str = NULL;
//}


int main()
{
	//�⺯����
	//1-> abs() int abs(int x)�����ֵ
	//2-> long labs()=>�����εľ���ֵ
	//3-> double fabs()=>�󸡵����ľ���ֵ

	//4-> int isalpha(int ch)���ch�Ƿ�����ĸ��������򷵻�1�����򷵻�0
	//char ch = 'a';
	//ch = getchar();
	//if (isalpha(ch))
	//{
	//	printf("ok!");
	//}
	//else
	//{
	//	printf("no!");
	//}

	//5-> int isdigit(int ch)���������֣�����������򷵻ط��㣬���򷵻�0

	//6-> int isalnum(int ch)��������ĸ�����֣��������ط��㣬���򷵻�0
	
	//int ch = 0;
	//ch = getchar();
	
	//printf("%d", ch);
	//if (isalnum(getchar()))
	//{
	//	printf("�����Ϊ���ֻ���ĸ\n");
	//}
	//else
	//{
	//	printf("����Ĳ�����ĸ�Ҳ�������\n");
	//}

	//7-> 
	
	int arr[2][3] = {{1,2,3},{4,5,6}};
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%3d", arr[j][i]);
		}
		printf("\n");
	}

	//int a = 10000;
	//FILE* pf = fopen("test.txt", "wb");
	//fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
	//fclose(pf);
	//pf = NULL;

	//Test();
	system("pause");
	return 0;
}