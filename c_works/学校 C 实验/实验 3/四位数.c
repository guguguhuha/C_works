#define _CRT_SECURE_NO_WARNINGS
/*4.����һ��10~10000����������Ҫ�����£�
��1��������Ǽ�λ����
��2�����ÿһλ���֣�
��3���ж���������Ƿ�����ԭ����ͬ������������*/

#include<stdio.h>


int main()
{
	
	int a,b,c,d,e,f,g,t;
	fault:
	printf("������һ��10~10000��������: ");
	scanf("%d", &a);
	if (a <= 10000 && a >= 10)
	{
		if (a / 100 == 0 || a == 10)
			t = 2;
		else if (a / 1000 == 0)
			t = 3;
		else if (a / 10000 == 0)
			t = 4;
		else if (a == 10000)
			t = 5;
	}
	else
	{
		printf("�������\n");
		printf("�Ƿ�Ҫ�ٴ����룿 1--��  2--��\t");
		scanf("%d", &g);
		if (g == 1)
			goto fault;
		else
			goto done;
	}
	switch (t)
	{
		case 2:
		{
			b = a / 10;
			c = a % 10;
			printf("�������������Ϊ%dλ��\nʮλΪ%d\n��λΪ%d\n", t,b, c);
			d = c * 10 + b;
			printf("������������ֵ���Ϊ%d,", d);
			if (a == d)
				printf("��ԭ�����\n");
			else
				printf("��ԭ�������\n");
			break;
		}
		case 3:
		{
			b = a / 100;
			c = (a - b * 100) / 10;
			d = (a - b * 100) % 10;
			e = d * 100 + c * 10 + b;
			printf("�������������Ϊ%dλ��\n��λΪ%d\nʮλΪ%d\n��λΪ%d\n",t,b,c,d);
			printf("������������ֵ���Ϊ%d,", e);
			if (a == e)
				printf("��ԭ�����\n");
			else
				printf("��ԭ�������\n");
			break;
		}
		case 4:
		{
			b = a / 1000;
			c = (a - b * 1000) / 100;
			d = (a - b * 1000 - c * 100) / 10;
			e = (a - b * 1000 - c * 100) % 10;
			f = e * 1000 + d * 100 + c * 10 + b;
			printf("�������������Ϊ%dλ��\nǧλΪ%d\n��λΪ%d\nʮλΪ%d\n��λΪ%d\n",t,b,c,d,e);
			printf("������������ֵ���Ϊ%d,", f);
			if (a == f)
				printf("��ԭ�����\n");
			else
				printf("��ԭ�������\n");
			break;
		}
		case 5:
		{
			printf("�������������Ϊ5λ��\n��λΪ1\nǧλΪ0\n��λΪ0\nʮλΪ0\n��λΪ0\n");
			printf("������������ֵ���Ϊ1,��ԭ�������\n");
		}
	}
done:
	return 0;
	
}