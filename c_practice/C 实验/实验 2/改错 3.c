#include "stdio.h"
main()
{
    float a, b;
    printf("������������ʱ���ֻ���ʵ�ʼ۸�\n");
    scanf("%f", &b);
    printf("\n\n����ڲ�ʱ���ֻ��ļ۸�\n");
    scanf("%f", &a);
    if (a < b)
        printf("����\n");
   else if (a == b)
        printf("�¶���!\n");
   else
        printf("����\n");
}

