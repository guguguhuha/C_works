
#include "Contact.h"
// ǿ��������
//�������setbuf(stdout,NULL)!!!


//����ģ��
int ContactFind(Contact *p, char *FindData)
{
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++)
    {
        if (strcmp(p->data[i].name, FindData) == 0)
        {
            return i;//�ҵ��ͷ����±�
        }
    }
    return -1;//�Ҳ����ͷ���-1
}

/*
//��ʼ�� --- ��̬
void ContactInit(Contact *p)
{
    //��֤p��ΪNULL
    assert(p);
    //����
    memset(p->data, 0, sizeof(p->data));
    p->size = 0;

}
*/

/*
//��ʼ�� --- ��̬
void ContactInit(Contact *p)
{
    assert(p);
    p->data = NULL;
    p->size = 0;
    p->capacity = 1;
}
*/

//���ļ�������Ϣ
void Lodging(Contact *p)
{
    assert(p);
    //��һ�ļ�
    FILE *fp = fopen("../Contact.dat", "ab");//��������ھʹ��������ھ�׷��
    if (fp == NULL)
    {
        perror("FILE: Ab");
        exit(-1);
    }
    fclose(fp);//�ر��ļ���������һ��ֻ��Ϊ��ȷ���ļ�����
    //��һ�ļ�
    fp=fopen("../Contact.dat","rb");
    if (fp == NULL)
    {
        perror("FILE: Rb");
        exit(-1);
    }
    Data temp;//���������Ϣ����temp��
    while(fread(&temp, sizeof(Data),1,fp))
    {
        //�������
        CheckCapacity(p);
        //��ֵ
        p->data[p->size]=temp;
        p->size++;
    }
    fclose(fp);//�ر��ļ�
}


//��ʼ�� --- ���ļ�
void ContactInit(Contact *p)
{
    assert(p);
    p->data = NULL;
    p->size = 0;
    p->capacity = 1;
    Lodging(p);
}


/*//�����ϵ�� --- ��̬
void ContactAdd(Contact *p)
{
    //���Ա�֤p��ΪNULL
    assert(p);
    //�����ϵ�������Ѿ��������������
    if (p->size == MAX)
    {
        printf("ͨѶ¼��������ɾ��һЩ�������ӣ�\n");
        return;
    }
    Data person;//��¼��ϵ����Ϣ
    printf("��������ϵ�˵�����:>");
    scanf("%s", person.name);
    printf("��������ϵ�˵�����:>");
    scanf("%d", &person.age);
    printf("��������ϵ�˵��Ա�:>");
    scanf("%s", person.sex);
    printf("��������ϵ�˵ĵ绰:>");
    scanf("%s", person.pnum);
    printf("��������ϵ�˵�סַ:>");
    scanf("%s", person.addr);
    //����ϵ����Ϣ�浽ͨѶ¼��
    p->data[p->size] = person;
    p->size++;
}*/

//�����������
void CheckCapacity(Contact *p)
{
    assert(p);
    //�����ϵ�˸���Ϊ0����������ͬ������Ҫ����
    if (p->size == 0 || p->size == p->capacity)
    {
        //��̬�ڴ濪��
        Data *ptr = (Data *) realloc(p->data, sizeof(Data) * p->capacity * 2);
        if (ptr == NULL)//����ʧ��
        {
            //����
            perror("CHECK CAPACITY ERROE ��\n");
            exit(-1);
        }
        //���ٳɹ������¸�ֵ
        p->data = ptr;
        //����֮������Ҳ��Ӧ����
        p->capacity *= 2;
    }
    //��֮ʲô������Ҫ��
}

//�����ϵ�� --- ��̬
void ContactAdd(Contact *p)
{
    //���Ա�֤p��ΪNULL
    assert(p);
    //�����ϵ�˸�����������������ϵ�˸�������0����ʱ���Ǿ���Ҫ������,������ʹ��һ��������������
    CheckCapacity(p);
    Data person;//��¼��ϵ����Ϣ
    printf("��������ϵ�˵�����:>");
    scanf("%s", person.name);
    printf("��������ϵ�˵�����:>");
    scanf("%d", &person.age);
    printf("��������ϵ�˵��Ա�:>");
    scanf("%s", person.sex);
    printf("��������ϵ�˵ĵ绰:>");
    scanf("%s", person.pnum);
    printf("��������ϵ�˵�סַ:>");
    scanf("%s", person.addr);
    //����ϵ����Ϣ�浽ͨѶ¼��
    p->data[p->size] = person;
    p->size++;
}

//ɾ����ϵ��
void ContactDel(Contact *p)
{
    assert(p);
    char DelName[NAME_MAX] = {0};
    printf("��������Ҫɾ������ϵ������:>");
    scanf("%s", DelName);
    int ret = ContactFind(p, DelName);
    if (ret == -1)
    {
        printf("ͨѶ¼�в��޴��ˣ������¼�����룡\n");
    } else
    {
        int j = 0;
        for (j = ret; j < p->size; j++)
        {
            //��ǰ��������Ų������
            p->data[j] = p->data[j + 1];
        }
        //ɾ�����֮����ϵ�˸�����һ
        p->size--;
    }
}

//������ϵ��
void ContactSearch(Contact *p)
{
    assert(p);
    char SearchName[NAME_MAX];
    printf("��������Ҫ���ҵ���ϵ������:>");
    scanf("%s", SearchName);
    //�������޴���
    int ret = ContactFind(p, SearchName);
    if (ret == -1)
    {
        printf("ͨѶ¼�в��޴��ˣ������¼�����룡\n");
    } else
    {
        printf("�������ҵ���ϵ����ϢΪ:\n");
        printf("    ����\t�Ա�\t  ����\t   �绰\t\t��ַ\n");
        printf("   %-5s\t%s\t%d\t%s\t%s\n", p->data[ret].name,
               p->data[ret].sex,
               p->data[ret].age,
               p->data[ret].pnum,
               p->data[ret].addr);
    }
}

//�޸���ϵ����Ϣ
void ContactModify(Contact *p)
{
    assert(p);
    char ModifyName[NAME_MAX];
    printf("��������Ҫ�޸ĵ���ϵ������:>");
    scanf("%s", ModifyName);
    int ret = ContactFind(p, ModifyName);
    if (ret == -1)
    {
        printf("ͨѶ¼�в��޴��ˣ������¼�����룡\n");
    } else
    {
        Data person;//��¼��ϵ����Ϣ
        printf("��������ϵ�˵�����:>");
        scanf("%s", person.name);
        printf("��������ϵ�˵�����:>");
        scanf("%d", &person.age);
        printf("��������ϵ�˵��Ա�:>");
        scanf("%s", person.sex);
        printf("��������ϵ�˵ĵ绰:>");
        scanf("%s", person.pnum);
        printf("��������ϵ�˵�סַ:>");
        scanf("%s", person.addr);
        //����ϵ����Ϣ�浽ͨѶ¼��
        p->data[ret] = person;
    }
}

//չʾ��ϵ����Ϣ
void ContactShow(Contact *p)
{
    assert(p);
    if (p->size == 0)
    {
        printf("ͨѶ¼�в���һ�ˣ�\n");
        return;
    }

    int i = 0;
    printf("    ����\t�Ա�\t  ����\t   �绰\t\t��ַ\n");
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


//������ϵ��
void ContactSort(Contact *p)
{
    assert(p);
    int choice;
    sort_menu();
    printf("��ѡ������Ĳο���:>");
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
            printf("���������������룡\n");
    }
}

//��ӡ������Ϣ
void ContactHelp(Contact *p)
{
    printf("*******************************************\n");
    printf("******     add ---- �����ϵ����Ϣ    ******\n");
    printf("******     del ---- ɾ����ϵ����Ϣ    ******\n");
    printf("******  search ---- ������ϵ����Ϣ    ******\n");
    printf("******  modify ---- �޸���ϵ����Ϣ    ******\n");
    printf("******    show ---- չʾ��ϵ����Ϣ    ******\n");
    printf("******    help ---- ������Ϣ          ******\n");
    printf("******    sort ---- ������ϵ����Ϣ    ******\n");
    printf("******    exit ---- �˳�ͨѶ¼        ******\n");
    printf("*******************************************\n");
}

/*//�˳�ͨѶ¼
void ContactExit(Contact *p)
{
    printf("exit !\n");
}*/

/*
//�˳�ͨѶ¼ --- ��̬
void ContactExit(Contact *p)
{
    //�ͷ����ǿ��ٵ��ڴ�
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

//�˳�ͨѶ¼ --- ���ļ�
void ContactExit(Contact *p)
{
    //�������ļ�
    Save(p);
    //�ͷ����ǿ��ٵ��ڴ�
    free(p->data);
    printf("exit !\n");
}