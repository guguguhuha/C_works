#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ͨ���˵�ѡ�����һ������ĳ������ֵ������Ϊ��ѧ�⺯������
//Ҫ��˵�ѡ������ݴ��������������޴ν��в˵�ѡ��
//ֱ����Ը�˳����򣬲ο���������

#include<math.h>



int main()
{
	int choice;
	float result, num1,num2;
	int flag_2 = 0;
	char esc;
	printf("������������һЩ��ѧ����\n");
	printf("#################################\n");
	printf("# 1 �����ֵ\t\t\t#\n");
	printf("# 2 ��ƽ����\t\t\t#\n");
	printf("# 3 �����\t\t\t#\n");
	printf("# 4 ������\t\t\t#\n");
	printf("# 0 �˳�\t\t\t#\n");
	printf("#################################\n");
	while (1)
	{
		while (1)
		{
			printf("�밴�˵�������ѡ��( 0-4 ):  \n");
			scanf("%d", &choice);
			if (choice >= 0 && choice <= 4)
				break;
		}
		
		switch (choice)
		{
		case 1:
			printf("������һ������");
			scanf("%f", &num1);
			num2 = abs(num1);
			printf("%f�ľ���ֵ��%f\n",num1,num2);
			break;
		case 2:
			printf("������һ������");
			scanf("%f", &num1);
			num2= sqrt(num1);
			printf("%f��ƽ������%.1f\n", num1, num2);
			break;
		case 3:
			printf("������һ������");
			scanf("%f", &num1);
			num2 = log(num1);
			printf("%f�Ķ�����%f.1\n", num1, num2);
			break;
		case 4:
			printf("������һ������");
			scanf("%f", &num1);
			num2 = pow(num1,3);
			printf("%f��������%.1f\n", num1, num2);
			break;
		case 0:
			printf("��ȷ��Ҫ�˳��𣿣�y/n��");
			getchar();
			scanf("%c", &esc);
			if (esc == 'y')
			{
				printf("ллʹ�ã� \n");
				flag_2 = 1;
			}
			break;

			
		}
	if (flag_2)
				break;

	}
	return 0;
}



	
