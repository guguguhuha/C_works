// 强调！！！
//调试请加setbuf(stdout,NULL)!!!

#include "SLT.h"

//改变值为什么不传它的地址呢？
//pos 现在是 SLTNode* 型
//而现在函数SLTModify里的参数也是 SLTNode* 型的
//它俩类型相同，为什么可以把数值改掉？


//注意：改变指针指向的时候需要传递二级指针
//     如果是修改指针指向空间中的值，一级指针就可以做的到
//下来写两个函数就明白了：
//swap：交换两个整形变量
//swap：交换两个指针变量
//把这两个函数实现出来
//然后自己画图好好想想  就彻底搞清楚什么情况下需要传递二级指针   什么情况下需要传递一级指针

void change(char *p)
{
    p[0] = '!';
}

void change_2(char **p)
{
    static char *a = "12334";
    *p = a;
}

int main()
{
    char a[] = "dadasfsfa";
    char *p = a;

    //改变指针所指向的值
    change(p);
    printf("%s\n", p);//!adasfsfa

    //改变指针的指向
    change_2(&p);
    printf("%s\n", p);//12334
    return 0;
}
