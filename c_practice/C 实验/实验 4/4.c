#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//4. �Զ���3 �������������Ĺ��ֱܷ�ʵ�����£�1��~��3)���ܡ�����һ��10~10000����������ͨ���˵�ѡ����ԣ�
//��1��������Ǽ�λ����
//��2�����ÿһλ���֣�
//��3���ж���������Ƿ�����ԭ����ͬ���Ƿ�Ϊ��������������������
//Ҫ��˵�ѡ������ݴ��ܣ�����10~10000�������������󣬿����ظ�����ֱ����ȷ�������ݴ���
//�˵��������޴�ѡ��ֱ�������˳�������ɲο���3�⡰�˵�ѡ����һ�����ĺ���ֵ����

void digit(int num1)
{
	int i=0;
	int num = num1;
	while (num)
	{
		num /= 10;
		i++;
	}
	printf("%dΪ%dλ��\n", num1, i);
}
int per_digit(int num1)
{
	int num = num1;
	if (num1 > 9)
		per_digit(num1/10);
	printf("%d\t\n",num1 % 10);
}
int pal(int num1)
{
	int num = num1;
	int PAL = 0;
	int i;
	do
	{
		i = num % 10;
		PAL = PAL * 10 + i;
		num /= 10;
	} while (num > 0);
	if (PAL == num1)
		printf("%d�ǻ�����\n", num1);
	else
		printf("%d���ǻ�����\n", num1);
}
int INPUT()
{
	int num;
	while (1)
	{
		printf("������һ������10~10000��:  \n");
		scanf("%d", &num);
		if (num >= 10 && num <= 10000)
			return num;
	}
}
int main()
{
	int num,choice;
	int flag = 0;
	char esc;
	printf("������������һЩ�жϼ�����\n");
	printf("###################################################################\n");
	printf("# 1 ������Ǽ�λ��\t\t\t\t\t\t###\n");
	printf("# 2 ���ÿһλ����\t\t\t\t\t\t###\n");
	printf("# 3 �ж���������Ƿ�����ԭ����ͬ���Ƿ�Ϊ������������������\t###\n");
	printf("# 0 �˳�\t\t\t\t\t\t\t###\n");
	printf("###################################################################\n");
	while (1)
	{
		while (1)
		{
			printf("�밴�˵�������ѡ��( 0~3 ):  \n");
			scanf("%d", &choice);
			if (choice >= 0 && choice <= 3)
				break;
		}

		
		switch (choice)
		{
		case 1:
			num = INPUT();
			digit(num);
			break;
		case 2:
			num = INPUT();
			per_digit(num);
			break;
		case 3:
			num = INPUT();
			pal(num);
			break;
		case 0:
			printf("��ȷ��Ҫ�˳��𣿣�y/n��");
			getchar();
			scanf("%c", &esc);
			if (esc == 'y')
			{
				printf("ллʹ�ã� \n");
				flag = 1;
			}
			break;
		}
		if (flag)
			break;
		
	}
	return 0;
}
	