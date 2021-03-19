#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void fun(char arr[7])
//{
//	printf("%s", arr);
//	arr[3] = 'a';
//	printf("%s", arr);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	fun(arr[6]);
//
//	return 0;
//}
//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//char* (*fun1)(char* p1, char* p2);
//
//void print()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	void(*p)() = &print;
//	void(*ch)() = print;
//
//	p();
//	(*ch)();
//
//	return 0;
//}

//void print()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	void(*p)() = &print;//p是一个函数指针，所指向的函数无参无返回值
//
//	(*p)();
//
//	return 0;
//}
//
//(  *(   void(*)()  )0  )()

//void(*signal(int, void(*)(int)))(int);

//这是一个函数声明
//声明的函数叫signal，signal函数有2个参数，第一个参数类型是int,第二个参数类型是一个函数指针，该函数
//指针指向的函数参数是int，返回类型是void
//signal函数的返回来类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void

//typedef void(*pfun_t)(int);//类型为指向一个参数为int，无返回值的函数指针
//pfun_t signal(int, pfun_t);//用上述类型，声明了一个函数

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//
//	//函数指针的数组
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//函数指针
//
//	int(* pfA[4])(int, int);//函数指针的数组
//
//	//函数指针数组
//
//	//pfArr2就是函数指针数组，数组的类型为 int(*)(int,int)
//	int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}

////计算器 - 加、减、乘、除
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1. add   2. sub    ****\n");
//	printf("**** 3. mul   4. div    ****\n");
//	printf("**** 0. exit            ****\n");
//	printf("****************************\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
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














//
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1. add   2. sub    ****\n");
//	printf("**** 3. mul   4. div    ****\n");
//	printf("**** 0. exit            ****\n");
//	printf("****************************\n");
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//函数指针数组 - 转移表
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);//1
//		if (0 == input)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if (input>=1 && input<=4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	//函数指针
//	int(*p)(int, int);
//	//函数指针的数组,数组元素类型为 int（*）(int, int)
//	int(*pArr[4])(int, int);
//	//ppArr是指向函数指针数组的指针
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>

////这里的函数作用都是讲传递的字符串给打印出来
//char* fun1(char* p)
//{
//	printf("%s\n", p);
//	return p;
//}
//
//char* fun2(char* p)
//{
//	printf("%s\n", p);
//	return p;
//}
//
//char* fun3(char* p)
//{
//	printf("%s\n", p);
//	return p;
//}
//int main()
//{
//	char* (*a[3])(char* p);//定义一个函数指针数组a，数组元素类型为char(*)(char*p)
//	char* (*(*pf)[3])(char* p);//定义一个指向函数指针数组的指针，所指向的数组类型为 char*(*)(char*p)
//
//	pf = &a;//将a的地址赋予pf
//
//	//分别赋值
//	a[0] = fun1;
//	a[1] = &fun2;
//	a[2] = &fun3;
//
//	//分别使用
//	(*pf)[0]("fun1");
//	pf[0][1]("fun2");
//	pf[0][2]("fun3");
//	return 0;
//}

//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。
//int main()
//{
//    SYSTEMTIME tm;
//    GetLocalTime(&tm);
//    printf("%d-%d-%d %d:%d:%d\n",tm.wYear,tm.wMonth,tm.wDay,tm.wHour,tm.wMinute,tm.wSecond);
//    //time_t p,t;
//    //time(&p);
//    //printf("%s\n", asctime(gmtime(&p)));
//    //Sleep(1000);
//    //time(&t);
//    //printf("%s\n", asctime(gmtime(&t)),);
//    return 0;
//}


//回调函数实例
//#include<stdio.h>
//#include<time.h>
//#include <Windows.h>
//
//void print()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", i);
//        Sleep(100);
//    }
//    printf("\n");
//}
//
//void print_time(void (*fun)())
//{
//    SYSTEMTIME tm;
//
//    GetLocalTime(&tm);
//    printf("函数开始前的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);
//
//    printf("\n函数执行中……\n");
//    fun();
//
//    GetLocalTime(&tm);
//    printf("\n函数结束后的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);
//}
//
//int main()
//{
//    print_time(print);
//
//    return 0;
//}

//void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
/* qsort example */
//#include <stdio.h>      
//#include <stdlib.h>    
//
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int n;
//    qsort(values, 6, sizeof(int), compare);
//    for (n = 0; n < 6; n++)
//        printf("%d ", values[n]);
//    return 0;
//}
//
//#include<string.h>
//
//struct stu  //假定一个结构体，来写它各成员类型的排序函数
//{
//	int num;
//	char name[20];
//	int score;
//};
//
//int int_compare(const void* _1, const void* _2)//进行 int 型的比较
//{
//	return (*(int*)_1) - (*(int*)_2);
//}
//
//int char_compare(const void* _1, const void* _2)// 进行char型的比较
//{
//	return (*(char*)_1) - (*(char*)_2);
//}
//
////进行我所自定义结构体各成员元素的排序
//int stu_cmp_num(const void* _1, const void* _2)//按照  num 来排序
//{
//	return ((struct stu*)_1)->num - ((struct stu*)_2)->num;
//}
//
//int stu_cmp_score(const void* _1, const void* _2) //按照 score 来排序
//{
//	return ((struct stu*)_1)->score - ((struct stu*)_2)->score;
//}
//
//int stu_cmp_name(const void* _1, const void* _2) // 按照 name 来排序
//{
//	return strcmp(((struct stu*)_1)->name, ((struct stu*)_2)->name);
//}

//
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
//
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//    printf("%li\n", p );
//    printf("%li\n", p + 0x1);
//    printf("%li\n", (unsigned long)p + 0x1);
//    printf("%li\n", (unsigned int*)p + 0x1);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//
//    return 0;
//}

//int(*parr3[10])[5];
//
//typedef int(*foo)[10] ;
//foo parr3[10];
//


//#include <stdio.h>
//
//void test(int arr[])//√
//{}
//void test(int arr[10])//√
//{}
//void test(int* arr)//√
//{}
//void test2(int* arr[20])//√
//{}
//void test2(int** arr)//√
//{}
//int main()
//{
//
//	int arr[10] = { 0 };
//
//	int* arr2[20] = { 0 };
//
//	test(arr);
//
//	test2(arr2);
//}

//void test(int arr[3][5])//√
//{}
//void test(int arr[][])//×
//{}
//void test(int arr[][5])//√
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。

//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//√
//{}
void test(int(*arr)[5])//ok？
{}
//void test(int** arr)//√
//{}
int main()
{

	int arr[3][5] = { 0 };

	test(arr);
}