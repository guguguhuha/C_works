#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 11

int jiami(char str[] )
{
	int i, cn, idma = 0;
	for (i = 0; i < 5; i++)
	{
		cn = (str[i] * str[4 - i]) % n;
		idma = idma * 10 + cn;
	}
	return idma;
}


int main()
{

	int q,w, e, r, t, y;
	int test;
	char a, s, d, f, g;
	char ret[10] = { 0 };
	FILE*fp1 = fopen("20-21-1（周二班）期中考试学号（加密）成绩表.txt", "r");
	FILE*fp2 = fopen("a.xls", "w");
	if (fp1 == NULL)
	{
		printf("err!\n");
		exit(0);
	}
	fprintf(fp2, "num\tscore\t1\t2\t3\t4\4\t\n");
	while (!feof(fp1))
	{
		fscanf(fp1, "%d%d%d%d%d%d", &q, &w, &e, &r, &t, &y);
		/*printf("%s\n",q);*/
		//fprintf(fp2, "%s\t%d\t%d\t%d\t%d\t%d\n", q, w, e, r, t, y);
		for(a='0';a<= '9';a++)
			for (s = '0' ;s <= '9'; s++)
				for (d = '0'; d <= '9'; d++)
					for (f = '0'; f <= '9'; f++)
						for (g = '0'; g <= '9'; g++)
						{
							test = 0;
							char str[10] = { a,s,d,f,g };
							test = jiami(str);
							if (test == q)
							{
								fprintf(fp2, "%s\t%d\t%d\t%d\t%d\t%d\n", str, w, e, r, t, y);

							}

						}

	}
	fclose(fp1);
	fclose(fp2);
	printf(" have done!");
	return 0;
}
