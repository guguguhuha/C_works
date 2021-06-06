#include"stdio.h"

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	int key = 5;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < key)
			left = mid+1;
		else if (arr[mid] > key)
			right = mid-1;
		else
			break;
	}
	if (left <= right)
		printf("zhaodaole xiabiaoshi %d", mid);
	else
		printf("err");
	return 0;

}