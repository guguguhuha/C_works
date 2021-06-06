#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int fact(int n)
{
	int i = 1;
	while (n)
		i = i * n--;
	return i;
}

int facl(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * facl(n - 1);
}
void main()
{
	double e, p;
	int i = 0;
	e = 0;
	p = 1;
	while (p >= 0.000001)
	{
		p = 1.0 / facl(i);
		e += p;
		i = i + 1;
	}
	printf("e=%f\n", e);
}

