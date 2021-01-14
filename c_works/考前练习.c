#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int n,i,j=0;
//	for (i = 0; i < 10; i++)
//		printf("%d  ", arr[i]);
//	printf("\n");
//	printf("请输入你要删除的数：");
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != n)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	printf("删除后的结果为：\n");
//	for (i = 0; i < 9; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int count = 0, n, j = 0, i = 0, temp, k;
//	printf("请输入你要输入的个数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		temp = arr[i];
//		for (j = i + 1; j < n; j++)
//		{
//			if (temp == arr[j])
//			{
//				for (k = j; k < n; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				i--;
//				n--;
//			}
//		}
//	}
//	printf("去重后的结果为：\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t t;
//	struct tm *T;
//	time(&t);
//	T = localtime(&t);
//	printf("%d-%d-%d %d:%d:%d\n", T->tm_year + 1900, T->tm_mon + 1, T->tm_mday, T->tm_hour, T->tm_min, T->tm_sec);
//	return 0;
//}


//#include<stdio.h>
//int sum(int n)
//{
//	if (n == 0)
//		return 0;
//	return n + sum(n-1);
//}
//
//int main()
//{
//	int a;
//	a = sum(4);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	return n * fac(n - 1);
//}
//
//int main()
//{
//	int a = fac(5);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//void write()
//{
//	FILE* fp = fopen("123.txt", "w");
//	if (fp == NULL)
//	{
//		printf("write err!");
//		exit(0);
//	}
//	fprintf(fp ,"1 2 3 4\n");
//	fclose(fp);
//}
//
//void append()
//{
//	FILE* fp = fopen("123.txt", "a+");
//	if (fp == NULL)
//	{
//		printf("append err!");
//		exit(0);
//	}
//	fprintf(fp , "5 6 7 8");
//	fclose(fp);
//}
//
//void read()
//{
//	FILE* fp = fopen("123.txt", "r");
//	int a, b, c, d;
//	if (fp == NULL)
//	{
//		printf("read err!");
//		exit(0);
//	}
//	while (!feof(fp))
//	{
//		fscanf(fp , "%d%d%d%d",&a,&b,&c,&d);
//		printf("%d %d %d %d\n", a, b, c, d);
//	}
//	fclose(fp);
//	
//}
//int main()
//{
//	write();
//	append();
//	read();
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("Before:\na = %d, b = %d\n", a, b);
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	printf("After:\na = %d, b = %d\n", a, b);
//	return 0;
//}

