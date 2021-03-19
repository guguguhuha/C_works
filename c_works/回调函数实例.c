//int main()
//{
//    SYSTEMTIME tm;
//    GetLocalTime(&tm);
//    printf("%d-%d-%d %d:%d:%d\n",tm.wYear,tm.wMonth,tm.wDay,tm.wHour,tm.wMinute,tm.wSecond);
//    //time_t p,t;
//    //time(&p);
//    //printf("%s\n", asctime(gmtime(&p)));
//    //Sleep(1000);
//    //time(&t);
//    //printf("%s\n", asctime(gmtime(&t)),);
//    return 0;
//}


//回调函数实例
#include<stdio.h>
#include<time.h>
#include <Windows.h>

void print()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
        Sleep(100);
    }
    printf("\n");
}

void print_time(void (*fun)())
{
    SYSTEMTIME tm;

    GetLocalTime(&tm);
    printf("函数开始前的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);

    printf("\n函数执行中……\n");
    fun();

    GetLocalTime(&tm);
    printf("\n函数结束后的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);
}

int main()
{
    print_time(print);

    return 0;
}
