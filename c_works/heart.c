#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	system("mode con cols=80 lines=60 ");
	system("title 向你致以最诚挚的祝福!");
	char data[200][60] = { { "祝你生日快乐！祝你生日快乐 ！" }, { "\nHappy birthday to you！\n" }, { "Happy birthday my dear friend！\n" },
	{ "在你面前的台里本，总有一天是很独特！\n" }, { "虽然你和我，没办法选，来到世界的某刻。\n" }, { "天气寒冷，又或炎热，又或者什么血型和星座！\n" },
	{ "每年这刻，我对自己说，有生的日子要更快乐！\n" }, { "天气寒冷，又或炎热，又或者什么血型和星座！\n" }, { "每年这刻，我对自己说，有生的日子要更快乐！\n" },
	{ "爸爸妈妈辛苦了！谢谢你们为我付出太多！\n" }, { "生日祝福，吹灭蜡烛，我要我自己不许哭。 \n" }, { "长大了一岁变得靠谱，继续走自己的旅程！\n" },
	{ "又到这一个时刻，幸福的花火，手机祝福收到很多很多。\n" }, { "看到最后一条来自你，写着让我感动的话语。\n" }, { "亲爱的朋友要经常联络，我们一起来唱这首歌！\n" },
	{ "祝你生日快乐额！我们一起快乐！\n" }
	};
	int sign = 0;

	int i, j, e;
	int a;
	long time;
	for (i = 1, a = I; i < I / 2; i++, a--)
	{
		for (j = (int)(I - sqrt(I*I - (a - i)*(a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I*I - (a - i)*(a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1; i < 80; i++)
	{
		if (i == 25)
		{
			printf("======祝某某，生日快乐。======");
			i += 30;
		}
		printf("\3");
	}
	printf("\n");
	for (i = 1; i <= R / 2; i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R*R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R*R - i * i) - (R - 2 * I)); e++)
			printf("\3");
		printf("\n");
	}

	for (;;)
	{
		system("color a");
		for (time = 0; time < 99999999; time++); system("color b");
		for (time = 0; time < 99999999; time++); system("color c");
		for (time = 0; time < 99999999; time++); system("color d");
		for (time = 0; time < 99999999; time++); system("color e");
		for (time = 0; time < 99999999; time++); system("color f");
		for (time = 0; time < 99999999; time++);
		system("color 0"); for (time = 0; time < 99999999; time++);
		system("color 1"); for (time = 0; time < 99999999; time++);
		system("color 2"); for (time = 0; time < 99999999; time++);
		system("color 3"); for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++); system("color 5");
		for (time = 0; time < 99999999; time++); system("color 6");
		for (time = 0; time < 99999999; time++); system("color 7");
		for (time = 0; time < 99999999; time++); system("color 8");
		for (time = 0; time < 99999999; time++); system("color 9");
		for (time = 0; time < 99999999; time++); system("color ab");
		for (time = 0; time < 99999999; time++); system("color ac");
		for (time = 0; time < 99999999; time++); system("color ad");
		for (time = 0; time < 99999999; time++); system("color ae");
		for (time = 0; time < 99999999; time++); system("color af");
		for (time = 0; time < 99999999; time++);

		printf("%s", data[sign]);
		sign++;

	}

	return 0;

}