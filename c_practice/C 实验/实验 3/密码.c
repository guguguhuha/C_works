#define _CRT_SECURE_NO_WARNINGS
//2.����ʵ��2:������֤(3�λ���)��
#include<stdio.h>

int main()
{
	int i = 0;
	int pwd=0;
	for (i = 0; i < 3; i++)
	{
		printf("���������� ��");
		scanf("%d",&pwd);
		if (pwd==1234)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 3)
		printf("�����������ۼ������������\n��½ʧ��");
	return 0;
}