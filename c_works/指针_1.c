<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1

//ָ�뽲��

#include<stdio.h>
#include<stdlib.h>
//
//int y = 1;
//
//int main()
//{
//	int x = 4;
//
//	printf("x������ %li\n", &x);
//	printf("x������ %li\n", &x);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	int a = 10;//���ڴ��п���һ��ռ�
//
//	int* p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//
//	//��a�ĵ�ַ�����p�����У�p����һ��ָ֮�������
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
//	printf("%d", *b);//*p ���൱�ڰ�p��ָ��Ŀռ�������ó���
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("�ı�֮ǰ: %d\n", a);
//	*b = 2;
//	printf("�ı�֮��: %d\n", a);
//	return 0;
//}

//#include <stdio.h>
////�ڴ˳�������ʱ������Ҫ�ص��ڵ��ԵĹ����й۲��ڴ�ı仯
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
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	//ָ��+-������ָ��Ĺ�ϵ����
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
//		printf("%d ", *(p + i));//ͨ����������������Ԫ��
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);//��ӡ����ַ���Ƿ���ͬ
//	}
//	return 0;
//}
//1. �������ķ���
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
////2.�ݹ�ʵ��
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////3.ָ��-ָ��
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
//	//ָ��-ָ��   ����ֵ����ָ���ָ��֮���Ԫ�ظ���
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//ָ��-ָ�� �����ǰ�������ǣ�����ָ��ָ�����ͬһ�������Ŀռ��
//	return 0;
//}

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��Ĺ�ϵ����
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
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	int * p = &a;//p��һ��ָ��
//	int * * pp = &p;//pp�Ƕ���ָ��
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
//	//int arr[10] = {0};//��������
//	//char ch[5] = { 'a', 'b' };//�ַ�����
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr����ָ������
//	//�������ָ�������
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//����ַ�ָ�������
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
//arr�������ڴ��еĴ洢��ʽΪ��
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//ָ��p������Ϊshort * ���͵ģ����pÿ��ֻ�����������ֽڣ�forѭ�������������ݽ����޸�ʱ��һ�η��ʵ��ǣ�
//arr[0]�ĵ������ֽڣ�arr[0]�ĸ������ֽڣ�arr[1]�ĵ������ֽڣ�arr[1]�ĸ������ֽڣ��ʸı�֮���������������£�
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//������ӡ��0   0   3   4   5


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//�𰸽�����
//
//���裬a�����ĵ�ַΪ0x64����a�������ڴ��е�ģ��Ϊ��
//0x64 | 44 |
//0x65 | 33 |
//0x66 | 22 |
//0x67 | 11 |
//
//char* ���͵�ָ�����pcָ��ֻ��ָ���ַ����͵Ŀռ䣬����Ƿ�char���͵Ŀռ䣬����Ҫ���ÿռ�ĵ�ַǿתΪchar * ���͡�
//char* pc = (char*)&a; pcʵ��ָ��������α���a�Ŀռ䣬��pc������Ϊ0x64����44��
//* pc = 0������44λ�������ݸ�Ϊ0���޸����֮��a������Ϊ��0x11223300
//
//��ˣ�ѡ��C

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



////����������������ӡ����������Ӧ����ѡ�ĸ���
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
//	int (*pa)[10] = &arr;//����ĵ�ַ
//	//pa����һ��ָ�������ָ�� - ����ָ��
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr ���������������飬ȡ����������ĵ�ַ
//	//&arr arr �Ա�
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	int* arr[3] = { &a,&b,&c };//arr����һ��ָ������
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

//*(a + 1)��ͬ��a[1]����һ����4��a��������int[5]��& a�����;���int(*)[5]���Ǹ�����ָ�롣
//���Ը�int(*)[5]���ͼ�һ���൱�ڼ���һ��int[5]�ĳ��ȡ�
//Ҳ�������ָ��ֱ��������aȫ����Ԫ�أ�ֱ��ָ���˸պ�Խ���λ���ϣ�
//Ȼ��ת������int* ���ټ�һ��
//�൱�ڴ��Ǹ�λ����ǰ����һ��int��
//�Ӹպ�Խ����λ�ûص���1�ĵ�ַ�������Եڶ�����1��

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
//��Ҫ���⣺(int*)((int)a + 1); ����� (int)a + 1��Ϊʲô����������һ���ֽ�

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	printf("ָ��[����]---- *(ָ�������)\n");
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
////����Ľ����ʲô��
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
//
//	//��������һ���������д����
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
//	//������arr����ʾ��Ԫ�صĵ�ַ
//
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//
//	//��������ָ��������
//
//	print_arr2(arr, 3, 5);
//
//	return 0;
//}
//void print_arr2(int(*arr)[5], int row, int col)//����arr��һ������ָ�룬��ָ�����һ������� int Ԫ�ص����飬�������ڵ�arr���൱�ڶ�ά�����һ�еĵ�ַ
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
//            //printf("%d ", arr[i][j]);//����֮ǰ�Ѿ�˵�ˣ�ָ��[����] = *��ָ�������)
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
//    //������arr����ʾ��Ԫ�صĵ�ַ
//
//    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//
//    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//
//    //��������ָ��������
//
//    print_arr2(arr, 3, 5);
//
//    return 0;
//}

int arr[5];//���飬��СΪ5������Ϊint
int* parr1[10];//���飬��СΪ10������Ϊint*
int(*parr2)[10];//ָ�룬ָ��һ����СΪ10������Ϊint������
int(*parr3[10])[5];//����������ƺ����鷳��һ��
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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


////�ص�����ʵ��
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
//    printf("������ʼǰ��ʱ��Ϊ��\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond,tm.wMilliseconds);
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
    
    printf("������ʼǰ��ʱ��Ϊ��\n%s\n", asctime(gmtime(&tm)));

    printf("\n����ִ���С���\n");
    fun();

    time(&tm);
    printf("\n�����������ʱ��Ϊ��\n%s\n", asctime(gmtime(&tm)));
}

int main()
{
    print_time(print);

    return 0;
}
=======
#define _CRT_SECURE_NO_WARNINGS 1

//ָ�뽲��

#include<stdio.h>
#include<stdlib.h>
//
//int y = 1;
//
//int main()
//{
//	int x = 4;
//
//	printf("x������ %li\n", &x);
//	printf("x������ %li\n", &x);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//
//	int a = 10;//���ڴ��п���һ��ռ�
//
//	int* p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
//
//	//��a�ĵ�ַ�����p�����У�p����һ��ָ֮�������
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
//	printf("%d", *b);//*p ���൱�ڰ�p��ָ��Ŀռ�������ó���
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int* b = &a;
//	printf("�ı�֮ǰ: %d\n", a);
//	*b = 2;
//	printf("�ı�֮��: %d\n", a);
//	return 0;
//}

//#include <stdio.h>
////�ڴ˳�������ʱ������Ҫ�ص��ڵ��ԵĹ����й۲��ڴ�ı仯
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
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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
//	//ָ��+-������ָ��Ĺ�ϵ����
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
//		printf("%d ", *(p + i));//ͨ����������������Ԫ��
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("&arr[%d] = %p < === > %p\n", i, &arr[i], p+i);//��ӡ����ַ���Ƿ���ͬ
//	}
//	return 0;
//}
//1. �������ķ���
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
////2.�ݹ�ʵ��
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////3.ָ��-ָ��
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
//	//ָ��-ָ��   ����ֵ����ָ���ָ��֮���Ԫ�ظ���
//	printf("%d\n", &arr[9] - &ch[3]);//err
//	//ָ��-ָ�� �����ǰ�������ǣ�����ָ��ָ�����ͬһ�������Ŀռ��
//	return 0;
//}

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//ָ��Ĺ�ϵ����
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
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
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
//	int * p = &a;//p��һ��ָ��
//	int * * pp = &p;//pp�Ƕ���ָ��
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
//	//int arr[10] = {0};//��������
//	//char ch[5] = { 'a', 'b' };//�ַ�����
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	//arr����ָ������
//	//�������ָ�������
//	int* arr[3] = { &a, &b, &c };//int* 
//	char* ch[5];//����ַ�ָ�������
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
//arr�������ڴ��еĴ洢��ʽΪ��
//0x00ECFBF4:  01 00 00 00
//0x00ECFBF8 : 02 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//ָ��p������Ϊshort * ���͵ģ����pÿ��ֻ�����������ֽڣ�forѭ�������������ݽ����޸�ʱ��һ�η��ʵ��ǣ�
//arr[0]�ĵ������ֽڣ�arr[0]�ĸ������ֽڣ�arr[1]�ĵ������ֽڣ�arr[1]�ĸ������ֽڣ��ʸı�֮���������������£�
//0x00ECFBF4 : 00 00 00 00
//0x00ECFBF8 : 00 00 00 00
//0x00ECFBFC : 03 00 00 00
//0x00ECFC00 : 04 00 00 00
//0x00ECFC04 : 05 00 00 00
//������ӡ��0   0   3   4   5


//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//�𰸽�����
//
//���裬a�����ĵ�ַΪ0x64����a�������ڴ��е�ģ��Ϊ��
//0x64 | 44 |
//0x65 | 33 |
//0x66 | 22 |
//0x67 | 11 |
//
//char* ���͵�ָ�����pcָ��ֻ��ָ���ַ����͵Ŀռ䣬����Ƿ�char���͵Ŀռ䣬����Ҫ���ÿռ�ĵ�ַǿתΪchar * ���͡�
//char* pc = (char*)&a; pcʵ��ָ��������α���a�Ŀռ䣬��pc������Ϊ0x64����44��
//* pc = 0������44λ�������ݸ�Ϊ0���޸����֮��a������Ϊ��0x11223300
//
//��ˣ�ѡ��C

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



////����������������ӡ����������Ӧ����ѡ�ĸ���
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
//	int (*pa)[10] = &arr;//����ĵ�ַ
//	//pa����һ��ָ�������ָ�� - ����ָ��
//
//	char ch[5];
//	char(*p3)[5] = &ch;
//
//
//	//&arr ���������������飬ȡ����������ĵ�ַ
//	//&arr arr �Ա�
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//
//	int* arr[3] = { &a,&b,&c };//arr����һ��ָ������
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

//*(a + 1)��ͬ��a[1]����һ����4��a��������int[5]��& a�����;���int(*)[5]���Ǹ�����ָ�롣
//���Ը�int(*)[5]���ͼ�һ���൱�ڼ���һ��int[5]�ĳ��ȡ�
//Ҳ�������ָ��ֱ��������aȫ����Ԫ�أ�ֱ��ָ���˸պ�Խ���λ���ϣ�
//Ȼ��ת������int* ���ټ�һ��
//�൱�ڴ��Ǹ�λ����ǰ����һ��int��
//�Ӹպ�Խ����λ�ûص���1�ĵ�ַ�������Եڶ�����1��

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
//��Ҫ���⣺(int*)((int)a + 1); ����� (int)a + 1��Ϊʲô����������һ���ֽ�

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	printf("ָ��[����]---- *(ָ�������)\n");
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
////����Ľ����ʲô��
//#include <stdio.h>
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
//
//	//��������һ���������д����
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
//	//������arr����ʾ��Ԫ�صĵ�ַ
//
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//
//	//��������ָ��������
//
//	print_arr2(arr, 3, 5);
//
//	return 0;
//}
//void print_arr2(int(*arr)[5], int row, int col)//����arr��һ������ָ�룬��ָ�����һ������� int Ԫ�ص����飬�������ڵ�arr���൱�ڶ�ά�����һ�еĵ�ַ
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
//            //printf("%d ", arr[i][j]);//����֮ǰ�Ѿ�˵�ˣ�ָ��[����] = *��ָ�������)
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
//    //������arr����ʾ��Ԫ�صĵ�ַ
//
//    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//
//    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//
//    //��������ָ��������
//
//    print_arr2(arr, 3, 5);
//
//    return 0;
//}

int arr[5];//���飬��СΪ5������Ϊint
int* parr1[10];//���飬��СΪ10������Ϊint*
int(*parr2)[10];//ָ�룬ָ��һ����СΪ10������Ϊint������
int(*parr3[10])[5];//����������ƺ����鷳��һ��
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
                   //���ǰ����ֿ�����
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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


////�ص�����ʵ��
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
//    printf("������ʼǰ��ʱ��Ϊ��\n%d-%d-%d %d:%d:%d:%d\n", tm.wYear, tm.wMonth, tm.wDay, tm.wHour, tm.wMinute, tm.wSecond,tm.wMilliseconds);
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
    
    printf("������ʼǰ��ʱ��Ϊ��\n%s\n", asctime(gmtime(&tm)));

    printf("\n����ִ���С���\n");
    fun();

    time(&tm);
    printf("\n�����������ʱ��Ϊ��\n%s\n", asctime(gmtime(&tm)));
}

int main()
{
    print_time(print);

    return 0;
}
>>>>>>> f6c66f010093731110298d25ba844a96160ab6fd
