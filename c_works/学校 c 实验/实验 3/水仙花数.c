#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	for (a = 100; a < 1000; a++)
	{
        int b, c, d, e;
        b = a / 100;
        c = (a - b * 100) / 10;
        d = a - b * 100 - c * 10;
        e = b * b * b + c * c * c + d * d * d;
        if (a == e)
            printf("%d\n",a);
	}
}