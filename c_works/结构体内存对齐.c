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
//	printf("该结构体成员 c1 开始的位置为第 %d 个字节\n", offsetof(struct S1, c1));
//	printf("该结构体成员 i 开始的位置为第 %d 个字节\n", offsetof(struct S1, i));
//	printf("该结构体成员 c2 开始的位置为第 %d 个字节\n", offsetof(struct S1, c2));
//	printf("该结构体所占的内存空间为 %d 个字节\n", sizeof(struct S1));
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

////例1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////例2
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
#pragma pack(8)//设置默认对齐数为8
struct S1
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
#pragma pack(1)//设置默认对齐数为8
struct S2
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//取消设置的默认对齐数，还原为默认
int main()
{
	//输出的结果是什么？
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	return 0;
}
