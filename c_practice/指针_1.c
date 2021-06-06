<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1

//指针讲解

#include<stdio.h>
#include<stdlib.h>
//
//int y = 1;
//
//int main()
//{
//	int x = 4;
//
//	printf("x保存在 %li\n", &x);
//	printf("x保存在 %li\n", &x);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	int a = 10;//在内存中开辟一块空间
//
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//
//	//将a的地址存放在p变量中，p就是一个之指针变量。
//
//	return 0;
//}
//
//

//int main()
//{
//	int a = 1;
//	int* p = &a;
//	return 0;
//}
//
//int	   --->  int*
//short  --->  short*
//float  --->  float*
//char   --->  char*
//double --->  double*
//long   --->  long*

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("%d", a);
//	printf("%d", *b);//*p 就相当于把p所指向的空间的内容拿出来
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("改变之前: %d\n", a);
//	*b = 2;
//	printf("改变之后: %d\n", a);
//	return 0;
//}

//#include <stdio.h>
////在此程序运行时，我们要重点在调试的过程中观察内存的变化
//int main()
//{
//
//	int n = 0x11223344;
//
//	char* pc = (char*)&n;
//
//	int* pi = &n;
//
//	*pc = 0; 
//
//	*pi = 0;
//
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//
//	int* p;//局部变量指针未初始化，默认为随机值
//
//	*p = 20;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 0 };
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i <= 11; i++)
//	{
//
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//
//		*(p++) = i;
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = malloc(4);
//	free(p);
//}
//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//
//		*vp++ = 0;
//	}
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f ", values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));//通过数组来访问数组元素
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);//打印两地址看是否相同
//	}
//	return 0;
//}
//1. 计数器的方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.递归实现
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////3.指针-指针
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	char ch[5] = {0};
//	//指针-指针   绝对值的是指针和指针之间的元素个数
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//指针-指针 计算的前提条件是：两个指针指向的是同一块连续的空间的
//	return 0;
//}

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针的关系运算
//
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//
//		*vp = 0;
//	}
//
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f ", values[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	printf("%p\n", arr);
//
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}

//
//int a = 10;
//
//int* p = &a;
//
//int** sp = &p;

//int main()
//{
//	int a = 10;
//	int * p = &a;//p是一级指针
//	int * * pp = &p;//pp是二级指针
//
//	**pp = 20;
//	printf("%d\n", a);//
//	//int*** ppp = &pp;
//	//int**** pppp = &ppp;
//
//	return 0;
//}
//
//int a = 1;
//int b = 2;
//int c = 3;
//int* arr[] = { &a,&b,&c };
//
//int main()
//{
//	//int arr[10] = {0};//整形数组
//	//char ch[5] = { 'a', 'b' };//字符数组
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr就是指针数组
//	//存放整形指针的数组
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//存放字符指针的数组
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//arr数组在内存中的存储格式为：
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//指针p的类型为short * 类型的，因此p每次只能所有两个字节，for循环对数组中内容进行修改时，一次访问的是：
//arr[0]的低两个字节，arr[0]的高两个字节，arr[1]的低两个字节，arr[1]的高两个字节，故改变之后，数组中内容如下：
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//故最后打印：0   0   3   4   5


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//答案解析：
//
//假设，a变量的地址为0x64，则a变量在内存中的模型为：
//0x64 | 44 |
//0x65 | 33 |
//0x66 | 22 |
//0x67 | 11 |
//
//char* 类型的指针变量pc指向只能指向字符类型的空间，如果是非char类型的空间，必须要将该空间的地址强转为char * 类型。
//char* pc = (char*)&a; pc实际指向的是整形变量a的空间，即pc的内容为0x64，即44，
//* pc = 0，即将44位置中内容改为0，修改完成之后，a中内容为：0x11223300
//
//因此：选择C

//#include <stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}



////假设有下面两个打印函数，我们应该首选哪个？
//struct person
//{
//    char name[20];
//    int age;
//    char sex[5];
//    char tele[13];
//    char addr[20];
//};
//
//
//void print_1(struct person peo)
//{
//    printf("This is print_1\n");
//    printf("%s\n", peo.name);
//    printf("%d\n", peo.age);
//    printf("%s\n", peo.sex);
//    printf("%s\n", peo.tele);
//    printf("%s\n", peo.addr);
//    printf("\n");
//}
//
//void print_2(struct person* peo)
//{
//    printf("This is print_2\n");
//    printf("%s\n", peo->name);
//    printf("%d\n", peo->age);
//    printf("%s\n", peo->sex);
//    printf("%s\n", peo->tele);
//    printf("%s\n", peo->addr);
//    printf("\n");
//}
//
//int main()
//{
//    struct person peo = { "zhangsan",18,"male","12345678","hualalalala" };
//    print_1(peo);
//    print_2(&peo);
//    return 0;
//}

//int main()
//{
//	
//	char* p = "abcdef";
//	printf("%s\n", p);
//
//
//	char ch = 'a';
//	char* sp = &ch;
//	printf("%s\n", sp);
//
//	return 0;
//}
//int main()
//{
//
//	char ch[] = "abcdef";
//	printf("%s\n", ch);
//
//
//	*ch = 'c';
//	printf("%s\n", ch);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char* str3 = "hello world.";
//	char* str4 = "hello world.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char* pc = &ch; 
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//数组的地址
//	//pa就是一个指向数组的指针 - 数组指针
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr 数组名是整个数组，取出的是数组的地址
//	//&arr arr 对比
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	int* arr[3] = { &a,&b,&c };//arr便是一个指针数组
//
//	return 0;
//}
//

//int(*p)[10];
//
//int(*)[10] p;

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	int* ptr3 = (int*)((char*)a + 1);
//
//	printf("%x %x %x\n", ptr1[-1], *ptr2,*ptr3);
//	return 0;
//}

//*(a + 1)等同于a[1]，第一个是4，a的类型是int[5]，& a的类型就是int(*)[5]，是个数组指针。
//所以给int(*)[5]类型加一，相当于加了一个int[5]的长度。
//也就是这个指针直接跳过了a全部的元素，直接指在了刚好越界的位置上，
//然后转换成了int* 后再减一，
//相当于从那个位置向前走了一个int，
//从刚好越觉得位置回到了1的地址处，所以第二个是1，

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//
//	//int* ptr2 = (int*)((int)a + 1);
//
//	int re = (int)a;
//	int* ptr3 = (int*)(re + 1);
//	printf("%x %x\n", re, re + 1);
//	printf("%x", *ptr3);
//	
//	return 0;
//}
//

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//主要问题：(int*)((int)a + 1); 这里的 (int)a + 1，为什么就是跳过了一个字节

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	printf("指针[整数]---- *(指针±整数)\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("     %d    ----      %d   \n",p[i],*(p+i));
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d",*(a + 1), *(ptr - 1));
//
//	return 0;
//}
////程序的结果是什么？
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//
//	//但是我们一般很少这样写代码
//
//	return 0;
//}

//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++)
//	{
//
//		for (j = 0; j < col; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++)
//	{
//
//		for (j = 0; j < col; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//int main()
//{
//
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	print_arr1(arr, 3, 5);
//
//	//数组名arr，表示首元素的地址
//
//	//但是二维数组的首元素是二维数组的第一行
//
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//
//	//可以数组指针来接收
//
//	print_arr2(arr, 3, 5);
//
//	return 0;
//}
//void print_arr2(int(*arr)[5], int row, int col)//首先arr是一个数组指针，它指向的是一个有五个 int 元素的数组，所以现在的arr就相当于二维数组第一行的地址
//{
//
//    int i = 0;
//    int j = 0;
//
//    for (i = 0; i < row; i++)
//    {
//
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", *(*(arr + i) + j));
//            //printf("%d ", arr[i][j]);//这里之前已经说了，指针[整数] = *（指针±整数)
//        }
//
//        printf("\n");
//    }
//}
//int main()
//{
//
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    //print_arr1(arr, 3, 5);
//
//    //数组名arr，表示首元素的地址
//
//    //但是二维数组的首元素是二维数组的第一行
//
//    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//
//    //可以数组指针来接收
//
//    print_arr2(arr, 3, 5);
//
//    return 0;
//}

int arr[5];//数组，大小为5，内容为int
int* parr1[10];//数组，大小为10，内容为int*
int(*parr2)[10];//指针，指向一个大小为10，内容为int的数组
int(*parr3[10])[5];//对于这个，似乎就麻烦了一点
                   //我们把它分开来看
                   //我们把它分开来看
                   //我们把它分开来看
                   //我们把它分开来看
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//
//	int Num;
//
//	char* pcName;
//
//	short sDate;
//
//	char cha[2];
//
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//
//	printf("%p\n", p + 0x1);
//
//	printf("%p\n", (unsigned long)p + 0x1);
//
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d",*(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n",*cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//
//    return 0;
//}

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


////回调函数实例
//#include<time.h>
#include<windows.h>
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
//    printf("函数开始前的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond,tm.wMilliseconds);
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


#include<time.h>

void print()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
        //Sleep(100);
    }
    printf("\n");
}

void print_time(void (*fun)())
{
    time_t tm;
    time(&tm);
    
    printf("函数开始前的时间为：\n%s\n", asctime(gmtime(&tm)));

    printf("\n函数执行中……\n");
    fun();

    time(&tm);
    printf("\n函数结束后的时间为：\n%s\n", asctime(gmtime(&tm)));
}

int main()
{
    print_time(print);

    return 0;
}
=======
#define _CRT_SECURE_NO_WARNINGS 1

//指针讲解

#include<stdio.h>
#include<stdlib.h>
//
//int y = 1;
//
//int main()
//{
//	int x = 4;
//
//	printf("x保存在 %li\n", &x);
//	printf("x保存在 %li\n", &x);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	int a = 10;//在内存中开辟一块空间
//
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//
//	//将a的地址存放在p变量中，p就是一个之指针变量。
//
//	return 0;
//}
//
//

//int main()
//{
//	int a = 1;
//	int* p = &a;
//	return 0;
//}
//
//int	   --->  int*
//short  --->  short*
//float  --->  float*
//char   --->  char*
//double --->  double*
//long   --->  long*

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("%d", a);
//	printf("%d", *b);//*p 就相当于把p所指向的空间的内容拿出来
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("改变之前: %d\n", a);
//	*b = 2;
//	printf("改变之后: %d\n", a);
//	return 0;
//}

//#include <stdio.h>
////在此程序运行时，我们要重点在调试的过程中观察内存的变化
//int main()
//{
//
//	int n = 0x11223344;
//
//	char* pc = (char*)&n;
//
//	int* pi = &n;
//
//	*pc = 0; 
//
//	*pi = 0;
//
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//
//	int* p;//局部变量指针未初始化，默认为随机值
//
//	*p = 20;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 0 };
//
//	int* p = arr;
//
//	int i = 0;
//
//	for (i = 0; i <= 11; i++)
//	{
//
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//
//		*(p++) = i;
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = malloc(4);
//	free(p);
//}
//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//
//		*vp++ = 0;
//	}
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f ", values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));//通过数组来访问数组元素
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);//打印两地址看是否相同
//	}
//	return 0;
//}
//1. 计数器的方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.递归实现
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////3.指针-指针
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	char ch[5] = {0};
//	//指针-指针   绝对值的是指针和指针之间的元素个数
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//指针-指针 计算的前提条件是：两个指针指向的是同一块连续的空间的
//	return 0;
//}

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针的关系运算
//
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//
//		*vp = 0;
//	}
//
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f ", values[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	printf("%p\n", arr);
//
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}

//
//int a = 10;
//
//int* p = &a;
//
//int** sp = &p;

//int main()
//{
//	int a = 10;
//	int * p = &a;//p是一级指针
//	int * * pp = &p;//pp是二级指针
//
//	**pp = 20;
//	printf("%d\n", a);//
//	//int*** ppp = &pp;
//	//int**** pppp = &ppp;
//
//	return 0;
//}
//
//int a = 1;
//int b = 2;
//int c = 3;
//int* arr[] = { &a,&b,&c };
//
//int main()
//{
//	//int arr[10] = {0};//整形数组
//	//char ch[5] = { 'a', 'b' };//字符数组
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr就是指针数组
//	//存放整形指针的数组
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//存放字符指针的数组
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//arr数组在内存中的存储格式为：
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//指针p的类型为short * 类型的，因此p每次只能所有两个字节，for循环对数组中内容进行修改时，一次访问的是：
//arr[0]的低两个字节，arr[0]的高两个字节，arr[1]的低两个字节，arr[1]的高两个字节，故改变之后，数组中内容如下：
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//故最后打印：0   0   3   4   5


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//答案解析：
//
//假设，a变量的地址为0x64，则a变量在内存中的模型为：
//0x64 | 44 |
//0x65 | 33 |
//0x66 | 22 |
//0x67 | 11 |
//
//char* 类型的指针变量pc指向只能指向字符类型的空间，如果是非char类型的空间，必须要将该空间的地址强转为char * 类型。
//char* pc = (char*)&a; pc实际指向的是整形变量a的空间，即pc的内容为0x64，即44，
//* pc = 0，即将44位置中内容改为0，修改完成之后，a中内容为：0x11223300
//
//因此：选择C

//#include <stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}



////假设有下面两个打印函数，我们应该首选哪个？
//struct person
//{
//    char name[20];
//    int age;
//    char sex[5];
//    char tele[13];
//    char addr[20];
//};
//
//
//void print_1(struct person peo)
//{
//    printf("This is print_1\n");
//    printf("%s\n", peo.name);
//    printf("%d\n", peo.age);
//    printf("%s\n", peo.sex);
//    printf("%s\n", peo.tele);
//    printf("%s\n", peo.addr);
//    printf("\n");
//}
//
//void print_2(struct person* peo)
//{
//    printf("This is print_2\n");
//    printf("%s\n", peo->name);
//    printf("%d\n", peo->age);
//    printf("%s\n", peo->sex);
//    printf("%s\n", peo->tele);
//    printf("%s\n", peo->addr);
//    printf("\n");
//}
//
//int main()
//{
//    struct person peo = { "zhangsan",18,"male","12345678","hualalalala" };
//    print_1(peo);
//    print_2(&peo);
//    return 0;
//}

//int main()
//{
//	
//	char* p = "abcdef";
//	printf("%s\n", p);
//
//
//	char ch = 'a';
//	char* sp = &ch;
//	printf("%s\n", sp);
//
//	return 0;
//}
//int main()
//{
//
//	char ch[] = "abcdef";
//	printf("%s\n", ch);
//
//
//	*ch = 'c';
//	printf("%s\n", ch);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char* str3 = "hello world.";
//	char* str4 = "hello world.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char ch = 'w';
//	char* pc = &ch; 
//
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;//数组的地址
//	//pa就是一个指向数组的指针 - 数组指针
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr 数组名是整个数组，取出的是数组的地址
//	//&arr arr 对比
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	int* arr[3] = { &a,&b,&c };//arr便是一个指针数组
//
//	return 0;
//}
//

//int(*p)[10];
//
//int(*)[10] p;

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	int* ptr3 = (int*)((char*)a + 1);
//
//	printf("%x %x %x\n", ptr1[-1], *ptr2,*ptr3);
//	return 0;
//}

//*(a + 1)等同于a[1]，第一个是4，a的类型是int[5]，& a的类型就是int(*)[5]，是个数组指针。
//所以给int(*)[5]类型加一，相当于加了一个int[5]的长度。
//也就是这个指针直接跳过了a全部的元素，直接指在了刚好越界的位置上，
//然后转换成了int* 后再减一，
//相当于从那个位置向前走了一个int，
//从刚好越觉得位置回到了1的地址处，所以第二个是1，

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//
//	//int* ptr2 = (int*)((int)a + 1);
//
//	int re = (int)a;
//	int* ptr3 = (int*)(re + 1);
//	printf("%x %x\n", re, re + 1);
//	printf("%x", *ptr3);
//	
//	return 0;
//}
//

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//主要问题：(int*)((int)a + 1); 这里的 (int)a + 1，为什么就是跳过了一个字节

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	printf("指针[整数]---- *(指针±整数)\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("     %d    ----      %d   \n",p[i],*(p+i));
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d",*(a + 1), *(ptr - 1));
//
//	return 0;
//}
////程序的结果是什么？
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//
//	//但是我们一般很少这样写代码
//
//	return 0;
//}

//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++)
//	{
//
//		for (j = 0; j < col; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < row; i++)
//	{
//
//		for (j = 0; j < col; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//}
//int main()
//{
//
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	print_arr1(arr, 3, 5);
//
//	//数组名arr，表示首元素的地址
//
//	//但是二维数组的首元素是二维数组的第一行
//
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//
//	//可以数组指针来接收
//
//	print_arr2(arr, 3, 5);
//
//	return 0;
//}
//void print_arr2(int(*arr)[5], int row, int col)//首先arr是一个数组指针，它指向的是一个有五个 int 元素的数组，所以现在的arr就相当于二维数组第一行的地址
//{
//
//    int i = 0;
//    int j = 0;
//
//    for (i = 0; i < row; i++)
//    {
//
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", *(*(arr + i) + j));
//            //printf("%d ", arr[i][j]);//这里之前已经说了，指针[整数] = *（指针±整数)
//        }
//
//        printf("\n");
//    }
//}
//int main()
//{
//
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//    //print_arr1(arr, 3, 5);
//
//    //数组名arr，表示首元素的地址
//
//    //但是二维数组的首元素是二维数组的第一行
//
//    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//
//    //可以数组指针来接收
//
//    print_arr2(arr, 3, 5);
//
//    return 0;
//}

int arr[5];//数组，大小为5，内容为int
int* parr1[10];//数组，大小为10，内容为int*
int(*parr2)[10];//指针，指向一个大小为10，内容为int的数组
int(*parr3[10])[5];//对于这个，似乎就麻烦了一点
                   //我们把它分开来看
                   //我们把它分开来看
                   //我们把它分开来看
                   //我们把它分开来看
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//
//	int Num;
//
//	char* pcName;
//
//	short sDate;
//
//	char cha[2];
//
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//
//	printf("%p\n", p + 0x1);
//
//	printf("%p\n", (unsigned long)p + 0x1);
//
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d",*(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n",*cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//
//    return 0;
//}

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


////回调函数实例
//#include<time.h>
#include<windows.h>
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
//    printf("函数开始前的时间为：\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond,tm.wMilliseconds);
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


#include<time.h>

void print()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
        //Sleep(100);
    }
    printf("\n");
}

void print_time(void (*fun)())
{
    time_t tm;
    time(&tm);
    
    printf("函数开始前的时间为：\n%s\n", asctime(gmtime(&tm)));

    printf("\n函数执行中……\n");
    fun();

    time(&tm);
    printf("\n函数结束后的时间为：\n%s\n", asctime(gmtime(&tm)));
}

int main()
{
    print_time(print);

    return 0;
}
>>>>>>> f6c66f010093731110298d25ba844a96160ab6fd
