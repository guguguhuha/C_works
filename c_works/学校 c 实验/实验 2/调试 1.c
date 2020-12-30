#include <stdio.h>
int main()
{
    int a, b;
    printf("请输入一个数值按回车完成输入\n");
    scanf("%d", &a);
    b = a % 2;
    if (b == 0)
        printf("%d 是偶数", a);
    else
        printf("%d 是奇数", a);
    return 0;
}
