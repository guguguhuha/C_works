#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����1��ɸѡ��
int main()
{
	int arr[100];
	int n = 0;
	while (~scanf("%d", &n))
	{
//		int arr[n + 1];//c99֮������ñ�������
		int i = 0;
		//��ʼ�����������Ϊ0-n
		for (i = 0; i <= n; i++)
		{
				arr[i] = i;
		}
		for (i = 2; i <= n; i++)
		{
			int j = 0;
			for (j = i + 1; j <= n; j++)
			{
				if (arr[j] % i == 0)
					arr[j] = 0;
			}
		}
		int count = 0;
		for (i = 2; i <= n; i++)
		{
			if (arr[i] != 0)
				printf("%d ", arr[i]);
			else
				count++;
		}
		printf("\n%d\n", count);
	}
	return 0;
}

