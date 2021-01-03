#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void sorted(int arr[],int n)
{
	int j = 0, i = 0, temp = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
int main()
{
	int m, n, i, j, k ;
	int arr1[100], arr2[100],arr3[200];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (j = 0; j < n; j++)
	{
		scanf("%d", &arr2[j]);
	}
	sorted(arr1, m);
	sorted(arr2, n);
	j = 0;
	i = 0;
	k = 0;
	while (i < m && j < n)
	{
		if (arr1[i] <= arr2[j])
		{
			arr3[k++] = arr1[i];
			i++;
		}
		else if (arr1[i] >= arr2[j])
		{
			arr3[k++] = arr2[j];
			j++;
		}
	}
	if (i == m)
	{
		for (; j < n; j++)
		{
			arr3[k++] = arr2[j];
		}
	}
	else if (j == n)
	{
		for (; i < m; i++)
		{
			arr3[k++] = arr1[i];
		}
	}
	printf("%d\n", k);
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}