#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//通过菜单选择求解一个数的某个函数值（函数为数学库函数），
//要求菜单选择具有容错能力，可以无限次进行菜单选择，
//直到自愿退出程序，参考界面如下

#include<math.h>



int main()
{
	int choice;
	float result, num1,num2;
	int flag_2 = 0;
	char esc;
	printf("本程序可以完成一些数学计算\n");
	printf("#################################\n");
	printf("# 1 求绝对值\t\t\t#\n");
	printf("# 2 求平方根\t\t\t#\n");
	printf("# 3 求对数\t\t\t#\n");
	printf("# 4 求立方\t\t\t#\n");
	printf("# 0 退出\t\t\t#\n");
	printf("#################################\n");
	while (1)
	{
		while (1)
		{
			printf("请按菜单键进行选择( 0-4 ):  \n");
			scanf("%d", &choice);
			if (choice >= 0 && choice <= 4)
				break;
		}
		
		switch (choice)
		{
		case 1:
			printf("请输入一个数：");
			scanf("%f", &num1);
			num2 = abs(num1);
			printf("%f的绝对值是%f\n",num1,num2);
			break;
		case 2:
			printf("请输入一个数：");
			scanf("%f", &num1);
			num2= sqrt(num1);
			printf("%f的平方根是%.1f\n", num1, num2);
			break;
		case 3:
			printf("请输入一个数：");
			scanf("%f", &num1);
			num2 = log(num1);
			printf("%f的对数是%f.1\n", num1, num2);
			break;
		case 4:
			printf("请输入一个数：");
			scanf("%f", &num1);
			num2 = pow(num1,3);
			printf("%f的立方是%.1f\n", num1, num2);
			break;
		case 0:
			printf("你确定要退出吗？（y/n）");
			getchar();
			scanf("%c", &esc);
			if (esc == 'y')
			{
				printf("谢谢使用！ \n");
				flag_2 = 1;
			}
			break;

			
		}
	if (flag_2)
				break;

	}
	return 0;
}



	
