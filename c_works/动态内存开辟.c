#define _CRT_SECURE_NO_WARNINGS

//void* malloc(size_t size);
//malloc
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	int arr[10] = {0};//��ջ����������40���ֽڵĿռ�
//
//	//��̬�ڴ濪�� - ������
//	//INT_MAX----���ε�����ֽڣ�λ��limit.h�ļ���
//	//int* p = (int*)malloc(INT_MAX);//����ʧ�ܵ����
//	int* p = (int*)malloc(40);//ϣ����40���ֽڵ���һ��10�����͵�����,��Ϊ���ǿ��ٵ�ָ��������int*����������Ҳ������ֵǿ��ת��Ϊint*
//	if (p == NULL)
//	{
//		//strerror ��string.h�ļ���
//		//errno ��errno.h �ļ���
//		printf("�ڴ濪��ʧ��: %s\n",strerror(errno));//��ӡ������Ϣ��errno�ṩ�����룬strerror���ṩ�Ĵ����뷭��Ϊһ���ַ���
//		
//		perror("�ڴ濪��ʧ��");//ֱ�Ӵ�ӡ������Ϣ��ֱ�Ӱ�װ�õ�һ���������� stdio.h ��
//
//		char* p = strerror(errno);//�������ֻ��õ�������Ϣ���������ӡ���������ǾͿ�����strerror(errno)���
//		printf("%s\n", p);
//	}
//	else
//	{
//		//���ٳɹ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//����ʹ��pָ��Ķ�̬�ڴ�
//		//�ֶ��ͷŶ�̬���ٵ��ڴ�
//
//		free(p);//�������ǿ����ڴ棬����ұ�Ҫ�е�һ�����ͷ����ǿ��ٵ��ڴ棡��
//		p = NULL;
//
//		//......
//	}
//
//	return 0;
//}
 // //���� p �����Ǹ����ڴ��ָ��
	//if (p == null)
	//{	//û�п��ٳɹ�
	//	//...
	//}
	//else
	//{
	//	//���ٳɹ�
	//	//...
	//}

		//free(p);//�������ǿ����ڴ棬����ұ�Ҫ�е�һ�����ͷ����ǿ��ٵ��ڴ棡��
		//p = NULL;
//
//void free(void* ptr);

//int main()
//{
//	//int arr[10];
//	//����һ�������Ŀռ�
//	//malloc���ٵĿռ䲻��ʼ��
//	//malloc����ֻ��1��
//	//calloc���ٵĿռ��ǳ�ʼ����
//	//calloc������2��
//
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//
//
//		//�ͷ�
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		//ҵ����
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//
//	//��չ����
//
//	//����1   ---   ������
//	ptr = realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
//	//�������������У����ǿ���ʧ�ܣ����ǲ��޷���֪�����һ���Ƿ����ʣ�
//
//	//����2  ---  ����
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;//����Ҫ�ǵ�������ԭ���ĵ�ַ���շ��صĵ�ַ
//				//���������ᵽ��Ҫ��ԭ�пռ�֮��û���㹻��Ŀռ�ʱ����չ�ķ����ǣ��ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á�
//				//�����������ص���һ���µ��ڴ��ַ����������Ҫ�ǵý��գ�
//	}
//	//ҵ����
//
//	free(ptr);//һ��Ҫ�ǵ��ͷ�
//	ptr = NULL;//��NULL
//
//	return 0;
//}

//1. ��NULLָ��Ľ����ò���
//������֣��� malloc/calloc/realloc �����ķ���ֵ�����

//int main()
//{
//	int*p = (int*)malloc(INT_MAX);
//	//p���п���ΪNULLָ��ģ���ΪNULL��ʱ��*p���ǷǷ������ڴ�
//
//	*p = 0;
//
//	return 0;
//}

////2. �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//Խ��
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = 0;//����10��ʱ���Խ����
//		}
//
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

////3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		err
//		for (i = 0; i <5; i++)
//		{
//			*p++ = 0;//����p++���и����õģ��ᵼ��pָ���ֵ�ı�
//			*(p + i) = 0;//����Ӧ��дΪ*(p + i)
//		}
//		�ͷ�
//		free(p);//�����ͷ��ڴ�ʱ��һ��Ҫ�����ǿ�ʼ��λ�ý����ͷţ�
//		p = NULL;
//	}
//	return 0;
//}

////5. ��ͬһ�鶯̬�ڴ����ͷ�
//
//int main()
//{
//	int*p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//err
//		for (i = 0; i <5; i++)
//		{
//			*(p + i) = 0;
//		}
//		//����ͷŻ�������
//		free(p);
//		
//		free(p);
//
//		p = NULL;
//		
//	}
//
//	return 0;
//}


////6.��̬�����ڴ������ͷţ��ڴ�й©��
//void test()
//{
//
//	int* p = (int*)malloc(100);
//
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);//δ�ͷ��ڴ�
//}


////����һ
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	GetMemory(str);
//
//	strcpy(str, "hello world");
//
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
////����test()����ʲô���

////�����
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	str = GetMemory();
//
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
////����test()����ʲô���

////������
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//
//	char* str = NULL;
//
//	GetMemory(&str, 100);
//
//	strcpy(str, "hello");
//
//	printf(str);
//}
// 
//int main()
//{
//	Test();
//	return 0;
//}
////����test()����ʲô���


////������
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//
//	free(str);
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
// 
//int main()
//{
//	Test();
//	return 0;
//}
////����test()����ʲô���

////��������
//typedef struct st_type
//{
//
//	int i;
//
//	int a[0];//���������Ա
//}type_a;
////��Щ�������ᱨ���޷�������Ըĳ�
//typedef struct st_type
//{
//
//	int i;
//
//	int a[];//���������Ա
//}type_a;
//
////Ҫע�⣺�ṹ�е����������Աǰ���������һ��������Ա��
////sizeof ���ص����ֽṹ��С����������������ڴ档
////�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ
////���������Ԥ�ڴ�С��
//
////code1
//typedef struct st_type
//{
//
//	int i;
//
//	int a[0];//���������Ա
//}type_a;
//
//
//printf("%d\n", sizeof(type_a));//�������4
//
//
////���������ʹ��
//
////����1
//int i = 0;
//type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
////ҵ����
//p->i = 100;
//for (i = 0; i < 100; i++)
//{
//
//	p->a[i] = i;
//}
//free(p);
//
////����2
//typedef struct st_type
//{
//
//	int i;
//
//	int* p_a;
//}type_a;
//type_a* p = malloc(sizeof(type_a));
//p->i = 100;
//p->p_a = (int*)malloc(p->i * sizeof(int));
////ҵ����
//for (i = 0; i < 100; i++)
//{
//
//	p->p_a[i] = i;
//}
////�ͷſռ�
//free(p->p_a);
//p->p_a = NULL;
//free(p);
//p = NULL;