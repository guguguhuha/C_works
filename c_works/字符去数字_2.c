#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i = 0, j = 0,n;
	char arr[50];
	scanf("%s", &arr);
	n = (int)strlen(arr);
	for (i = 0; i < n; i++)
	{
		if (isdigit(arr[i]))
		{
			for (j = i; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[--n] = '\0';
			i--;
		}
	}
	printf("%s", arr);
	return 0;
}