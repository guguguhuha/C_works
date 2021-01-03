#define _CRT_SECURE_NO_WARNINGS 1
//5、自定义函数，函数的功能是删除字符串中的所有数字字符。
//主函数输入一个字符串调用自定义函数删除串中的数字字符。
//例如：输入ch6i7n2a，输出china

#include<stdio.h>
#include<string.h>
int IS(char str[])
{
	int i = 0;
	char *p = NULL;
	int have = 0;
	p = str;
	while (*p && !have)
	{
			if (*p >= '0' && *p <= '9')
				have = 1;
			p++;
	}
	if (have)
		return 1;
	return 0;
}

void del(char str[],char s[])
{
	int i, j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i]<'0' || str[i]>'9')
		{
			s[j++] = str[i];
		}
	}
	s[j] = '\0';
}
int main()
{
	char str[50] = { 0 };
	char s[50] = { 0 };
	int n;
	printf("请输入：");
	scanf("%s", &str);
	del(str,s);
	printf("%s", s);
	return 0;
}
