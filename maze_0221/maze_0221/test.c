#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//void* ZuoXuan(char *p, int n)
//{
//	char *p1 = p;//����һ���µ�ָ�����
//	int len = strlen(p1) - 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; ++i)
//	{
//		char tmp = p1[0];//����һ����ʱ�������ѵ�һ���ַ���ֵ��tmp��
//		for (j = 0; j < len; ++j)
//		{
//			p1[j] = p1[j + 1];//�ַ�����ǰ��һ��λ��
//		}
//		p1[len] = tmp;//����ʱ������ֵ�����һ��λ��
//	}
//	printf("%s\n", p1);
//}

//int judge(char str1[], char str2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(str1);
//
//	for (j = 1; j <= len; ++j)
//	{
//		int tmp = str1[0];
//		for (i = 0; i < len - 1; ++i)
//		{
//			str1[i] = str1[i + 1];
//		}
//		str1[len - 1] = tmp;
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

char* my_strncat(char *stc)//����Դ�ַ�������Ŀ���ַ�������
{
	char *cp = stc ;//cp = ABCD
	int len = strlen(stc);//4
	char *cpp = stc;
	while (*cpp)
	{
		++cpp;
	}
	while (*cp !='\0'&& (len--))
	{
		*cpp++ = *cp++;		
	}
	*cpp = '\0';
	return cpp;
}



int main()
{
	char str1[20] = "ABCD";
	char str2[20] = "BACD";
	char *ret = NULL;
	my_strncat(str1);
	ret = strstr(str1, str2);
	if (ret)
	{
		printf("�ַ���str2��str1�ַ�����ת֮����ַ���!");
	}
	else
	{
		printf("�ַ���str2����str1�ַ�����ת֮����ַ���!");
	}

	//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ����� 
	//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.

	//	AABCD����һ���ַ��õ� ABCDA
	//	AABCD���������ַ��õ� BCDAA
	//	AABCD����һ���ַ��õ� DAABC

	//char s1[10] = "AABCD";
	//char s2[10] = "BCDAA";
	//char s1[10] = "abcd";
	//char s2[10] = "ACBD";

	//printf("s1 = %s\n", s1);
	//printf("s2 = %s\n", s2);

	//if (judge(s1, s2))
	//{
	//	printf("�ַ�����ת֮����Ե���ָ���ַ���!");
	//}
	//else
	//{
	//	printf("�ַ�����ת֮�󲻻����ָ���ַ���!");
	//}


	////1.ʵ��һ�����������������ַ����е�k���ַ��� 
	////ABCD����һ���ַ��õ�BCDA
	////ABCD���������ַ��õ�CDAB
	//int k = 0;
	//char a[] = "ABCD";
	//printf("�ַ�Ϊ%s\n", a);
	//printf("���������������ַ���(���������С��4)\n");
	//scanf("%d", &k);
	//ZuoXuan(a, k);

	system("pause");
	return 0;
}