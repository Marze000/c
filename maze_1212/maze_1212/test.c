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
			printf("������ȷ����¼�ɹ�\n");
			break;
		}
		else
		{
			printf("������󣬵�¼ʧ��\n");
		}
		
	}
	if (i == 3)
	{
		printf("����˺��ѱ���������ϵ������Ա������\n");
	}

	system("pause");
}