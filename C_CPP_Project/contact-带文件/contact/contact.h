#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define SZ_DEFAULT 1

#define MAX 1


enum choice
{
	QUIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	HELP,
	SAVE
};


enum mode
{
	EXIT,
	NAME,
	AGE,
	SEX,
	TELE,
	ADDR
};


//����������Ϣ�Ľṹ��
struct person
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


////ͨѶ¼�Ľṹ��------��̬
//struct contact
//{
//	struct person num[MAX];
//	int sz;
//};

//ͨѶ¼�Ľṹ��------��̬
struct contact
{
	struct person* num;//
	int sz;//ͨѶ¼����ϵ�˵�����
	int capacity;//����һ��Ĭ��ֵ
};

//��ʼ��
void Init(struct contact* p);

//������Ϣ
void help();

//��ͨѶ¼�������ϵ��
void add(struct contact* p);


//��ͨѶ¼��ɾ����ϵ��
void del(struct contact* p);

//��ͨѶ¼�в�����ϵ��
void search(struct contact* p);


//��ͨѶ¼���޸���ϵ����Ϣ
void modify(struct contact* p);


//��ͨѶ¼�а�ĳ��Ҫ��������ϵ����Ϣ
void sort(struct contact* p);

//��ʾͨѶ¼��ϵ��
void show(struct contact* p);

void save(struct contact* p);

