#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strncat(char* destination, const char* source, size_t num)
{
	assert(destination && source);
	char* ret = destination;
	while (*destination);//’“µΩ\0
	destination[num] = '\0';//∑≈÷√\0
	while (num--)
	{
		*destination++ = *source++;
		if (*source == '\0')
		{
			*destination = '\0';
			break;
		}
	}
	return ret;
}