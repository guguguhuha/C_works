#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("############\n");
	printf("## 1.play ##\n");
	printf("## 0.quit ##\n");
	printf("############\n");
}

void play()
{
	int result = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入你所猜的数字：");
		scanf("%d", &result);
		if (result > ret)
		{
			printf("猜大了！\n");
		}
		else if (result < ret)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

void quit()
{
	printf("谢谢使用！\n欢迎下次再来\n");
	exit(0);
}
void start()
{
	int choice;
	printf("请输入你的选择(1/0): ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		play();
		break;
	case 0:
		quit();
		break;
	default:
		printf("哦豁 ！\n");
		break;
	}
}

void game()
{
	srand((unsigned)time(NULL));
	menu();
	while (1)
	{
		start();
	}
}

int main()
{
	game();
	return 0;
}
