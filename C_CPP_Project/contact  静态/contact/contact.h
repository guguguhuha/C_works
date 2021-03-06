#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 3


enum choice
{
	QUIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	HELP
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


//描述个人信息的结构体
struct person
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//通讯录的结构体
struct contact
{
	struct person num[MAX];
	int sz;
};

//初始化
void Init(struct contact* p);

//帮助信息
void help();

//在通讯录中添加联系人
void add(struct contact* p);


//在通讯录中删除联系人
void del(struct contact* p);

//在通讯录中查找联系人
void search(struct contact* p);


//在通讯录中修改联系人信息
void modify(struct contact* p);


//在通讯录中按某种要求排序联系人信息
void sort(struct contact* p);

//显示通讯录联系人
void show(struct contact* p);



