#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#define of(stu,num)   (int)&(((stu*)0)->num)

struct MyStruct
{
	char a;
	int b;
	short c;
};

int main()
{
	struct MyStruct pp = { 0,0,0 };
	printf("%d\n", of(struct MyStruct, a));
	printf("%d\n", of(struct MyStruct, b));
	printf("%d\n", of(struct MyStruct, c));
	return 0;
}