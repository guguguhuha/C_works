#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//arr是一个整形一维数组。
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int *p = arr;
//	for (int i = 0; i < 10; p++,i++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容。
//输入
//I am a student
//输出
//tneduts a ma I
//#include<stdio.h>
//#include<string.h>
//
//void str(char a[],int sz)
//{
//	for (int i = 0; i < sz/2; i++)
//	{
//		char temp = a[i];
//		a[i] = a[sz - 1 - i];
//		a[sz - 1 - i] = temp;
//	}
//}
//int main()
//{
//	char a[101] = { 0 };
//	fgets(a, 100, stdin);
//	int sz = (int)strlen(a);
//	str(a,sz);
//	printf("%s", a);
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//例如：2 + 22 + 222 + 2222 + 2222
//#include<stdio.h>
//
//int sum(int a)
//{
//	int i = 5,su=0;
//	int ret = 0;
//	while (i--)
//	{
//		ret = ret * 10 + a;
//		su += ret;
//	}
//	return su;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int c = sum(a);
//	printf("%d", c);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 
//	: 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <stdio.h>
//
//#include <math.h>
//
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100000; i++)
//	{
//		int count = 1;
//		int temp = i;
//		int sum = 0;
//		while (temp /= 10)//位数
//		{
//			count++;
//
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += (int)pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


////打印菱形
//#include<stdio.h>
//int main()
//{
//	int a = 7;
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 7 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * (i + 1) - 1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 11-2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include<stdio.h>
int a = 0;
int main()
{
	int money = 20;
	int count = 0;
	while (money)
	{
		money--;
		count++;
		a++;
		if (a == 2)
		{
			a = 0;
			money++;
		}
	}
	printf("%d\n", count);
	return 0;
}