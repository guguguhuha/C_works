#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, n, k;
	char arr[100];
	char temp;
	scanf("%s", &arr);
	n = (int)strlen(arr);
	for (i = 0; i < n; i++)
	{
		temp = arr[i];
		{
			for (j = i + 1; j < n ; j++)
			{
				if (temp == arr[j])
				{
					for (k = j; k < n; k++)
					{
						arr[k] = arr[k + 1];				
					}
					j--;
					arr[--n] = '\0';
				}
			}
		}
	}
	puts(arr);

	return 0;
}