#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* my_memset(void* src, int ch, size_t count)
{
	assert(src != NULL);
	void* start = src;
	while (count--)
	{
		*(char*)src = (char)ch;
		src = (char*)src + 1;
	}
	return start;
}