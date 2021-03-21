#include<stdio.h>
#include<math.h>


//距离最近的斐波那契数
int main()
{
	int n = 0;
	scanf("%d", &n);//储存用户输入数值

	//制造斐波那契数
	int f1 = 0;
	int f2 = 0;
	int f3 = 0;

	//开始循环查找
	while (1)
	{
		if (n == f2);//用户输入的就为斐波那契数；
		{
			printf("%d\n", 0);
			break;
		}
		else if (n < f2)//输入的数在该轮斐波那契数的前方
		{
			//判断该数离前面的斐波那契数近，还是距离后面的斐波那契数近
			if (abs(f1 - n) <= abs(f2 - n))
			{
				printf("%d\n", abs(f1 - n));//距离前面的斐波那契数近
			}
			else
			{
				printf("%d\n", abs(f2 - n));//距离后面的斐波那契数近
			}
		}

		//此轮斐波那契数不满足，走下一轮
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;

	}

	return 0；
}