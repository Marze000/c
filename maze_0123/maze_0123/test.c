#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  ��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

//	student a am i
//	i ma a tneduts
//	i am a student

void reverse(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	} 
}

void str_reverse(char* str)
{	
	int len = strlen(str);
	reverse(str, str + len - 1);  //ȫ������
	while (*str != '\0')
	{
		char* pos = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		reverse(pos, str - 1);    //ÿ�����ʵ�����
		if (*str != '\0')
		{
			str++;
		}
	}
}

//��������ʹ����ȫ����λ��ż��ǰ�档

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

void odd_left(int* p1,int len)
{
	//p1���ȴ�������ߵ�ָ�룬ֻ������ż����ָ���һλ
	//p2���ȴ������ұߵ�ָ�룬ֻ������������ָ��ǰһλ
	int* p2 = p1 + len - 1;
	while (p1 < p2)
	{
		while ((*p1 & 1) == 1)//����1Ϊż��
		{
			++p1;
		}
		while ((*p2 & 1) == 0)//����0Ϊ����
		{
			--p2;
		}
//		if (p1 < p2)
	//	{
			int tmp = *p1;
			*p1 = *p2;
			*p2 = tmp;
		//}
	}
	return;
}


int main()
{
	int arr[] = { 2,9,4,7,5,6,12,3,45,20,10 };
	int len = sizeof(arr)/sizeof(arr[0]);
	for (int j = 0; j < len; ++j)
	{
		printf(" %d ", arr[j]);
	}
	printf("\n");
	odd_left(arr,len);
	for (int i = 0; i < len; ++i)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
	








	//char str[] = "student a am i";
	//printf("ԭ�ַ���Ϊ��%s\n", str);
	//str_reverse(str);
	//printf("��ת����ַ���Ϊ��%s\n", str);
	

	//	2.���Ͼ��� 
	//	��һ����ά����.
	//	�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
	//	�������������в���һ�������Ƿ���ڡ�
	//	ʱ�临�Ӷ�С��O(N);

	//���飺
	//	1 2 3
	//	2 3 4
	//	3 4 5

	//	1 3 4
	//	2 4 5
	//	4 5 6

	//	1 2 3
	//	4 5 6
	//	7 8 9

	system("pause");
	return 0;
}