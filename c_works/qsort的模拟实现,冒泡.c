#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void my_swap(char*_1,char*_2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *_1;
		*_1 = *_2;
		*_2 = temp;
		_1++;
		_2++;
	}
}

void my_qsort(void* base, size_t num, size_t size,int (*compar)(const void*, const void*))
{
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compar((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				//如果不满足顺序就交换
				my_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int int_compare(const void* _1, const void* _2)
{
	return (*(int*)_1) - (*(int*)_2);
}

void print_arr(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void print_arr_char(char* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", *(p + i));
	}
	printf("\n");
}

void test_1()
{
	int arr[] = { 1,4,2,3,8,5,6,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	my_qsort(arr, sz, sizeof(arr[0]), int_compare);
	print_arr(arr, sz);
}

int char_compare(const void* _1, const void* _2)
{
	return (*(char*)_1) - (*(char*)_2);
}

void test_2()
{
	char arr[] = "qrwewgagehsehs";
	int sz = (sizeof(arr) / sizeof(arr[0]))-1;
	print_arr_char(arr, sz);
	my_qsort(arr, sz, sizeof(arr[0]), char_compare);
	print_arr_char(arr,sz);
}

struct stu
{
	int num;
	char name[20];
	int score;
};

int stu_cmp_num(const void* _1, const void* _2)
{
	return ((struct stu*)_1)->num - ((struct stu*)_2)->num;
}

int stu_cmp_score(const void* _1, const void* _2)
{
	return ((struct stu*)_1)->score - ((struct stu*)_2)->score;
}

#include<string.h>

int stu_cmp_name(const void* _1, const void* _2)
{
	return strcmp(((struct stu*)_1)->name , ((struct stu*)_2)->name);
}

void test_3()
{
	struct stu peo[] = { {0,"asda",30},{2,"bcde",80},{1,"aeddf",40} };
	int sz = sizeof(peo) / sizeof(peo[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d %s %d", peo[i].num, peo[i].name, peo[i].score);
		printf("\n");
	}
	my_qsort(peo, sz, sizeof(peo[0]), stu_cmp_name);
	for (i = 0; i < sz; i++)
	{
		printf("%d %s %d", peo[i].num, peo[i].name, peo[i].score);
		printf("\n");
	}
}

int main()
{
	test_1();
	test_2();
	test_3();
	return 0;
}