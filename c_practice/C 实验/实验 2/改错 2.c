#include "stdio.h"
main()
{
	int a, b, c;
	printf("�����룳��������\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b)
	{
		if (b == c)
			printf("a == b == c");
		else
			printf("a == b !=c ");
	}
	else
		printf("a != b");

}
