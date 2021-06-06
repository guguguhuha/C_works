#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
int feibo_1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n - 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int feibo_2(int n)
{
	if (n <= 2)
		return 1;
	return feibo_2(n - 1) + feibo_2(n - 2);
}

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		printf("1: %d\n", feibo_1(n));
		printf("2: %d\n", feibo_2(n));
	}
}


#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//递归方式实现打印一个整数的每一位
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}


int main()
{
	int a = 1234;
	print(a);
	return 0;
}




#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
int fac_1(int n)
{
	int ret = 1;
	while (n)
	{
		ret *= n--;
	}
	return ret;
}


int fac_2(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		return n * fac_2(n - 1);
	}
}


int main()
{
	int a = 15;
	printf("1:  %d\n",fac_1(5));
	printf("2:  %d\n",fac_2(5));
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//递归和非递归分别实现strlen
int strlen_1(char*p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}


int strlen_2(char *p)
{
	if (*p == '\0')
		return 0;
	else
		return 1 + strlen_2(p + 1);
}


int main()
{
	char arr[] = "strlen";
	printf("1:  %d\n", strlen_1(arr));
	printf("2:  %d\n", strlen_2(arr));
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char *string)
{
	if ('\0' != *string)
	{
		reverse_string(string+1);
	}	
	printf("%c", *string);
}
int main()
{
	char arr[] = "qwer";
	printf("1:  %s\n2: ", arr);
	reverse_string(arr);
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
int DigitSum(int n)
{
	if (n < 10)
		return n;
	return n%10 + DigitSum(n / 10);
}
int main()
{
	printf("%d\n",DigitSum(1729));
	return 0;
}





#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//编写一个函数实现n的k次方，使用递归实现。
int pow(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	return n * pow(n, k - 1);
}
int main()
{
	printf("%d\n",pow(3,4));
	return 0;
}



