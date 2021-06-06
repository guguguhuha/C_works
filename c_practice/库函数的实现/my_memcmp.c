#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_memcmp(const void* p1, const void* p2, size_t count)
{
    assert(p1);
    assert(p2);
    char* dest = (char*)p1;
    char* src = (char*)p2;
    while (count-- && (*dest++ == *src++))
    {
        ;
    }
    if (count == 0)
        return 0;
    return *dest - *src;
}
