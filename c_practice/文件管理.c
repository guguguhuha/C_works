#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include <errno.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
////-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
////
//// Stream I/O Declarations Required by this Header
////
////-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//#ifndef _FILE_DEFINED
//#define _FILE_DEFINED
//typedef struct _iobuf
//{
//	void* _Placeholder;
//} FILE;
//#endif
//
//FILE* fopen(const char* filename, const char* mode);
//int fclose(FILE* stream);

///* fopen example */
//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("myfile.txt", "w");//��һ���ļ�(û�оʹ���),��д�ķ�ʽ��
//    if (pFile != NULL)//����򿪳ɹ�
//    {
//        fputs("fopen example", pFile);//�����ļ���д�� fopen example
//        fclose(pFile);//�ر��ļ�
//    }
//    return 0;
//}



//int main()
//{
//	���·��
//	.. ��ʾ��һ��Ŀ¼
//	. ��ǰĿ¼
//	FILE* pf = fopen("../data.txt", "r");//����һ���ļ��д�data.txt�����û�оͱ���
//	����·��
//	./hehe/test.txt
//	../../
//	FILE* pf = fopen("../../data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	���ļ��ɹ�
//	printf("���ļ��ɹ�\n");
//	��д�ļ�
//	...
//
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//
//	return 0;
//}
//
//
//


////���ļ���д��a-z26����ĸ
//int main()
//{
//	//fopen�����������д����ʽ��
//	//����ļ������ڣ��ᴴ������ļ�
//	//����ļ����ڣ�������ļ�������
//	//fopen����������Զ�����ʽ��
//	//�ļ������ڴ�ʧ��
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	//д�ļ�
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);//���ļ���д --- pf �����Լ�������ļ�ָ��
//		fputc(i, stdout);//��ʾ����Ļ�� ---  stdout --- ��׼�����
//	}					 // �Ӽ������� --- stdin --- ��׼������
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	fputc('b', stdout);
//	fputc('c', stdout);
//
//	return 0;
//}

////�Ӹղ�д���ļ����ٰ����ݶ�����
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");// r ���Զ�����ʽ���ļ������û�и��ļ��ͱ���
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ��ɹ������ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//d
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)// pf --- ��ָ����������
//	{
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "a");// a --- ���û�о͸��ļ��ʹ������о��ڸ��ļ��󷽼���׷������ 
//	if (pf == NULL)					  // �� w ������ڸ��ļ��Ḳ����д
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//дһ������
//	fputs("hello\n", pf);//������ļ���
//	fputs("hello\n", stdout);//����Ļ����ʾ
//	fputs("hello world\n", pf);//������ļ���
//	fputs("hello world\n",stdout);//����Ļ����ʾ
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//


//int main()
//{
//	char arr[100] = {0};//���д�����Ϣ
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��һ������
//	//fgets(arr, 100, pf);
//	//printf("%s\n", arr);
//
//
//	while (fgets(arr, 10, pf) != NULL)//���---һ�ζ�ʮ��
//	{
//		printf("%s", arr);
//	}
//
//
//	//fgets�ӱ�׼�������ж�ȡ
//	fgets(arr, 2, stdin);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//��ʽ����д��
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//printf("%s %d %f", s.name, s.age, s.score);//�Ա�һ��ֻ�ǲ���һ�� �� ��ָ��
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct Stu s = {0};
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	��ʽ���Ķ�ȡ
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));//���ļ��ж�ȡ
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);//�������Ļ��
//
//	scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//	char buf[200] = { 0 };
//
//	//sprintf���԰ѽṹ��������ת��Ϊһ���ַ���
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("�����ַ�������ʽ��%s\n", buf);
//
//	struct Stu tmp = { 0 };
//
//	//sscanf���԰�һ���ַ���ת��Ϊһ���ṹ��������
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("���ո�ʽ������ʽ��%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}
//


//int main()
//{
//	struct Stu s = { "zhangsan", 20, 99.5 };
//	FILE* pf = fopen("data.txt", "wb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



struct Stu
{
	char name[20];
	int age;
	float score;
};
//
//// data.txt ����  zhangsan 20 66.500000
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "rb");//binary --- ������
//	if (pf == NULL)					   // rb --- �����ƶ�
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�-������
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	int a = 10000;
//	FILE*pf = fopen("bin.dat", "wb");//������д
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//
//
//

/* fseek example */
//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("bin.dat", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}

//
//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//��ȡ
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//��λ�ļ�ָ�뵽�ļ�����ʼλ��
//	//fseek(pf, -2,SEEK_CUR);
//	//fseek(pf, 0, SEEK_SET);
//	//printf("%d\n", ftell(pf));
//
//	rewind(pf);
//
//	ch = fgetc(pf);//Ҫ�������ȡ'a'
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#include <stdio.h>
//#include <windows.h>
////VS2019 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush ��һЩ�������ϲ�����ʹ��
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	char p[1] ;
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//��ȡ
//	int ch = 0;
//	while (fread(p,5,1,pf))
//	{
//		printf("%s ", p);
//	}
//	//�ҽ�����ԭ��
//	if (ferror(pf))
//	{
//		printf("��ȡ�Ƿ�������ʧ�ܣ�������\n");
//	}
//	else if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����������\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��ʱ�ļ�����Ϊ��123456789
int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		perror("\n");
		exit(1);
	}

	char a = fgetc(fp);
	printf("%c ", a);//��ʱ���Ϊ 1������ָ��ָ�� 2

	a = fgetc(fp);//��ʱ��ȡ2��ָ��ָ�� 3
	printf("%c ", a);

	fseek(fp, -1, SEEK_END);//���ļ�ָ����������ĩβ

	a = fgetc(fp);//��ʱ��ȡ9��ָ���ٴ�ָ��ĩβ
	printf("%c ", a);

	fseek(fp, 1, SEEK_SET);//���ļ�ָ����������ͷ

	a = fgetc(fp);//��ʱ��ȡ1��ָ���ٴ�ָ��2
	printf("%c ", a);

	fclose(fp);
	fp = NULL;
	return 0;
}




