#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	//�����е����ֽ�������ð������
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
	//ȡǰ5�� 
	for (i = 0; i < 5; i++)
	{
		printf("%-2d>>>>>%4d\n", i + 1, score[i]);
	}
	return 0;
}