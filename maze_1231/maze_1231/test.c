#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int Fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return Fib(n - 1) + Fib(n-2);
}

int Fib_h(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	long long last1 = 1;//��i-1��
	long long last2 = 1;//��i-2��
	long long sum = 0;
	for (int i = 3; i <= n; ++i)
	{
		sum = last1 + last2;
		//����last1,last2
		last2 = last1;
		last1 = sum;
	}
	return sum;

}


int main()
{




	//char a = 'b';
	//int* p = NULL;
	////printf("%d\n", !0);
	////printf("%d\n", !2);
	//a = -a;
	//p = &a;
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (a));
	//printf("%d", sizeof int);    //����ı��ʽ
	//printf("%d", sizeof (int));

	//char str1[] = "hehe";
	//char str2[] = "hehe";

	////strcmp()�����ַ��ĵ�ַ���ݵĴ�С��
	//if (strcmp(str1, str2) == 0)
	//{
	//	printf("yes");
	//}
	//else
	//{
	//	printf("no");
	//}
	//	

	//char* str1 = "hehe";
	//char* str2 = "hehe";

	//if (str1 == str2)
	//{
	//	printf("ok");
	//}
	//else
	//{
	//	printf("no");
	//}
	//int num = 1;
	//++num;
	////num=num+1;
	////return num;

	//num++;
	////int tmp=num;
	////num = num+1;
	////return tmp;

	//int num = 10;
	//++num;
	//num++;
	//printf("%d", num);
	//int x = 0;
	//printf("%x", ~x);	

	//int num = -1;
	//int count = 0;
	//for (int n = 0; n < 32; ++n)
	//{
	//	if (1 & (num >> n))//if(0x1<<n & num)�������Ҳ�еġ�
	//	{
	//		count++;
	//	}
	//}
	//printf("%d", count);
	//printf("%d", num >> 1);


	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	count++;
	//	num = num & (num - 1);//ÿִ��һ�ζ��������־ͻ���һ��1.ֱ��num=0����ѭ����
	//}
	//printf("%d", count);


	
	//int a = 0x1;
	//a = a << 5;
	//printf("%d", a);
	
	
	////��һ�����������ڴ��еĶ�������1�ĸ�����
	//int num = 10;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 0)//�ж����һλ�����Ƿ���1������ǵĻ���count+1�����������num/2
	//	{
	//		++count;
	//	}
	//	num = num / 2;//�������һλ��ǰһλ�Ƿ���1��
	//}
	//printf("%d", count);//���ܴ�ӡ����


	////��λ��򣺶������ϵ�������ͬ��ȡ0����ͬȡ1
	//int a = 10;//10�Ķ�����Ϊ   0 1010
	//int b = 20;//20�Ķ�����Ϊ   1 0100
	//a = a ^ b;              //a=1 1110  
	//b = a ^ b;              //b=0 1010
	//a = a ^ b;              //a=1 0100 
	//printf("%d %d", a, b);


	//int i = 10;
	//int num = 0;
	//int ret = 0;
	//ret = num | (i << i);

	//ret = num & ~(i << i);
	//printf("%lld", Fib_h(100));

	//ʹ�õݹ����n��쳲�������
	//int n = 0;
	//int ret = 0;
	//printf("������ĵ�n��쳲�������");
	//scanf("%d", &n);
	//ret = Fib(n);
	//printf("%d\n", ret);

	system("pause");
	return 0;
}