#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//
//输入例子 :
//
//1999 2299
//
//输出例子 : 7
//int main()
//{
//	int a, b, count = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	while (c)
//	{
//		if ((c & 1) == 1)
//			count++;
//		c = c >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//偶数位
//	printf("奇数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	printf("偶数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数。

//比如： 15    0000 1111    4 个 1

#include<stdio.h>
int fun(int c)
{
	int con = 0;
	while (c)
	{
		if ((c & 1) == 1)
			con += 1;
		c = c >> 1;
	}
	return con;
}
int main()
{
	int a;
	scanf("%d", &a);
	int c = fun(a);
	printf("%d", c);
	return 0;
}