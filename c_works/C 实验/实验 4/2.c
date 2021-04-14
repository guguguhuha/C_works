#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//2. 中国古代数学家张丘建在他的《算经》中提出了著名的“百钱买百鸡问题”：
//鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，
//问翁、母、雏各几何？请编程求解。

int main()
{
	int money = 100;
	int man, woman, son;
	
	for (man = 0; man <= 20; man++)
		for (woman = 0; woman <= (100 - man * 5) / 3; woman++)
			for (son = 0; son <= (100 - man * 5 - woman * 3)*3; son++)
				if (man * 5 + woman * 3 + son *1/3  == 100 && man + woman + son == 100)
					printf("man: %d\nwoman: %d\nson: %d\n\n", man, woman, son);
	


	return 0;
}