#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* destination, const void* source, size_t num)
{
	assert(destination && source);
	void* ret = destination;
	while (num--)
	{
		*((char*)destination)++ = *((char*)source)++;
	}
	return ret;
}