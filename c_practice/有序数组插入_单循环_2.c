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
	for (i = 0; i < n; i++)
	{
		if (m < arr[i])
			break;
	}
	int k = i;//��¼����λ��
	for (i = n ; i > k; i--)
		arr[i] = arr[i-1];
	arr[k] = m;
	//��ӡ
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}