#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//利用库函数进行排序(升序)
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
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
	//对所有数字进行排序
	int j = 0;
	qsort(score, n, 4, cmp_int);
	//取前5名 
	for (i = 0; i < 5; i++)
	{
		printf("%-2d>>>>>%4d\n", i + 1, score[i]);
	}
	return 0;
}