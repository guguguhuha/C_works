#include "stdio.h"
main()
{
	int a, b, c, max;
	printf("�����룳��������\n");
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	if (c > b)
	{
		if (b > a)
			max = c;
		else
		{
			if (c > a)
				max = c;
			else
				max = a;
		}
	}
	else		  //b>c
	{
		if (c > a)
			max = b;
		else    			//a>c
		{
			if (a > b)
				max = a;
			else//b>a
				max = b;
		}
	}
	printf("�������������Ϊ��%d\n", max);
}
