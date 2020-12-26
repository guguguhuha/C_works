#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;//原来的数据个数
	int arr[50] = { 0 };
	int m = 0;//要插入的数据
	//输入数据
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	//处理
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
	if (i == n + 1)//如果m是最大的
		arr[n] = m;
	//打印
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}

//void asdf(int arr[], int n)
//{
//	int i;
//	int j;
//	int a = 0;
//	printf("\n请输入你要插入的数:\n");
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