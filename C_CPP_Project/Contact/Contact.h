//确保文件只包含一次
#ifndef CONTACT_CONTACT_H
#define CONTACT_CONTACT_H

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

//采用宏的目的是方便日后修改
#define NAME_MAX 20
#define SEX_MAX 8
#define PNUM_MAX 13
#define ADDR_MAX 20
#define MAX 10

//存放个人信息的结构体
typedef struct Data
{
    char name[NAME_MAX];//姓名
    int age;//年龄
    char sex[SEX_MAX];//性别
    char pnum[PNUM_MAX];//电话
    char addr[ADDR_MAX];//地址
} Data;

/*
//存放MAX个个人信息的通讯录 --- 静态
typedef struct Contact
{
    Data data[MAX];
    int size;
} Contact;
*/
//存放MAX个个人信息的通讯录 --- 动态
typedef struct Contact
{
    Data* data;//存放数据
    int size;//有效数据的个数
    int capacity;//容量的大小
} Contact;

//枚举来作为常量使得在看代码时比较清晰
enum choice
{
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT,
    HELP
};

enum sort_by
{
    NAME=1,
    SEX,
    AGE,
    PNUM,
    ADDR
};


//初始化通讯录
void ContactInit(Contact *p);

//添加联系人
void ContactAdd(Contact* p);

//删除联系人
void ContactDel(Contact* p);

//查找联系人
void ContactSearch(Contact* p);

//修改联系人信息
void ContactModify(Contact* p);

//展示联系人信息
void ContactShow(Contact* p);

//排序联系人
void ContactSort(Contact* p);

//打印帮助
void ContactHelp(Contact* p);

//退出通讯录
void ContactExit(Contact* p);

//检查容量函数
void CheckCapacity(Contact *p);


#endif //CONTACT_CONTACT_H
