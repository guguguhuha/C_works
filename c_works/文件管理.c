#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include <errno.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
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
//    pFile = fopen("myfile.txt", "w");//打开一个文件(没有就创建),以写的方式打开
//    if (pFile != NULL)//如果打开成功
//    {
//        fputs("fopen example", pFile);//就往文件里写入 fopen example
//        fclose(pFile);//关闭文件
//    }
//    return 0;
//}



//int main()
//{
//	相对路径
//	.. 表示上一级目录
//	. 当前目录
//	FILE* pf = fopen("../data.txt", "r");//在上一级文件中打开data.txt，如果没有就报错
//	绝对路径
//	./hehe/test.txt
//	../../
//	FILE* pf = fopen("../../data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//		return 1;//失败返回
//	}
//	打开文件成功
//	printf("打开文件成功\n");
//	读写文件
//	...
//
//	关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//
//	return 0;
//}
//
//
//


////在文件里写入a-z26个字母
//int main()
//{
//	//fopen函数如果是以写的形式打开
//	//如果文件不错在，会创建这个文件
//	//如果文件存在，会清空文件的内容
//	//fopen函数如果是以读的形式打开
//	//文件不存在打开失败
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//失败返回
//	}
//	//写文件
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);//在文件里写 --- pf 我们自己定义的文件指针
//		fputc(i, stdout);//显示在屏幕上 ---  stdout --- 标准输出流
//	}					 // 从键盘输入 --- stdin --- 标准输入流
//
//	//关闭文件
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

////从刚才写的文件，再把内容读出来
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");// r 是以读的形式打开文件，如果没有该文件就报错
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//打开文件成功，读文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//d
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)// pf --- 所指定的输入流
//	{
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "a");// a --- 如果没有就该文件就创建，有就在该文件后方继续追加内容 
//	if (pf == NULL)					  // 而 w 如果存在该文件会覆盖重写
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写一行数据
//	fputs("hello\n", pf);//输出到文件中
//	fputs("hello\n", stdout);//在屏幕上显示
//	fputs("hello world\n", pf);//输出到文件中
//	fputs("hello world\n",stdout);//在屏幕上显示
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
//	char arr[100] = {0};//存放写入的信息
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读一行数据
//	//fgets(arr, 100, pf);
//	//printf("%s\n", arr);
//
//
//	while (fgets(arr, 10, pf) != NULL)//输出---一次读十个
//	{
//		printf("%s", arr);
//	}
//
//
//	//fgets从标准输入流中读取
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
//	//格式化的写入
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//printf("%s %d %f", s.name, s.age, s.score);//对比一下只是差了一个 流 的指定
//	//关闭文件
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
//	格式化的读取
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));//从文件中读取
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);//输出到屏幕上
//
//	scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	关闭文件
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
//	//sprintf可以把结构化的数据转换为一个字符串
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("按照字符串的形式：%s\n", buf);
//
//	struct Stu tmp = { 0 };
//
//	//sscanf可以把一个字符串转换为一个结构化的数据
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("按照格式化的形式：%s %d %f\n", tmp.name, tmp.age, tmp.score);
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
//	//写文件
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
//// data.txt 内容  zhangsan 20 66.500000
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "rb");//binary --- 二进制
//	if (pf == NULL)					   // rb --- 二进制读
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件-二进制
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
//	FILE*pf = fopen("bin.dat", "wb");//二进制写
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
//	//读取
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//定位文件指针到文件的起始位置
//	//fseek(pf, -2,SEEK_CUR);
//	//fseek(pf, 0, SEEK_SET);
//	//printf("%d\n", ftell(pf));
//
//	rewind(pf);
//
//	ch = fgetc(pf);//要在这里读取'a'
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#include <stdio.h>
//#include <windows.h>
////VS2019 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在一些编译器上并不能使用
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
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
//	//读取
//	int ch = 0;
//	while (fread(p,5,1,pf))
//	{
//		printf("%s ", p);
//	}
//	//找结束的原因
//	if (ferror(pf))
//	{
//		printf("读取是发生错误，失败，而结束\n");
//	}
//	else if (feof(pf))
//	{
//		printf("遇到文件末尾，而结束的\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//此时文件内容为：123456789
int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		perror("\n");
		exit(1);
	}

	char a = fgetc(fp);
	printf("%c ", a);//此时结果为 1，现在指针指向 2

	a = fgetc(fp);//此时读取2，指针指向 3
	printf("%c ", a);

	fseek(fp, -1, SEEK_END);//将文件指针置于文章末尾

	a = fgetc(fp);//此时读取9，指针再次指向末尾
	printf("%c ", a);

	fseek(fp, 1, SEEK_SET);//将文件指针置于文章头

	a = fgetc(fp);//此时读取1，指针再次指向2
	printf("%c ", a);

	fclose(fp);
	fp = NULL;
	return 0;
}




