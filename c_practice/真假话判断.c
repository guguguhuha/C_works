#define _CRT_SECURE_NO_WARNINGS 1

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次


#include <stdio.h>
int Over(int arr[])//判断数组内的值是否有重复的
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
    //数组arr[0]~arr[4]分别代表A B C D E
    //arr[i]的值表示其名次
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
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词:
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。


#include<stdio.h>
int main()
{
    int k = 0;
    for (k == 'A'; k <= 'D'; k++)//从A开始判断
    {
        if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)//是凶手的条件
        {
            printf("k=%c\n", k);
        }
    }
    return 0;
}

//在屏幕上打印杨辉三角。
//
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
//
//……
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#define N 14
void main()
{
    int i, j, k, n = 0, a[N][N];
    while (n <= 0 || n >= 13)
    {
        printf("请输入要打印的行数：");
        scanf("%d", &n);
    }
    printf("%d行杨辉三角如下：\n", n);
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

