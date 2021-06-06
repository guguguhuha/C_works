#define _CRT_SECURE_NO_WARNINGS 1
//问题描述：有3个柱子A、B、C，开始时A上有64个盘子，盘子大小不等，大的在下、小的在上。
//问题是如何把A柱上的64个盘子借助B柱移到C柱上，但要求每次只能移动一个盘子，且在移动过程中始终保持大的盘子在下，小的盘子在上。
//分析：Hanio塔(汉诺塔)问题的解决方法可以这样：
//将63个盘子从A柱移到B柱上，再把最大盘子的从A柱移到C柱上，最后把B柱上的63个盘子移到C柱上。
//而这个过程中，将A柱上63个盘子移到B柱上和最后将B柱上的63个盘子移到C柱上
//又可以看成两个有63个盘子的汉诺塔问题，所以也用上述的方法解决。
#include<stdio.h>
void move(int k, char x, char z)
{
	printf("%3d:  %c--->%c\n", k, x, z);
}
void Hanio(int n, char x, char y, char z)  //递归函数
{
	if (n == 1)move(1, x, z);   //输出1号盘子
	else
	{
		Hanio(n - 1, x, z, y);   //将1到n-1号盘递归调用从X柱移到Y柱上
		move(n, x, z);           //输出最大盘子从X柱移到Z柱
		Hanio(n - 1, y, x, z);   //将1到n-1号盘递归调用从Y柱移到Z柱上
	}
}
int main()
{
	int m;
	printf("please input the number of diskes: ");
	scanf("%d", &m);
	Hanio(m, 'A', 'B', 'C');
	return 0;
}





