#include "stdio.h"
main()
{
    float a, b;
    printf("请主持人输入时尚手机的实际价格\n");
    scanf("%f", &b);
    printf("\n\n请观众猜时尚手机的价格\n");
    scanf("%f", &a);
    if (a < b)
        printf("低了\n");
   else if (a == b)
        printf("猜对了!\n");
   else
        printf("高了\n");
}

