#define _CRT_SECURE_NO_WARNINGS
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a; &b;
//	int* arr[] = {&a, &b};
//	//����ָ�������
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//����ָ��
//
//	int(* pfA[4])(int, int);//����ָ�������
//
//	//����ָ������
//
//	//pfArr2���Ǻ���ָ������
//	//int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}
//

#include<stdio.h>
//������ - �ӡ������ˡ���
void menu()
{
	printf("****************************\n");
	printf("**** 1. add   2. sub    ****\n");
	printf("**** 3. mul   4. div    ****\n");
	printf("**** 0. exit            ****\n");
	printf("****************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
//
////��������-����ָ��
////�ص�����
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//������
//			break;
//		case 2:
//			calc(Sub);//������
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//����ָ������ - ת�Ʊ�
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);//1
		if (0 == input)
		{
			printf("�˳�����\n");
			break;
		}
		else if (input>=1 && input<=4)
		{
			printf("������2��������:>");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);

	return 0;
}