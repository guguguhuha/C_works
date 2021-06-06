#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	time_t timep;
//	struct tm *p;
//	time(&timep);
//	p = gmtime(&timep);
//	printf("%d\n", p->tm_sec); /*获取当前秒*/
//	printf("%d\n", p->tm_min); /*获取当前分*/
//	printf("%d\n", 8 + p->tm_hour);/*获取当前时,这里获取西方的时间,刚好相差八个小时*/
//	printf("%d\n", p->tm_mday);/*获取当前月份日数,范围是1-31*/
//	printf("%d\n", 1 + p->tm_mon);/*获取当前月份,范围是0-11,所以要加1*/
//	printf("%d\n", 1900 + p->tm_year);/*获取当前年份,从1900开始，所以要加1900*/
//	printf("%d\n", p->tm_yday); /*从今年1月1日算起至今的天数，范围为0-365*/
//}
#include <stdio.h>
#include <time.h>
int main()
{
	time_t t;
	struct tm * lt;
	time(&t);//获取Unix时间戳。
	lt = localtime(&t);//转为时间结构。
	printf("%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, 1+lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);//输出结果
	return 0;
}
