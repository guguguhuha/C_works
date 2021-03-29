#define _CRT_SECURE_NO_WARNINGS 1

//替换空格 ---将空格替换为 %20 
#include<stdio.h>
#include<string.h>

void replaceSpace(char* str, int length)
{
	//计算空格的个数
	int i = 0;
	int space_count = 0;
	for (i = 0; i < length; i++)
	{
		if (*(str + i) == ' ')
		{
			space_count++;
		}
	}

	//计算出替换后字符串的长度，以及最后的位置
	int new_len = length + space_count * 2;//字符串的总长度
	int pos = new_len - 1;//字符串最后的位置

	str[pos + 1] = '\0';//添加字符串结束标志 \0

	//从后往前处理空格
	for (i = length - 1; i >= 0; i--)
	{
		if (str[i] == ' ')//如果是空格
		{
			str[pos--] = '0';
			str[pos--] = '2';
			str[pos--] = '%';
		}
		else//不是空格
		{
			str[pos--] = str[i];
		}
	}
}

int main()
{
	char arr[1024];
	gets(arr);
	replaceSpace(arr, strlen(arr));
	puts(arr);
	return 0;
}