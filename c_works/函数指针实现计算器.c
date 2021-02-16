#define _CRT_SECURE_NO_WARNINGS
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a; &b;
//	int* arr[] = {&a, &b};
//	//函数指针的数组
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//函数指针
//
//	int(* pfA[4])(int, int);//函数指针的数组
//
//	//函数指针数组
//
//	//pfArr2就是函数指针数组
//	//int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}
//

#include<stdio.h>
//计算器 - 加、减、乘、除
void menu()
{
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
//
////函数传参-函数指针
////回调函数
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//计算器
//			break;
//		case 2:
//			calc(Sub);//计算器
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//函数指针数组 - 转移表
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);//1
		if (0 == input)
		{
			printf("退出程序\n");
			break;
		}
		else if (input>=1 && input<=4)
		{
			printf("请输入2个操作数:>");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}