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
	for (i = 0; i < n; i++)
	{
		if (m < arr[i])
			break;
	}
	int k = i;//记录插入位置
	for (i = n ; i > k; i--)
		arr[i] = arr[i-1];
	arr[k] = m;
	//打印
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}