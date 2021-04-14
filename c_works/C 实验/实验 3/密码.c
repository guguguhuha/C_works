#define _CRT_SECURE_NO_WARNINGS
//2.完善实验2:密码验证(3次机会)。
#include<stdio.h>

int main()
{
	int i = 0;
	int pwd=0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码 ：");
		scanf("%d",&pwd);
		if (pwd==1234)
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (i == 3)
		printf("您的密码已累计三次输入错误\n登陆失败");
	return 0;
}