#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����2���Գ���
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n = 0;
	//��Ŀ�൱�ڴ�ӡn���ڵ�����
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		int count = 0;
		for (i = 2; i <= n; i++)
		{
			if (is_prime(i) == 1)
			{
				printf("%d ", i);
			}
			else
			{
				count++;
			}
		}
		printf("\n%d\n", count);
	}
	return 0;
}