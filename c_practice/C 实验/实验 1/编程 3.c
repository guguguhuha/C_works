#include<stdio.h>
main()
{
	float a, b, s;
	printf("«Î ‰»Î a b:");
	scanf("%f%f", &a, &b);
	s = 2 * a * b / (a + b) / (a + b);
	printf("s=%f", s); 
}
