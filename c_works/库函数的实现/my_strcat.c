#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)            //找到\0的位置
	{
		dest++;
	}
	while ((*dest++ = *src++))//在此\0位置上覆盖新的内容
	{
		;
	}
	return ret;
}