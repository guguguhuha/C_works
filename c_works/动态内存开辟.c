#define _CRT_SECURE_NO_WARNINGS

//void* malloc(size_t size);
//malloc
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	int arr[10] = {0};//在栈区上申请了40个字节的空间
//
//	//动态内存开辟 - 堆区上
//	//INT_MAX----整形的最大字节，位于limit.h文件中
//	//int* p = (int*)malloc(INT_MAX);//开辟失败的情况
//	int* p = (int*)malloc(40);//希望把40个字节当成一个10个整型的数组,因为我们开辟的指针类型是int*，所以我们也将返回值强行转换为int*
//	if (p == NULL)
//	{
//		//strerror 在string.h文件中
//		//errno 在errno.h 文件中
//		printf("内存开辟失败: %s\n",strerror(errno));//打印错误信息，errno提供错误码，strerror将提供的错误码翻译为一个字符串
//		
//		perror("内存开辟失败");//直接打印错误信息，直接包装好的一个函数，在 stdio.h 中
//
//		char* p = strerror(errno);//如果我们只想得到错误信息，并不想打印出来，我们就可以用strerror(errno)获得
//		printf("%s\n", p);
//	}
//	else
//	{
//		//开辟成功
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//不再使用p指向的动态内存
//		//手动释放动态开辟的内存
//
//		free(p);//这是我们开辟内存，最后且必要有的一步，释放我们开辟的内存！！
//		p = NULL;
//
//		//......
//	}
//
//	return 0;
//}
 // //假设 p 是我们赋予内存的指针
	//if (p == null)
	//{	//没有开辟成功
	//	//...
	//}
	//else
	//{
	//	//开辟成功
	//	//...
	//}

		//free(p);//这是我们开辟内存，最后且必要有的一步，释放我们开辟的内存！！
		//p = NULL;
//
//void free(void* ptr);

//int main()
//{
//	//int arr[10];
//	//开辟一个连续的空间
//	//malloc开辟的空间不初始化
//	//malloc参数只有1个
//	//calloc开辟的空间是初始化的
//	//calloc参数有2个
//
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//
//
//		//释放
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//
//	//扩展容量
//
//	//代码1   ---   不可行
//	ptr = realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//	//所以这样不可行，若是开辟失败，我们并无法得知，而且还会非法访问！
//
//	//代码2  ---  可行
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;//这里要记得用我们原来的地址接收返回的地址
//				//上面我们提到：要是原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适大小的连续空间来使用。
//				//这样函数返回的是一个新的内存地址，所以我们要记得接收！
//	}
//	//业务处理
//
//	free(ptr);//一定要记得释放
//	ptr = NULL;//置NULL
//
//	return 0;
//}

//1. 对NULL指针的解引用操作
//避免出现：对 malloc/calloc/realloc 函数的返回值做检测

//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	//p是有可能为NULL指针的，当为NULL的时候，*p就是非法访问内存
//
//	*p = 0;
//
//	return 0;
//}

////2. 对动态开辟空间的越界访问
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//越界
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = 0;//等于10的时候就越界了
//		}
//
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

////3. 对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. 使用free释放一块动态开辟内存的一部分
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		err
//		for (i = 0; i <5; i++)
//		{
//			*p++ = 0;//这里p++是有副作用的，会导致p指向的值改变
//			*(p + i) = 0;//这里应该写为*(p + i)
//		}
//		释放
//		free(p);//我们释放内存时，一定要从我们开始的位置进行释放！
//		p = NULL;
//	}
//	return 0;
//}

////5. 对同一块动态内存多次释放
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = 0;
//		}
//		//多次释放会有问题
//		free(p);
//		
//		free(p);
//
//		p = NULL;
//		
//	}
//
//	return 0;
//}


////6.动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//
//	int* p = (int*)malloc(100);
//
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);//未释放内存
//}


////例题一
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	GetMemory(str);
//
//	strcpy(str, "hello world");
//
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
////运行test()会有什么结果

////例题二
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	str = GetMemory();
//
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
////运行test()会有什么结果

////例题三
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	GetMemory(&str, 100);
//
//	strcpy(str, "hello");
//
//	printf(str);
//}
// 
//int main()
//{
//	Test();
//	return 0;
//}
////运行test()会有什么结果


////例题四
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//
//	free(str);
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
// 
//int main()
//{
//	Test();
//	return 0;
//}
////运行test()会有什么结果

////柔性数组
//typedef struct st_type
//{
//
//	int i;
//
//	int a[0];//柔性数组成员
//}type_a;
////有些编译器会报错无法编译可以改成
//typedef struct st_type
//{
//
//	int i;
//
//	int a[];//柔性数组成员
//}type_a;
//
////要注意：结构中的柔性数组成员前面必须至少一个其他成员。
////sizeof 返回的这种结构大小不包括柔性数组的内存。
////包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应
////柔性数组的预期大小。
//
////code1
//typedef struct st_type
//{
//
//	int i;
//
//	int a[0];//柔性数组成员
//}type_a;
//
//
//printf("%d\n", sizeof(type_a));//输出的是4
//
//
////柔性数组的使用
//
////代码1
//int i = 0;
//type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
////业务处理
//p->i = 100;
//for (i = 0; i < 100; i++)
//{
//
//	p->a[i] = i;
//}
//free(p);
//
////代码2
//typedef struct st_type
//{
//
//	int i;
//
//	int* p_a;
//}type_a;
//type_a* p = malloc(sizeof(type_a));
//p->i = 100;
//p->p_a = (int*)malloc(p->i * sizeof(int));
////业务处理
//for (i = 0; i < 100; i++)
//{
//
//	p->p_a[i] = i;
//}
////释放空间
//free(p->p_a);
//p->p_a = NULL;
//free(p);
//p = NULL;