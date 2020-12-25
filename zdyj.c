#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int *p = &n;
	scanf("%d", p);
	printf("%d",n);
}