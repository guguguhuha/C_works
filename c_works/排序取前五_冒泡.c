#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int score[40] = { 0 };
	//输入n个成绩 
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	//对所有的数字进行排序—冒泡排序
	int j = 0;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - 1 - j; i++)
		{
			if (score[i] < score[i + 1])
			{
				int temp = score[i];
				score[i] = score[i + 1];
				score[i + 1] = temp;
			}
		}
	}
	//取前5名 
	for (i = 0; i < 5; i++)
	{
		printf("%-2d>>>>>%4d\n", i + 1, score[i]);
	}
	return 0;
}