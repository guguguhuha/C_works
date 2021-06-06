#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	system("shutdown -s -t 60");
	char input[20] = { 0 };
	printf("请注意你的电脑将于一分钟内关机\n如果输入 我是猪 \n便可取消关机！\n");
again:
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("恭喜你,在你的自我肯定下取消了关机！\n");
	}
	else
	{
		printf("哦豁！你不听话哦！\n");
		goto again;
	}

	return 0;
}
