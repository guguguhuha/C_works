#include<stdio.h>
struct record
{
	int number;
	int mark;
}student[11], temp;
int main()
{
	int i, j, k;
	for (i = 1; i < 11; i++)
	{
		printf("请输入第%d位同学的分数：", i);
		student[i].number = i;
		scanf("%d", &student[i].mark);
	}
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11 - i ; j++)
		{
			if (student[j].mark < student[j+1].mark)
			{
				temp = student[j];
				student[j] = student[j+1];
				student[j+1] = temp;
			}
		}
	}
	printf("序号  分数\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%4d%6d\n", student[i].number, student[i].mark);
	}
	return 0;
}
