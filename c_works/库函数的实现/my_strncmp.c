#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strncmp(const char* str1, const char* str2, size_t num)
{
    assert(str1 && str2);
    while (num--)
    {
        if ((*str1 != *str2))
        {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return 0;
}
