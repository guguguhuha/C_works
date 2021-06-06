#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct p
{
	int num;
	char name[30];
	double score;
};
int main()
{
	int  i;
	struct p people[20];
	FILE*fp1 = fopen("px.txt", "r");
	FILE*fp2 = fopen("cj.txt", "w");
	if (fp1 == NULL && fp2 == NULL)
	{
		printf("can't open the file!\n");
		exit(0);
	}
	while (!feof(fp1))
	{
		i = 0;
		fscanf(fp1, "%d %s %lf", &people[i].num, &people[i].name, &people[i].score);
		
		if (people[i].score < 60)
			fprintf(fp2, "%d  %s%  lf\n", people[i].num, people[i].name, people[i].score);
		i++;
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}