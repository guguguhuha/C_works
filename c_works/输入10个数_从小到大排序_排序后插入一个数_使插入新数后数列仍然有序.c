//1、输入10个数，从小到大排序，排序后插入一个数，使插入新数后数列仍然有序。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 5;//表示数组元素的个数
	double power[] = { 42322,45571,40907,41234,40767 };
	double deletePower;//用户要删除的元素
	int deleteIndex = -1;//用户要删除的元素的下标,先赋一个不可能存在的初值
	int i, j;//循环变量
	double poweradd;//添加数组元素
	double powerPX = 0; //用来交换的临时变量
	int o;

	for (i = 0; i < count; i++)
	{
		printf("%.lf  ", power[i]);
	}
	printf("\n请输入要删除的元素：");
	scanf("%lf", &deletePower);
	for (i = 0; i < count; i++)
	{
		if (deletePower == power[i])
		{
			//记录当前的下标
			deleteIndex = i;
			break;//找到了要删除的战力值，直接跳出循环，提升效率
		}
	}
	//根据判断（是否找到），执行后续操作
	{
		if (deleteIndex == -1)
		{
			printf("没有找到您要删除的战力值，删除失败！\n");
		}
		else
		{
			count--;
			for (i = deleteIndex; i < count; i++)
			{
				power[i] = power[i + 1];//后面的元素像前面向一个进行覆盖
			}
			printf("删除后的结果为：\n");
			for (i = 0; i < count; i++)
			{
				printf("%.lf  ", power[i]);
			}
		}
		//添加数组元素
		printf("\n\n请输入要添加的数字：");
		scanf("%lf", &poweradd);

		power[count] = poweradd;
		count++;
		printf("添加后的结果为：");
		for (i = 0; i < count; i++)
		{
			printf("%.lf  ", power[i]);
		}

		//从大到小为数组排序
		for (i = 0; i < count - 1; i++)
		{
			for (j = 0; j < count - i - 1; j++ )
			{
				if (power[j] < power[j + 1])
				{
					powerPX = power[j];
					power[j] = power[j + 1];
					power[j + 1] = powerPX;
				}
			}
		}

		printf("\n\n排序后的结果为：");
		for (i = 0; i < count; i++)
		{
			printf("%.lf  ", power[i]);
		}
		return 0;
	}
}