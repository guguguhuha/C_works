#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncpy(char* destination, const char* source, size_t num)
{
	assert(destination && source);
	char* ret = destination;
	//*(destiation + num) = '\0';
	destination[num] = '\0';
	while (num--)
	{
		if (*source == '\0')
		{
			*destination = '\0';
			break;
		}
		*destination++ = *source++;
	}
	return ret;
}