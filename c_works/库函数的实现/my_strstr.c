#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
const char* my_strstr(const char* str1, const char* str2)
{
    assert(str1 && str2);
    const char* start = str1;
    while (*start)
    {
        const char* e1 = start;
        const char* e2 = str2;
        while ((*e1 == *e2) && (*e1) && (*e2))
        {
            e1++;
            e2++;
        }
        if (*e2 == '\0')
        {
            return (char*)start;
        }
        start++;
    }
    return NULL;
}