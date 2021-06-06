#define _CRT_SECURE_NO_WARNINGS 1
//4、自定义函数，功能为可以判断不定长数字串是否有效（提示：位数和字符是否正确），
//主函数输入姓名、生日和身份证号，调用自定义函数，
//若生日和身份证号无效，则重新输入，
//若输入都正确，判断输入的生日与身份证号码是否相符。（字符串截取可以调用库函数）

#include<stdio.h>
#include<string.h>
void Bir(char bir[])
{
	do {
		printf("请输入你的生日：");
		scanf("%s", bir);
	} while (strlen(bir)!=8);
}
void Id(char id[])
{
	do {
		printf("请输入你的身份证号码：");
		scanf("%s", id);
	} while (strlen(id)!=18);
}
int Istrue(char bir[], char id[])
{
	int i,cd, flag = 0;
	cd = 6;
	for (i = 0; i < 9; i++)
	{
		if (id[cd] == bir[i])
			flag++;
		cd++;
	}
	if (flag == 8)
			return 1;
		else
			return 0;
}
void Result(int result)
{
	if (result)
		printf("你所输的数据有效！\n");
	else
		printf("你所输的数据无效！\n");
}
void test()
{
	char bir[20] = { 0 };
	char id[20] = { 0 };
	int istrue;
	Bir(bir);
	Id(id);
	istrue = Istrue(bir,id );
	Result(istrue);
}
int main()
{

	test();
	return 0;
}
