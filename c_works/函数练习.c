//实现一个函数，判断一个数是不是素数。

//利用上面实现的函数打印100到200之间的素数。

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<math.h>
int Is_prime(int i)
{
	int j = 0;
	int flag = 1;
	for (j = 2; j <= sqrt(i); j ++)
	{
		if (0 == i % j)
		{
			flag = 0;
			return 0;
		}
	}
	if (flag)
		return 1;
}
int main()
{
	int i = 0;
	for (i = 101; i < 201; i += 2)
	{
		if (1 == Is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}



//实现函数判断year是不是闰年

#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


int Is_leap_year(int year)
{
	if (((0 == year % 4) && (0 != year % 100)) || (0 == year % 400))
		return 1;
	else
		return 0;
}


int main()
{
	int input = 0;
	printf("请输入一个年份：");
	scanf("%d", &input);
	if (1 == Is_leap_year(input))
		printf("%d是闰年\n",input);
	else
		printf("%d不是闰年\n",input);
	return 0;
}



//实现一个函数来交换两个整数的内容。
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


void exchange(int* a, int* b)
{
	//printf("during_1:\na=%p b=%p\n", a, b);
	int* temp = NULL;
	temp = *a;
	//printf("during_2:\na=%p b=%p temp=%p\n", a, b, temp);
	*a = *b;
	//printf("during_3:\na=%p b=%p temp=%p\n", a, b, temp);
	*b = temp;
	//printf("during_4:\na=%p b=%p temp=%p\n", a, b, temp);
}


int main()
{
	int a = 3;
	int b = 2;
	printf("before:\na=%d b=%d\n",a,b);
	exchange(&a, &b);
	printf("after:\na=%d b=%d\n",a,b);
}



//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


void print(int num)
{
	int i = 0, j = 0;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d * %2d=%-4d", j, i, j*i);
		}
		printf("\n");
	}
}


int main()
{
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	print(num);
	return 0;
}

//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
#include<stdio.h>
int main()
{
    int y,m,day;
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(~scanf("%d %d",&y,&m))
    {
             day=d[m-1];
        if(y%400==0||y%4==0&&y%100!=0)
        {
            if(m==2)
                day++;
           
        }
        printf("%d\n",day);
        
    }
    return 0;
}
