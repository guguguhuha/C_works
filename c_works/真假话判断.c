#define _CRT_SECURE_NO_WARNINGS 1

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������


#include <stdio.h>
int Over(int arr[])//�ж������ڵ�ֵ�Ƿ����ظ���
{
    int i = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
                return 0;
        }
        return 1;
}

int main()
{
    //����arr[0]~arr[4]�ֱ����A B C D E
    //arr[i]��ֵ��ʾ������
    int arr[5] = { 0 };
    for (arr[0] = 1; arr[0] <= 5; ++arr[0])
       for (arr[1] = 1; arr[1] <= 5; ++arr[1])
           for (arr[2] = 1; arr[2] <= 5; ++arr[2])
               for (arr[3] = 1; arr[3] <= 5; ++arr[3])
                   for (arr[4] = 1; arr[4] <= 5; ++arr[4]){
                    if (  (arr[1] == 2) + (arr[0] == 3) == 1
                       && (arr[1] == 2) + (arr[4] == 4) == 1
                       && (arr[2] == 1) + (arr[3] == 2) == 1
                       && (arr[2] == 5) + (arr[3] == 3) == 1
                       && (arr[4] == 4) + (arr[0] == 1) == 1)
                    if (Over(arr)!=0)
                       printf("A:%d B:%d C:%d D:%d E:%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
                    }
    return 0;
}
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�


#include<stdio.h>
int main()
{
    int k = 0;
    for (k == 'A'; k <= 'D'; k++)//��A��ʼ�ж�
    {
        if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)//�����ֵ�����
        {
            printf("k=%c\n", k);
        }
    }
    return 0;
}

//����Ļ�ϴ�ӡ������ǡ�
//
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
//
//����
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#define N 14
void main()
{
    int i, j, k, n = 0, a[N][N];
    while (n <= 0 || n >= 13)
    {
        printf("������Ҫ��ӡ��������");
        scanf("%d", &n);
    }
    printf("%d������������£�\n", n);
    for (i = 1; i <= n; i++)
        a[i][1] = a[i][i] = 1;
    for (i = 3; i <= n; i++)
        for (j = 2; j <= i - 1; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= n - i; k++)
            printf("   ");
        for (j = 1; j <= i; j++)
            printf("%6d", a[i][j]);


        printf("\n");
    }
    printf("\n");
}

