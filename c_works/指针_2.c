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
//	void(*p)() = &print;//p��һ������ָ�룬��ָ��ĺ����޲��޷���ֵ
//
//	(*p)();
//
//	return 0;
//}
//
//(  *(   void(*)()  )0  )()

//void(*signal(int, void(*)(int)))(int);

//����һ����������
//�����ĺ�����signal��signal������2����������һ������������int,�ڶ�������������һ������ָ�룬�ú���
//ָ��ָ��ĺ���������int������������void
//signal�����ķ�����������һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void

//typedef void(*pfun_t)(int);//����Ϊָ��һ������Ϊint���޷���ֵ�ĺ���ָ��
//pfun_t signal(int, pfun_t);//���������ͣ�������һ������

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
//	//����ָ�������
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//����ָ��
//
//	int(* pfA[4])(int, int);//����ָ�������
//
//	//����ָ������
//
//	//pfArr2���Ǻ���ָ�����飬���������Ϊ int(*)(int,int)
//	int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}

////������ - �ӡ������ˡ���
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
////��������-����ָ��
////�ص�����
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//������
//			break;
//		case 2:
//			calc(Sub);//������
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//����ָ������ - ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1
//		if (0 == input)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if (input>=1 && input<=4)
//		{
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	//����ָ��
//	int(*p)(int, int);
//	//����ָ�������,����Ԫ������Ϊ int��*��(int, int)
//	int(*pArr[4])(int, int);
//	//ppArr��ָ����ָ�������ָ��
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>

////����ĺ������ö��ǽ����ݵ��ַ�������ӡ����
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
//	char* (*a[3])(char* p);//����һ������ָ������a������Ԫ������Ϊchar(*)(char*p)
//	char* (*(*pf)[3])(char* p);//����һ��ָ����ָ�������ָ�룬��ָ�����������Ϊ char*(*)(char*p)
//
//	pf = &a;//��a�ĵ�ַ����pf
//
//	//�ֱ�ֵ
//	a[0] = fun1;
//	a[1] = &fun2;
//	a[2] = &fun3;
//
//	//�ֱ�ʹ��
//	(*pf)[0]("fun1");
//	pf[0][1]("fun2");
//	pf[0][2]("fun3");
//	return 0;
//}

//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
//�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
//������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
//����������Ӧ��
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


//�ص�����ʵ��
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
//    printf("������ʼǰ��ʱ��Ϊ��\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);
//
//    printf("\n����ִ���С���\n");
//    fun();
//
//    GetLocalTime(&tm);
//    printf("\n�����������ʱ��Ϊ��\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond, tm.wMilliseconds);
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
//struct stu  //�ٶ�һ���ṹ�壬��д������Ա���͵�������
//{
//	int num;
//	char name[20];
//	int score;
//};
//
//int int_compare(const void* _1, const void* _2)//���� int �͵ıȽ�
//{
//	return (*(int*)_1) - (*(int*)_2);
//}
//
//int char_compare(const void* _1, const void* _2)// ����char�͵ıȽ�
//{
//	return (*(char*)_1) - (*(char*)_2);
//}
//
////���������Զ���ṹ�����ԱԪ�ص�����
//int stu_cmp_num(const void* _1, const void* _2)//����  num ������
//{
//	return ((struct stu*)_1)->num - ((struct stu*)_2)->num;
//}
//
//int stu_cmp_score(const void* _1, const void* _2) //���� score ������
//{
//	return ((struct stu*)_1)->score - ((struct stu*)_2)->score;
//}
//
//int stu_cmp_name(const void* _1, const void* _2) // ���� name ������
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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
//void test(int arr[])//��
//{}
//void test(int arr[10])//��
//{}
//void test(int* arr)//��
//{}
//void test2(int* arr[20])//��
//{}
//void test2(int** arr)//��
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

//void test(int arr[3][5])//��
//{}
//void test(int arr[][])//��
//{}
//void test(int arr[][5])//��
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣

//void test(int* arr)//ok��
//{}
//void test(int* arr[5])//��
//{}
void test(int(*arr)[5])//ok��
{}
//void test(int** arr)//��
//{}
int main()
{

	int arr[3][5] = { 0 };

	test(arr);
}