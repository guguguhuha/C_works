#define _CRT_SECURE_NO_WARNINGS 1

//�滻�ո� ---���ո��滻Ϊ %20 
#include<stdio.h>
#include<string.h>

void replaceSpace(char* str, int length)
{
	//����ո�ĸ���
	int i = 0;
	int space_count = 0;
	for (i = 0; i < length; i++)
	{
		if (*(str + i) == ' ')
		{
			space_count++;
		}
	}

	//������滻���ַ����ĳ��ȣ��Լ�����λ��
	int new_len = length + space_count * 2;//�ַ������ܳ���
	int pos = new_len - 1;//�ַ�������λ��

	str[pos + 1] = '\0';//����ַ���������־ \0

	//�Ӻ���ǰ����ո�
	for (i = length - 1; i >= 0; i--)
	{
		if (str[i] == ' ')//����ǿո�
		{
			str[pos--] = '0';
			str[pos--] = '2';
			str[pos--] = '%';
		}
		else//���ǿո�
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