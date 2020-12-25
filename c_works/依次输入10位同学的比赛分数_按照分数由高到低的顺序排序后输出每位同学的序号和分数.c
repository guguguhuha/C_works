2、编写一个程序依，次输入10位同学的比赛分数（0~100），按照分数由高到低的顺序排序后输出每位同学的序号和分数。
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
