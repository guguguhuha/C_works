#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); //断言保证dest不为空指针
	assert(src != NULL);  //断言保证src不为空指针

	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}