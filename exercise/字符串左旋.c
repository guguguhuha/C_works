#define _CRT_SECURE_NO_WARNINGS
//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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
//		arr = tmp;//��ָ�뻹ԭΪԭʼλ��
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

////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////
////
////
////���磺����s1 = AABCD��s2 = BCDAA������1
////
////����s1 = abcd��s2 = ACBD������0.
////
////
////
////AABCD����һ���ַ��õ�ABCDA
////
////AABCD���������ַ��õ�BCDAA
////
////AABCD����һ���ַ��õ�DAABC
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
//		arr = tmp;//��ָ�뻹ԭΪԭʼλ��
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

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
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