#include "stdio.h"
main()
{
	int a, b, c,d;
	printf("Please input a,b,c : ");
	scanf("%d%d%d", &a,&b,&c);
	d = c;
	c = b;
	b = a;
	a = d;
	printf("a=%d b=%d c=%d\n", a, b, c);
}
