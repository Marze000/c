#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return  DigitSum(n / 10) + (n % 10);
}

int digit_sum_fuzhengshu(int n)
{
	if (n > -10)
	{
		return -n;
	}
	return digit_sum_fuzhengshu(n/10) + (-n%10);
}

int digit_z_f_sum(int n)
{
	if (n > 0)
	{
		if (n < 9)
		{
			return n;
		}
		return digit_z_f_sum(n / 10) + (n % 10);
	}
	else
	{
		if (n > -10)
		{
			return -n;
		}
		return digit_z_f_sum(n / 10) + (-n % 10);
	}
}

//��дһ������ reverse_string(char * p)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
char* reverse_string(char* p)
{
	int n = 0;//����n���ַ�����������\0��
	char tmp;
	char* q;
	q = p;//��p��ֵ��q����p����������
	while (*p != 0)
	{
		n++;
		p++;
	}//����ַ������м����ַ���
	if (n > 1)
	{
		tmp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\0';
		reverse_string(q + 1);
		q[n - 1] = tmp;
	}
	return q;
}

int main()
{
	printf("put some words :\n");
	//char* string = '\0';
	char p[] = "ma ze zhen de he nu li ";
	//scanf("%s", &p);//ֻ�������������ַ�����
	printf("ԭ�ַ���Ϊ:%s\n", p);
	printf("���ַ���Ϊ:%s\n", reverse_string(p));

	//char arr[] = "\0";
	//char arr[] = "\0";
	//getchar();
	//scanf("%s", &arr);
	//char ch = '\0';
	//while ((ch=getchar())!= '\0')
	//{
	//	char arr[] = " ch" ;
	//	int left = 0;
	//	int right = strlen(ch) - 1;
	//	while (left <= right)
	//	{
	//		char tmp =  arr[left];
	//		arr[left] = arr[right];
	//		arr[right] = tmp;
	//		++left;
	//		--right;
	//	}
	//}
	//printf("%s", ch);

	//�����ַ������ַ�������
	//char arr[] = "hello world";
	//int left = 0;
	//int right = strlen(arr) - 1;
	//while (left <= right)
	//{
	//	char tmp = arr[right];
	//	arr[right] = arr[left];
	//	arr[left] = tmp;
	//	++left;
	//	--right;
	//}
	//printf("%s", arr);
	//char string='\0';
	//scanf("%s", &string);
	//printf("%s", reverse_string(string));
	//n4 = n % 1000;
	//n3 = (n / 10) % 10;

	//printf("put a finger that big zero");
	//
	//scanf("%d", &n);
	//printf("%d+%d+%d+%d=%d\n", n1, n2, n3, n4, n);
	//printf("%d\n", DigitSum(n));
	//printf("%d", digit_z_f_sum(n));
	//printf("%d\n", digit_sum_fuzhengshu(n));
	//printf("%d", -23 / 10);//-2
	//printf("%d", -23 % 10);//-3
	system("pause");
	return 0;
}