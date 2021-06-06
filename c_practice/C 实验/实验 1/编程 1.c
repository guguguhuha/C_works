#include <stdio.h>
main()
{
	float a, b;
	printf("请输入半径值：");
	scanf("%f", &a);
	b = a * a * 3.1415926;
	printf("半径为：%f 圆面积为：%f\n", a, b);
}
