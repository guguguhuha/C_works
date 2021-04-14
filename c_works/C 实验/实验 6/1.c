#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct p
{
	int num;
	char name[30];
	double score;
};
int main()
{
	int n, j, i;
	struct p people[20], temp;
	printf("请输入你要输入的人数：");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%s%lf", &people[i].num, &people[i].name, &people[i].score);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (people[j].score < people[j+1].score)
			{
				temp = people[j + 1];
				people[j + 1] = people[j];
				people[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d %s %lf\n", people[i].num, people[i].name, people[i].score);
	}
	return 0;
}