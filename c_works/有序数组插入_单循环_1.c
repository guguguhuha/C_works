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
	for (i = n; i > 0; i--)
	{
		if (arr[i - 1] > m)
			arr[i] = arr[i - 1];
		else
		{
			arr[i] = m;
			break;//�ź�����ѭ��
		}
	}
	//����������С�����е�����
	if (i == 0)
		arr[i] = m;
	//��ӡ
	for (i = 0; i < n + 1; i++)
		printf("%d ", arr[i]);
	return 0;
}