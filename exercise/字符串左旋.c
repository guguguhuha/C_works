#define _CRT_SECURE_NO_WARNINGS
//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<assert.h>

//void reverse(char* arr, int k)
//{
//	assert(arr);
//	char * tmp=arr;
//	while (k--)
//	{
//		char temp = *arr;
//		while (*(arr+1) != '\0')
//		{
//			*arr = *(arr + 1);
//			arr++;
//		}
//		*arr = temp;
//		arr = tmp;//将指针还原为原始位置
//	}
//}
//
//int main()
//{
//	char a[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	reverse(a, k);
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	return 0;
//}

////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////
////
////
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////
////给定s1 = abcd和s2 = ACBD，返回0.
////
////
////
////AABCD左旋一个字符得到ABCDA
////
////AABCD左旋两个字符得到BCDAA
////
////AABCD右旋一个字符得到DAABC
//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
//void reverse(char* arr, int k)
//{
//	assert(arr);
//	char * tmp=arr;
//	while (k--)
//	{
//		char temp = *arr;
//		while (*(arr+1) != '\0')
//		{
//			*arr = *(arr + 1);
//			arr++;
//		}
//		*arr = temp;
//		arr = tmp;//将指针还原为原始位置
//	}
//}
//
//int is_reverse(char* s1, char* s2)
//{
//	int i = strlen(s1);
//	for (int j = 0; j < i; j++)
//	{
//		reverse(s2, 1);
//		if (strcmp(s1, s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	char arr2[] = "abcd";
//	int ret = is_reverse(arr, arr2);
//	if (ret)
//	{
//		printf("YES!\n");
//	}
//	else
//	{
//		printf("NO!\n");
//	}
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
#include<stdio.h>

int check(int arr[3][3], int key)
{
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		if (key <= arr[i][2])
		{
			int j = 0;
			for ( j = 0; j < 3; j++)
			{
				if (arr[i][j] == key)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int key = 0;
	scanf("%d", &key);
	int ret = check(arr, key);
	if (ret)
	{
		printf("HAVE!\n");
	}
	else
	{
		printf("DON'T HAVE!\n");
	}
	return 0;
}