#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)            //�ҵ�\0��λ��
	{
		dest++;
	}
	while ((*dest++ = *src++))//�ڴ�\0λ���ϸ����µ�����
	{
		;
	}
	return ret;
}