
#include "Contact.h"
// 强调！！！
//调试请加setbuf(stdout,NULL)!!!


//查找模块
int ContactFind(Contact *p, char *FindData)
{
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++)
    {
        if (strcmp(p->data[i].name, FindData) == 0)
        {
            return i;//找到就返回下标
        }
    }
    return -1;//找不到就返回-1
}

/*
//初始化 --- 静态
void ContactInit(Contact *p)
{
    //保证p不为NULL
    assert(p);
    //置零
    memset(p->data, 0, sizeof(p->data));
    p->size = 0;

}
*/

/*
//初始化 --- 动态
void ContactInit(Contact *p)
{
    assert(p);
    p->data = NULL;
    p->size = 0;
    p->capacity = 1;
}
*/

//从文件载入信息
void Lodging(Contact *p)
{
    assert(p);
    //打开一文件
    FILE *fp = fopen("../Contact.dat", "ab");//如果不存在就创建，存在就追加
    if (fp == NULL)
    {
        perror("FILE: Ab");
        exit(-1);
    }
    fclose(fp);//关闭文件，我们这一步只是为了确保文件存在
    //打开一文件
    fp=fopen("../Contact.dat","rb");
    if (fp == NULL)
    {
        perror("FILE: Rb");
        exit(-1);
    }
    Data temp;//将读入的信息存入temp中
    while(fread(&temp, sizeof(Data),1,fp))
    {
        //检查容量
        CheckCapacity(p);
        //赋值
        p->data[p->size]=temp;
        p->size++;
    }
    fclose(fp);//关闭文件
}


//初始化 --- 带文件
void ContactInit(Contact *p)
{
    assert(p);
    p->data = NULL;
    p->size = 0;
    p->capacity = 1;
    Lodging(p);
}


/*//添加联系人 --- 静态
void ContactAdd(Contact *p)
{
    //断言保证p不为NULL
    assert(p);
    //如果联系人容量已经等于最大容量了
    if (p->size == MAX)
    {
        printf("通讯录已满，请删除一些后继续添加！\n");
        return;
    }
    Data person;//记录联系人信息
    printf("请输入联系人的姓名:>");
    scanf("%s", person.name);
    printf("请输入联系人的年龄:>");
    scanf("%d", &person.age);
    printf("请输入联系人的性别:>");
    scanf("%s", person.sex);
    printf("请输入联系人的电话:>");
    scanf("%s", person.pnum);
    printf("请输入联系人的住址:>");
    scanf("%s", person.addr);
    //将联系人信息存到通讯录中
    p->data[p->size] = person;
    p->size++;
}*/

//检查容量函数
void CheckCapacity(Contact *p)
{
    assert(p);
    //如果联系人个数为0或与容量相同，就需要扩容
    if (p->size == 0 || p->size == p->capacity)
    {
        //动态内存开辟
        Data *ptr = (Data *) realloc(p->data, sizeof(Data) * p->capacity * 2);
        if (ptr == NULL)//开辟失败
        {
            //报错
            perror("CHECK CAPACITY ERROE ！\n");
            exit(-1);
        }
        //开辟成功，重新赋值
        p->data = ptr;
        //扩容之后，容量也相应扩大
        p->capacity *= 2;
    }
    //反之什么都不需要干
}

//添加联系人 --- 动态
void ContactAdd(Contact *p)
{
    //断言保证p不为NULL
    assert(p);
    //如果联系人个数等于容量，或联系人个数等于0，这时我们就需要扩容了,我们来使用一个函数来干这事
    CheckCapacity(p);
    Data person;//记录联系人信息
    printf("请输入联系人的姓名:>");
    scanf("%s", person.name);
    printf("请输入联系人的年龄:>");
    scanf("%d", &person.age);
    printf("请输入联系人的性别:>");
    scanf("%s", person.sex);
    printf("请输入联系人的电话:>");
    scanf("%s", person.pnum);
    printf("请输入联系人的住址:>");
    scanf("%s", person.addr);
    //将联系人信息存到通讯录中
    p->data[p->size] = person;
    p->size++;
}

//删除联系人
void ContactDel(Contact *p)
{
    assert(p);
    char DelName[NAME_MAX] = {0};
    printf("请输入你要删除的联系人姓名:>");
    scanf("%s", DelName);
    int ret = ContactFind(p, DelName);
    if (ret == -1)
    {
        printf("通讯录中并无此人，请重新检查输入！\n");
    } else
    {
        int j = 0;
        for (j = ret; j < p->size; j++)
        {
            //从前往后依次挪动覆盖
            p->data[j] = p->data[j + 1];
        }
        //删除完成之后，联系人个数减一
        p->size--;
    }
}

//查找联系人
void ContactSearch(Contact *p)
{
    assert(p);
    char SearchName[NAME_MAX];
    printf("请输入你要查找的联系人姓名:>");
    scanf("%s", SearchName);
    //查找有无此人
    int ret = ContactFind(p, SearchName);
    if (ret == -1)
    {
        printf("通讯录中并无此人，请重新检查输入！\n");
    } else
    {
        printf("你所查找的联系人信息为:\n");
        printf("    姓名\t性别\t  年龄\t   电话\t\t地址\n");
        printf("   %-5s\t%s\t%d\t%s\t%s\n", p->data[ret].name,
               p->data[ret].sex,
               p->data[ret].age,
               p->data[ret].pnum,
               p->data[ret].addr);
    }
}

//修改联系人信息
void ContactModify(Contact *p)
{
    assert(p);
    char ModifyName[NAME_MAX];
    printf("请输入你要修改的联系人姓名:>");
    scanf("%s", ModifyName);
    int ret = ContactFind(p, ModifyName);
    if (ret == -1)
    {
        printf("通讯录中并无此人，请重新检查输入！\n");
    } else
    {
        Data person;//记录联系人信息
        printf("请输入联系人的姓名:>");
        scanf("%s", person.name);
        printf("请输入联系人的年龄:>");
        scanf("%d", &person.age);
        printf("请输入联系人的性别:>");
        scanf("%s", person.sex);
        printf("请输入联系人的电话:>");
        scanf("%s", person.pnum);
        printf("请输入联系人的住址:>");
        scanf("%s", person.addr);
        //将联系人信息存到通讯录中
        p->data[ret] = person;
    }
}

//展示联系人信息
void ContactShow(Contact *p)
{
    assert(p);
    if (p->size == 0)
    {
        printf("通讯录中并无一人！\n");
        return;
    }

    int i = 0;
    printf("    姓名\t性别\t  年龄\t   电话\t\t地址\n");
    for (i = 0; i < p->size; i++)
    {
        printf("   %-5s\t%s\t%d\t%s\t%s\n", p->data[i].name,
               p->data[i].sex,
               p->data[i].age,
               p->data[i].pnum,
               p->data[i].addr);

    }
}

void sort_menu()
{
    printf("           SORT_MENU          \n");
    printf("******************************\n");
    printf("****        1.name        ****\n");
    printf("****        2.sex         ****\n");
    printf("****        3.age         ****\n");
    printf("****        4.pnum        ****\n");
    printf("****        5.addr        ****\n");
    printf("******************************\n");
}

int sort_by_name(const void *s1, const void *s2)
{
    return strcmp(((Data *) s1)->name, ((Data *) s2)->name);
}

int sort_by_sex(const void *s1, const void *s2)
{
    return strcmp(((Data *) s1)->sex, ((Data *) s2)->sex);
}

int sort_by_age(const void *s1, const void *s2)
{
    return ((Data *) s1)->age - ((Data *) s2)->age;
}

int sort_by_pnum(const void *s1, const void *s2)
{
    return strcmp(((Data *) s1)->pnum, ((Data *) s2)->pnum);
}

int sort_by_addr(const void *s1, const void *s2)
{
    return strcmp(((Data *) s1)->addr, ((Data *) s2)->addr);
}


//排序联系人
void ContactSort(Contact *p)
{
    assert(p);
    int choice;
    sort_menu();
    printf("请选择排序的参考量:>");
    scanf("%d", &choice);
    switch (choice)
    {
        case NAME:
            qsort(p->data, p->size, sizeof(Data), sort_by_name);
            break;
        case SEX:
            qsort(p->data, p->size, sizeof(Data), sort_by_sex);
            break;
        case AGE:
            qsort(p->data, p->size, sizeof(Data), sort_by_age);
            break;
        case PNUM:
            qsort(p->data, p->size, sizeof(Data), sort_by_pnum);
            break;
        case ADDR:
            qsort(p->data, p->size, sizeof(Data), sort_by_addr);
            break;
        default:
            printf("输入有误，请检查输入！\n");
    }
}

//打印帮助信息
void ContactHelp(Contact *p)
{
    printf("*******************************************\n");
    printf("******     add ---- 添加联系人信息    ******\n");
    printf("******     del ---- 删除联系人信息    ******\n");
    printf("******  search ---- 查找联系人信息    ******\n");
    printf("******  modify ---- 修改联系人信息    ******\n");
    printf("******    show ---- 展示联系人信息    ******\n");
    printf("******    help ---- 帮助信息          ******\n");
    printf("******    sort ---- 排序联系人信息    ******\n");
    printf("******    exit ---- 退出通讯录        ******\n");
    printf("*******************************************\n");
}

/*//退出通讯录
void ContactExit(Contact *p)
{
    printf("exit !\n");
}*/

/*
//退出通讯录 --- 动态
void ContactExit(Contact *p)
{
    //释放我们开辟的内存
    free(p->data);
    printf("exit !\n");
}*/

void Save(Contact* p)
{
    assert(p);
    FILE* fp =fopen("../Contact.dat","wb");
    int i =0;
    for(i=0;i<p->size;i++)
    {
        fwrite(p->data+i, sizeof(Data),1,fp);
    }
    fclose(fp);
}

//退出通讯录 --- 带文件
void ContactExit(Contact *p)
{
    //保存置文件
    Save(p);
    //释放我们开辟的内存
    free(p->data);
    printf("exit !\n");
}