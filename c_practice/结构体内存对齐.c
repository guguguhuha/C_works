#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stddef.h>

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("�ýṹ���Ա c1 ��ʼ��λ��Ϊ�� %d ���ֽ�\n", offsetof(struct S1, c1));
//	printf("�ýṹ���Ա i ��ʼ��λ��Ϊ�� %d ���ֽ�\n", offsetof(struct S1, i));
//	printf("�ýṹ���Ա c2 ��ʼ��λ��Ϊ�� %d ���ֽ�\n", offsetof(struct S1, c2));
//	printf("�ýṹ����ռ���ڴ�ռ�Ϊ %d ���ֽ�\n", sizeof(struct S1));
//	return 0;
//}

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S2));
//	return 0;
// }


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

////��1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////��2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	return 0;
//}

//struct s
//{
//	char a;
//	int b;
//};

#include <stdio.h>
#pragma pack(8)//����Ĭ�϶�����Ϊ8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
#pragma pack(1)//����Ĭ�϶�����Ϊ8
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
int main()
{
	//����Ľ����ʲô��
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
