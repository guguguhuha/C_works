#include<stdio.h>
#include<stdlib.h>

int jiami(char str[], int n)
{
	int i, cn, idma = 0;
	for (i = 5; i < 10; i++)
	{
		cn = (str[i] * str[14 - i]) % n;
		idma = idma * 10 + cn;
	}
	return idma;
}

int main()
{
	int n;
	int cj;
	int cf;
	int q, w, e, r, t;
	int qwer = 1;
	char str[11] = { 0 };
	FILE*fp1 = fopen("20-21-1���ܶ��ࣩ���п���ѧ�ţ����ܣ��ɼ���.txt", "r");
	FILE*fp3 = fopen("1.txt", "a+");
	FILE*fp4 = fopen("2.txt", "a+");
	if (fp1 == NULL)
	{
		printf("1\terr\n");
		exit(0);
	}
	n = 11;
	printf("num:  ");
	scanf("%s", &str);
	cj = jiami(str, n);
	while (!feof(fp1))
	{
	
		fscanf(fp1, "%d%d%d%d%d%d", &cf,&q,&w,&e,&r,&t);
		
		if (cj == cf)
		{
			printf("%s \n���ĳɼ�Ϊ ��%d\nÿһ��ĳɼ��ֱ�Ϊ��%d  %d  %d  %d\n",str,q,w,e,r,t);
			qwer = 0;
		}
	}
	if(qwer)
		printf("over!\n");
	return 0;
	
}
