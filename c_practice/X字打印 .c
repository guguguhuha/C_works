#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0, j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)//�Խ��� 
					printf("*");
				else if (i + j == n - 1)//����һ���Խ���
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}