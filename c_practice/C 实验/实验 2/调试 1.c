#include <stdio.h>
int main()
{
    int a, b;
    printf("������һ����ֵ���س��������\n");
    scanf("%d", &a);
    b = a % 2;
    if (b == 0)
        printf("%d ��ż��", a);
    else
        printf("%d ������", a);
    return 0;
}
