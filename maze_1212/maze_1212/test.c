#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char name = "maze123";
	char password[1024] = { 0 };
	printf("Your name is maze123\n");
	printf("please put your password:\n");
	int i = 0;
	for(;i<3;++i)
	{
		scanf("%s", password);
		if (strcmp(password,"123456789")==0)
		{
			printf("密码正确，登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，登录失败\n");
		}
		
	}
	if (i == 3)
	{
		printf("你的账号已被锁定，联系工作人员解锁！\n");
	}

	system("pause");
}