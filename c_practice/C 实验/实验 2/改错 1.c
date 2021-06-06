#include "stdio.h"
main()
{
	int a, b, c, max;
	printf("请输入３个整数：\n");
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
	printf("３个数中最大者为：%d\n", max);
}
