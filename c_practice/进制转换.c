#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int  r, n;
	char b[] = "0123456789ABCDEF";
	while (~scanf("%d%d", &n, &r))
	{
		int a[32], i = 0;
		do
		{
			a[i] = n % r;
			n /= r;
			i++;
		} while (n);
		for (--i; i >= 0; i--)
		{
			n = a[i];
			printf("%c", b[n]);
		}
		printf("\n");
	}
	
	return 0;
}