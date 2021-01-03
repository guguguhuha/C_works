#define _CRT_SECURE_NO_WARNINGS 1
//三、编写程序自动批改上述单选题，保存为zdyj.c。
//（标准答案在answer.txt文件中。建议zdyj.c与daan.txt和answer.txt在同一文件夹中）
//提示：打开daan.txt和answer.txt文件读取数据，
//将2个文件中读取的数据进行判断，若相同，则答案对，统计答对题数，若错误则显示告之。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fp1 = fopen("answer.txt", "r");
	FILE*fp2 = fopen("daan.txt", "r");
	char daan[25];
	char answ[25];
	char fause[5] = { "错" };
	char tru[5] = { "对" };
	char torf[5]; 
	int flag = 0;
	int count = 0;
	int i,j;
	if (fp1 == NULL)
	{
		printf("1 err\n");
		exit(0);
	}
	if (fp2 == NULL)
	{
		printf("2 err\n");
		exit(0);
	}
	fscanf(fp1, "%s", &daan);
	fscanf(fp2, "%s", &answ);
	for (i = 0; i < strlen(daan) ; i++)
	{
		flag = 0;
		if (daan[i] == answ[i])
		{
			count += 5;
			flag = 1;
		}
		if (flag)
			for (j = 0; j < 5; j++)
				torf[j] = tru[j];
		else
			for (j = 0; j < 5; j++)
				torf[j] = fause[j];
		printf("第%d题%s：您的答案是: %c，标准答案是：%c\n", i + 1, torf, answ[i], daan[i]);
	}
	
	printf("你的总分为：%d\n", count);
	return 0;
}