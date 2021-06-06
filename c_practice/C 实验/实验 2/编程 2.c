#include "stdio.h"
int main()
{
    int a, b, c, d, e;
    printf("请输入一个三位数\n");
    scanf("%d", &a);
    b = a / 100;
    c = (a - b * 100) / 10;
    d = a - b * 100 - c * 10;
    e = b * b * b + c * c * c + d * d * d;
    if (a == e)
        printf("您输入的数为水仙数\n");
    else
        printf("您输入的数不为水仙数\n");
    return 0;

}
