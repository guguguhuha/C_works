#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
//__FILE__//���б����Դ�ļ�
//
//__LINE__//�ļ���ǰ���к�
//
//__DATE__//�ļ������������
//
//__TIME__//�ļ��������ʱ��
//
// __FUNCTION__��ǰ���ڵĺ���
// 
//__STDC__//�����������ѭANSI C����ֵΪ1������δ����


//void test()
//{
//	printf("FILE: %s\n", __FILE__);//���ڵ��ļ�
//	printf("LINE: %d\n", __LINE__);//���ڵ���
//	printf("DATE: %s\n", __DATE__);//�����������
//	printf("TIME: %s\n", __TIME__);//�������ʱ��
//	printf("FUNCTION: %s\n", __FUNCTION__);//���ڵĺ�������
//}
//int main()
//{
//	test();
//	printf("FUNCTION: %s\n", __FUNCTION__);//���ڵĺ�������
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", __STDC_HOSTED__);
//	return 0;
//}

//#define�����ʶ��

//#define MAX 100
//
//#define STR "HEHE"
//
//#define reg register //register ����ؼ���������������ѱ��������ڼĴ����У������Ƿ����ڴ��������߷���Ч��
//					//��register �����ṩ�ĵط���С���Ų��˺ܶ����


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
//		max = MAX;//Ҫ�ǵ�һ�ּ��� ; �ͻ�����׳��ִ�����Ϊ�����ǵ���֪�У�һ����������Ҫ��һ�� ; 
//	else
//		max = 0;
//
//	return 0;
//}

//#define SQUARE(x) (x*x)//���������E����һ���ո����Ǿͻᷢ�ֱ��������Ѿ����˴�
//
//int main()
//{
//	printf("%d\n", SQUARE(5));
//	return 0;
//}

//
//#define SQUARE(x) (x*x) 
////����������������������������һ�����ʽ
//
//int main()
//{
//	printf("%d\n", SQUARE(2+3));//��ʱ�Ľ������25��
//	return 0;
//}

//#define SQUARE(x) (x*x) //11
//#define SQUARE(x) ((x)*(x)) //25
#include<stdlib.h>
////ģ��ʵ��offsetof��ʵ��
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

////����������Ҫ�Ƿ��ں������ôʵ�֣�
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
//	printf("Hello"" World ""!\n");//�����ӡ��ʲô
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
//	ADD_TO_SUM(5, 10);//�����ǣ���sum5����10
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
//	//���ݸ�MAX��Ĳ����Ǵ��и����õ�
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

//#define MALLOC(type,num) ((type*)malloc((num)*sizeof(type)))//��̬�����ڴ�
//
//int main()
//{
//	int* p = MALLOC(int, 10);//����10�����εĿռ�
//	//...
//	free(p);//�ͷ��ڴ�
//	p = NULL;//��ʱ��NULL
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

//��������  - ���������Ͳ�����룬�����������Ͳ��������

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

////2.�����֧����������
//#if �������ʽ
////... 
//#elif �������ʽ
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
//	//������PRINT�Ŵ�ӡhehe --- ��һ��д��
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
//	//������PRINT�Ŵ�ӡhehe --- �ڶ���д��
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
//	//û�ж���PRINT�Ŵ�ӡhehe --- ��һ��д��
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
//	//û�ж���PRINT�Ŵ�ӡhehe --- �ڶ���д��
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

////4.Ƕ��ָ��
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

