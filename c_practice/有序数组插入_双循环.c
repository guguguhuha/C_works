#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;//ԭ�������ݸ���
	int arr[50] = { 0 };
	int m = 0;//Ҫ���������
	//��������
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	//����
	for (i = 0; i < n+1; i++)
	{
		if (arr[i] > m)
		{
			for (int j = n ; j >= i; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[i] = m;
			break;
		}
	}
	if (i == n + 1)//���m������
		arr[n] = m;
	//��ӡ
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}

//void asdf(int arr[], int n)
//{
//	int i;
//	int j;
//	int a = 0;
//	printf("\n��������Ҫ�������:\n");
//	scanf("%d", &a);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > a)
//		{
//			for (j = n - 1; j >= i; j--)
//			{
//				arr[j] = arr[j - 1];
//			}
//			arr[i] = a;
//			break;
//		}
//	}
//	if (arr[n - 1] == 0)
//		arr[n - 1] = a;
//}