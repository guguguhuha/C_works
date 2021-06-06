#define _CRT_SECURE_NO_WARNINGS
/*4.输入一个10~10000的正整数。要求如下：
（1）求出它是几位数；
（2）输出每一位数字；
（3）判断其逆序后是否仍与原数相同，并输出结果。*/

#include<stdio.h>


int main()
{
	
	int a,b,c,d,e,f,g,t;
	fault:
	printf("请输入一个10~10000的正整数: ");
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
		printf("输入错误\n");
		printf("是否要再次输入？ 1--是  2--否\t");
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
			printf("你所输入的数字为%d位数\n十位为%d\n个位为%d\n", t,b, c);
			d = c * 10 + b;
			printf("你所输入的数字倒序为%d,", d);
			if (a == d)
				printf("与原数相等\n");
			else
				printf("与原数不相等\n");
			break;
		}
		case 3:
		{
			b = a / 100;
			c = (a - b * 100) / 10;
			d = (a - b * 100) % 10;
			e = d * 100 + c * 10 + b;
			printf("你所输入的数字为%d位数\n百位为%d\n十位为%d\n个位为%d\n",t,b,c,d);
			printf("你所输入的数字倒序为%d,", e);
			if (a == e)
				printf("与原数相等\n");
			else
				printf("与原数不相等\n");
			break;
		}
		case 4:
		{
			b = a / 1000;
			c = (a - b * 1000) / 100;
			d = (a - b * 1000 - c * 100) / 10;
			e = (a - b * 1000 - c * 100) % 10;
			f = e * 1000 + d * 100 + c * 10 + b;
			printf("你所输入的数字为%d位数\n千位为%d\n百位为%d\n十位为%d\n个位为%d\n",t,b,c,d,e);
			printf("你所输入的数字倒序为%d,", f);
			if (a == f)
				printf("与原数相等\n");
			else
				printf("与原数不相等\n");
			break;
		}
		case 5:
		{
			printf("你所输入的数字为5位数\n万位为1\n千位为0\n百位为0\n十位为0\n个位为0\n");
			printf("你所输入的数字倒序为1,与原数不相等\n");
		}
	}
done:
	return 0;
	
}