#include<stdio.h>
void qwer(int arr[], int n)
{
	int a, b, j, i;
	for (j=0;j<n;j++)
		for (i = 0; i < n-j-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				a = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = a;
			}
		}
}
void asdf(int arr[], int n)
{
	int i;
	int j;
	int a = 0;
	printf("\n请输入你要插入的数:\n");
	scanf("%d", &a);
	for (i = 0; i < n; i++)
	{
		if (arr[i] > a)
		{
			for (j = n-1 ; j >= i; j--)
			{
				arr[j ] = arr[j-1];
			}
			arr[i] = a;
			break;
		}
	}
	if (arr[n - 1] == 0)
		arr[n - 1] = a;
}
int main()
{
	int i = 0;
	int arr[11] = { 0 };
	int n = 0;
	printf("请输入一些数：");
	for (i = 0; i < 10; i++)
		scanf("%d",&arr[i]);
	n = 10;
	qwer(arr, n);
	printf("排序后的结果为：\n");
	for ( i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	n = n + 1;
	asdf(arr, n);
	printf("插入排序后的结果为：\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
