#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); //���Ա�֤dest��Ϊ��ָ��
	assert(src != NULL);  //���Ա�֤src��Ϊ��ָ��

	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}