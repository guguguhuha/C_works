#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//2. �й��Ŵ���ѧ�����������ġ��㾭��������������ġ���Ǯ��ټ����⡱��
//����һ��ֵǮ�壬��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ���
//���̡�ĸ���������Σ�������⡣

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