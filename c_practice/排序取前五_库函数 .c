#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//���ÿ⺯����������(����)
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int n = 0;
	int score[40] = { 0 };
	//����n���ɼ� 
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	//���������ֽ�������
	int j = 0;
	qsort(score, n, 4, cmp_int);
	//ȡǰ5�� 
	for (i = 0; i < 5; i++)
	{
		printf("%-2d>>>>>%4d\n", i + 1, score[i]);
	}
	return 0;
}