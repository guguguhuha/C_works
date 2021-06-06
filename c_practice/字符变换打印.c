#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include<string.h>

void print( char _2[])
{
	printf("%s\n", _2);
	Sleep(500);
	system("cls");
}

int main()//纯字母
{
	char _1[] = "guguguhuha";
	char _2[] = "##########";
	int left = 0;
	int right = strlen(_2) - 1;
	print(_2);

	while (left <= right)
	{
		_2[left++] = _1[left];
		_2[right--] = _1[right];
		print(_2);
	}
	printf("%s", _2);
	return 0;
}

//int main()//汉字
//{
//	char _1[] = "咕咕咕呼哈";
//	char _2[] = "##########";
//	int left = 0;
//	int right = strlen(_2) - 1;
//	print(_2);
//
//	while (left <= right)
//	{
//		_2[left++] = _1[left];
//		_2[left++] = _1[left];
//		_2[right--] = _1[right];
//		_2[right--] = _1[right];
//		print(_2);
//	}
//	printf("%s", _2);
//	return 0;
//}

