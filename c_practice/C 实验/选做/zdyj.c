#define _CRT_SECURE_NO_WARNINGS 1
//������д�����Զ�����������ѡ�⣬����Ϊzdyj.c��
//����׼����answer.txt�ļ��С�����zdyj.c��daan.txt��answer.txt��ͬһ�ļ����У�
//��ʾ����daan.txt��answer.txt�ļ���ȡ���ݣ�
//��2���ļ��ж�ȡ�����ݽ����жϣ�����ͬ����𰸶ԣ�ͳ�ƴ������������������ʾ��֮��
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fp1 = fopen("answer.txt", "r");
	FILE*fp2 = fopen("daan.txt", "r");
	char daan[25];
	char answ[25];
	char fause[5] = { "��" };
	char tru[5] = { "��" };
	char torf[5]; 
	int flag = 0;
	int count = 0;
	int i,j;
	if (fp1 == NULL)
	{
		printf("1 err\n");
		exit(0);
	}
	if (fp2 == NULL)
	{
		printf("2 err\n");
		exit(0);
	}
	fscanf(fp1, "%s", &daan);
	fscanf(fp2, "%s", &answ);
	for (i = 0; i < strlen(daan) ; i++)
	{
		flag = 0;
		if (daan[i] == answ[i])
		{
			count += 5;
			flag = 1;
		}
		if (flag)
			for (j = 0; j < 5; j++)
				torf[j] = tru[j];
		else
			for (j = 0; j < 5; j++)
				torf[j] = fause[j];
		printf("��%d��%s�����Ĵ���: %c����׼���ǣ�%c\n", i + 1, torf, answ[i], daan[i]);
	}
	
	printf("����ܷ�Ϊ��%d\n", count);
	return 0;
}