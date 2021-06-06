#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
//__FILE__//进行编译的源文件
//
//__LINE__//文件当前的行号
//
//__DATE__//文件被编译的日期
//
//__TIME__//文件被编译的时间
//
// __FUNCTION__当前所在的函数
// 
//__STDC__//如果编译器遵循ANSI C，其值为1，否则未定义


//void test()
//{
//	printf("FILE: %s\n", __FILE__);//所在的文件
//	printf("LINE: %d\n", __LINE__);//所在的行
//	printf("DATE: %s\n", __DATE__);//被编译的日期
//	printf("TIME: %s\n", __TIME__);//被编译的时间
//	printf("FUNCTION: %s\n", __FUNCTION__);//所在的函数名称
//}
//int main()
//{
//	test();
//	printf("FUNCTION: %s\n", __FUNCTION__);//所在的函数名称
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", __STDC_HOSTED__);
//	return 0;
//}

//#define定义标识符

//#define MAX 100
//
//#define STR "HEHE"
//
//#define reg register //register 这个关键字是请求编译器把变量储存在寄存器中，而不是放在内存里，可以提高访问效率
//					//但register 给你提供的地方很小，放不了很多变量


//int main()
//{
//	reg int age = 10;
//
//	printf("%d\n", MAX);//100
//	printf("%s\n", STR);//HEHE
//	printf("%d\n", age);//10
//
//	return 0;
//}

//int main()
//{
//	register int age = 10;
//
//	printf("%d\n",100);
//	printf("%s\n","hehe");
//	printf("%d\n",10);
//
//	return 0;
//}

//
//#define MAX 1000;
//#define MAX 1000
//
//int main()
//{
//	int max, condition = 1;
//	if (condition)
//		max = MAX;//要是第一种加了 ; 就会很容易出现错误，因为在我们的认知中，一条语句结束就要加一个 ; 
//	else
//		max = 0;
//
//	return 0;
//}

//#define SQUARE(x) (x*x)//如果我们在E后敲一个空格，我们就会发现编译器就已经报了错
//
//int main()
//{
//	printf("%d\n", SQUARE(5));
//	return 0;
//}

//
//#define SQUARE(x) (x*x) 
////我们再来换个数字来看看，换成一个表达式
//
//int main()
//{
//	printf("%d\n", SQUARE(2+3));//此时的结果会是25吗？
//	return 0;
//}

//#define SQUARE(x) (x*x) //11
//#define SQUARE(x) ((x)*(x)) //25
#include<stdlib.h>
////模拟实现offsetof的实现
//#define OFFSETOF(type,member) ((int)&(((type*)0)->member))
//
//struct test
//{
//	int a;
//	char b;
//	double c;
//};
//
//int main()
//{
//	struct test stu = { 0,0,0 };
//	printf("OFFSETOF:\n");
//	printf("%d\n",OFFSETOF(struct test, a));
//	printf("%d\n",OFFSETOF(struct test, b));
//	printf("%d\n",OFFSETOF(struct test, c));
//	printf("offsetof:\n");
//	printf("%d\n", offsetof(struct test, a));
//	printf("%d\n", offsetof(struct test, b));
//	printf("%d\n", offsetof(struct test, c));
//	return 0;
//}

////对于它我们要是放在宏里该怎么实现？
//int main()
//{
//	int a = 4;
//	printf("a=%d", a);
//	return 0;
//}

//#define print(num,data) printf("The value of "#num " is " data"\n",num);
//
//int main()
//{
//	int a = 3;
//	print(a,"%d");
//	return 0;
//}

//int main()
//{
//	printf("Hello"" World ""!\n");//它会打印出什么
//	return 0;
//}

//#define STR "HELLO "##"WORLD!"
//#define NUM 100##999
//#define ADD_TO_SUM(num, value) sum##num += value  
//
//int main()
//{
//	printf("%s\n", STR);//HELLO WORLD!
//	printf("%d\n", NUM);//100999
//
//
//	int sum5 = 0;
//	ADD_TO_SUM(5, 10);//作用是：给sum5增加10
//	printf("%d",sum5);
//
//	return 0;
//}


//
//
//int main()
//{
//	//int m = 5;
//	//int n = m + 1;//n = 6 m = 5
//	//int n = ++m;  //n = 6 m = 6
//
//	int a = 10;
//	int b = 20;
//	
//	//传递给MAX宏的参数是带有副作用的
//	int c = MAX(a++, b++);
//
//	//int c = ((a++) > (b++) ? (a++) : (b++));
//
//	printf("%d\n", c);//?
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//
//int INT_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	printf("%d\n", INT_max(1, 5));
//	printf("%d\n", MAX(1, 5));
//	return 0;
//}

//#define MALLOC(type,num) ((type*)malloc((num)*sizeof(type)))//动态开辟内存
//
//int main()
//{
//	int* p = MALLOC(int, 10);//开辟10个整形的空间
//	//...
//	free(p);//释放内存
//	p = NULL;//及时置NULL
//	return 0;
//}
//
//#include <stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//
//	return 0;
//}
//
//#include <stdio.h> 
//int main()
//{
//	int array[ARR_SIZE];
//	int i = 0;
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i < ARR_SIZE; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//条件编译  - 满足条件就参与编译，不满足条件就不参与编译

//#define DEBUG 1
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//#if DEBUG
//		printf("hehe\n");
//#endif
//	}
//	return 0;
//}
//

////2.多个分支的条件编译
//#if 常量表达式
////... 
//#elif 常量表达式
////... 
//#else 
////... 
//#endif 


//int main()
//{
//	int a = 10;
//#if a-2
//	printf("First\n");
//#elif 3-1
//	printf("Second\n");
//#elif 5-5
//	printf("Third\n");
//#else
//	{
//		printf("hehe\n");
//		printf("hehe\n");
//	}
//#endif
//
//	return 0;
//}

//#define __DEBUG__ 0
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//#ifdef __DEBUG__
//		printf("hehe\n");
//#endif
//	}
//	return 0;
//}

//#define PRINT 0
//
//int main()
//{
//	//定义了PRINT才打印hehe --- 第一种写法
//#ifdef PRINT
//	printf("hehe\n");
//#endif
//	return 0;
//}
//
//#define PRINT
//
//int main()
//{
//	//定义了PRINT才打印hehe --- 第二种写法
//#if defined(PRINT)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#define PRINT 0
//
//int main()
//{
//	//没有定义PRINT才打印hehe --- 第一种写法
//#ifndef PRINT
//	printf("hehe\n");
//#endif
//	return 0;
//}
//
//
//#define PRINT
//int main()
//{
//	//没有定义PRINT才打印hehe --- 第二种写法
//
//#if !defined(PRINT)
//	printf("hehe\n");
//#endif
//	return 0;
//}
//
//#define PASS
//#define HAHA
//
//void haha()
//{
//	printf("haha\n");
//}
//
//void ha()
//{
//	printf("ha\n");
//}
//
//int main()
//{
//#ifdef PASS
//	#ifdef HAHA
//		haha();
//	#endif // haha
//
//	#ifdef HAHA
//		ha();
//	#endif // ha
//
//#endif // DEBUG
//
//	return 0;
//}

////4.嵌套指令
//#if defined(OS_UNIX) 
//	#ifdef OPTION1 
//		unix_version_option1();
//	#endif 
//	#ifdef OPTION2 
//		unix_version_option2();
//	#endif 
//#elif defined(OS_MSDOS) 
//	#ifdef OPTION2 
//		msdos_version_option2();
//	#endif 
//#endif 
//


//#include <stdio.h> 
//int main()
//{
//	int array[NUM];
//	int i = 0;
//	for (i = 0; i < NUM; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//gcc -D NUM=10 test.c

//#define test
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//		if (i == 5)
//		{
//#ifdef test
//#error this is a test!
//#endif
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("filename :%s\n", __FILE__);
//	printf("line :%d\n", __LINE__);
//
//#line 100 "test.c"
//	printf("filename :%s\n", __FILE__);
//	printf("line :%d\n", __LINE__);
//
//
//	return 0;
//}


//#pragma message("This is a test!")
//int main()
//{
//#pragma message("This is also a test!")
//	return 0;
//}


//#include "test.h"
//
//int main()
//{
//	printf("%d \n", ONE);
//	printf("%d \n", TWO);
//	
//	printf("%d \n", THREE);
//	printf("%d \n", FOUR);
//
//	return 0;
//}

