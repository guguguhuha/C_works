#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50];
	char temp;
	int j, i;
	scanf("%s", &arr);
	j = 0;
	i = strlen(arr) - 1;
	while (j <= i)
	{
		temp=arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j++;
		i--;
	}
	printf("%s", arr);
	return 0;
}