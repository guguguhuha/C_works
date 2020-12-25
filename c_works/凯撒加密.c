#define _CRT_SECURE_NO_WARNINGS 1
//3、简单的加密（凯撒密码）
//基本思想是：通过把字母移动一定的位数来实现加密和解密。明文中的所有字母都在字母表上向后（或向前）按照一个固定数目进行偏移后被替换成密文。
//例如，当偏移量是 3 的时候，所有的字母 A 将被替换成 D，B 变成 E，由此可见，位数就是凯撒密码加密和解密的密钥。
//（1）	输入一个字符串（原文），按照上述的加密思想将其加密，输出密文。
//（2）	输入一个字符串（密文），按照（1）的加密算法，将其解密，输出原文。
//（3）	自定义函数 void jiami(char str[], int m, int n)，函数的功能是将一个字符串加密，串的长度和加密偏移量可变，并主函数调用验证。
#include<stdio.h>
void jiami(char str[], int m, int n)
{
	int i;
	for (i = 0; i < m; i++ )
	{
		if(str[i]>122-n|| (str[i] >= 90 - n&& str[i]<=90))
			str[i] += n-26 ;
		else
			str[i] += n;
	}
}
int main()
{
	int a, b;
	char str[100] = { 0 };
	printf("请输入要加的密码：");
	scanf("%s", &str);
	printf("请输入要加密的位数：");
	scanf("%d", &a);
	printf("请输入要加密的偏移量：");
	scanf("%d", &b);
	jiami(str, a, b);
	printf("加密后的成果为：");
	printf("%s", str);
	return 0;
}
