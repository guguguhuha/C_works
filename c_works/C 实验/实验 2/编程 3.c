#include"stdio.h"
main()
{
    char a, b;
    printf("请输入一个英文字母: ");
    scanf("%c", &a);
    b = a + 6;
    if (b <= 90)
    {
        if (b == -128)
            printf("f");
        else
            printf("%c\n", b);
    }

   else if (b > 90 && b <= 96)
    {
        b = b - 26;
        printf("%c\n", b);
    }
   else if (b > 96 && b <= 122)
        printf("%c\n", b);
 else
    {
        b = b - 26;
        printf("%c\n", b);

    }
}
