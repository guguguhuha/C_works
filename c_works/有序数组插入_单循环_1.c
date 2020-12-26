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
	for (i = n; i > 0; i--)
	{
		if (arr[i - 1] > m)
			arr[i] = arr[i - 1];
		else
		{
			arr[i] = m;
			break;//排好跳出循环
		}
	}
	//如果插入的数小于所有的数字
	if (i == 0)
		arr[i] = m;
	//打印
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}