#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}


//int main()
//{
//	char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);
//	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
//	return 0;
//}
//

//#include <stdio.h> 
//#include<string.h>
//int main()
//{
//	const char* str1 = "abcdef"; 
//	const char* str2 = "bbb"; 
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}
/* strcpy example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}


//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL); //断言保证dest不为空指针
//	assert(src != NULL);  //断言保证src不为空指针
//
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}

///* strcat example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);
//	return 0;
//}

//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest; 
//	assert(dest != NULL); 
//	assert(src != NULL); 
//	while (*dest)            //找到\0的位置
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))//在此\0位置上覆盖新的内容
//	{
//		;
//	}
//	return ret;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char key[] = "apple";
//    char buffer[80];
//    do {
//        printf("Guess my favorite fruit? ");
//        fflush(stdout);
//        scanf("%79s", buffer);
//    } while (strcmp(key, buffer) != 0);
//    puts("Correct answer!");
//    return 0;
//}

//#include<assert.h>
//int my_strcmp(const char* src, const char* dest)
//{
//	int ret = 0;
//	assert(src != NULL); 
//	assert(dest != NULL);
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dest) && *dest)//dest不为空，且如果相减结果为0，就继续循环
//	{
//		++src, ++dest;
//		if (ret < 0)
//			ret = -1; 
//		else if (ret > 0)
//			ret = 1;
//	}
//	return(ret);
//}
//#include<assert.h>
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	printf("%d\n", strcmp("qweq", "qwa"));
//	printf("%d\n", strcmp("qweq", "qweq"));
//	printf("%d\n", strcmp("qweq", "qwt"));
//
//	printf("%d\n", my_strcmp("qweq", "qwa"));
//	printf("%d\n", my_strcmp("qweq", "qweq"));
//	printf("%d\n", my_strcmp("qweq", NULL));
//	return 0;
//}

/* strncpy example */
#include <stdio.h>
#include <string.h>

#include<assert.h>
//char* my_strncpy(char* destiation, const char* source,size_t count)
//{
//	assert(destiation && source);
//	char* ret = destiation;
//	*(destiation + count) = '\0';
//	while (count--)
//	{
//		*destiation++ = *source++;
//		if (*source == '\0')
//		{
//			*destiation = '\0';
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "To be or not to be";
//	char str2[40];
//	char str3[40];
//
//	/* copy to sized buffer (overflow safe): */
//	strncpy(str2, str1, sizeof(str2));
//
//	/* partial copy (only 5 chars): */
//	strncpy(str3, str2, 1);
//	/* null character manually added */
//
//	puts(str1);
//	puts(str2);
//	puts(str3);
//
//	return 0;
//}

//char* my_strncpy(char* destination, const char* source, size_t num)
//{
//	assert(destination && source);
//	char* ret = destination;
//	destination[num] = '\0';
//	while (num--)
//	{
//		if (*source == '\0')
//		{
//			*destination = '\0';
//			break;
//		}
//		*destination++ = *source++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20];
//	char arr2[] = "abcdefgh";
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//char* my_strncat(char* destination, const char* source, size_t num)
//{
//	assert(destination && source);
//	char* ret = destination;
//	while (*destination);//找到\0
//	destination[num] = '\0';//放置\0
//	while (num--)
//	{
//		*destination++ = *source++;
//		if (*source == '\0')
//		{
//			*destination = '\0';
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 20);
//	puts(str1);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//    assert(str1 && str2);
//    while (num--)
//    {
//        if ((*str1 != *str2))
//        {
//            return *str1 - *str2;
//        }
//        str1++;
//        str2++;
//    }
//    return 0;
//}

//int main()
//{
//    char str[][5] = { "R2D2" , "R2PO" , "R2A6" };
//    int n;
//    puts("Looking for R2 astromech droids...");
//    for (n = 0; n < 3; n++)
//        if (strncmp(str[n], "R2xx", 2) == 0)
//        {
//            printf("found %s\n", str[n]);
//        }
//    return 0;
//}
//int main()
//{
//	printf("%d\n", my_strncmp("qwe", "qwe",3));
//	printf("%d\n", my_strncmp("qweq", "qwes",4));
//	printf("%d\n", my_strncmp("qweq", "qwt",2));
//
//	printf("%d\n", my_strncmp("qweq", "qwa",3));
//	printf("%d\n", my_strncmp("qweq", "qzeq",2));
//	printf("%d\n", my_strncmp("qweq", "ada",4));
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//const char* my_strstr(const char* str1, const char* str2)
//{
//    assert(str1 && str2);
//    const char* start = str1;
//    while (*start)
//    {
//        const char* e1 = start;
//        const char* e2 = str2;
//        while ((*e1 == *e2) && (*e1) && (*e2))
//        {
//            e1++;
//            e2++;
//        }
//        if (*e2 == '\0')
//        {
//            return (char*)start;
//        }
//        start++;
//    }
//    return NULL;
//}

//char* my_strstr(const char* str, const char* sub)
//{
//    assert(str);
//    assert(sub);
//    const char* str_p = str;//sub_p指针遍历源字符串进行比较
//    const char* start = str;//start指针保存匹配成功的位置
//    const char* sub_p = sub;//sub_p遍历子串进行比较
//    while (*start != '\0')
//    {
//        str_p = start;
//        sub_p = sub;//每次匹配不成功时都要从子串的起始处重新比较
//        while (*str_p != '\0' && *sub_p != '\0')
//        {
//            if (*str_p == *sub_p)
//            {
//                str_p++;
//                sub_p++;
//            }
//            else
//            {
//                break;
//            }
//        }
//        if (*sub_p == '\0')
//        {
//            return start;
//        }
//        start++;//当前位置开始匹配不成功时，从下一个位置开始尝试匹配
//    }
//    return NULL;
//}
//char* my_strstr(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	const char *cp = s1;
//
//	if (*s2 == '\0')
//		return (char*)s1;
//
//	while (*cp)
//	{
//		const char *p1 = cp;
//		const char *p2 = s2;
//		while ((*p1) && (*p2) &&  (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}

//int main()
//{
//    char str[] = "This is a simple string";
//    char* pch;
//    pch = my_strstr(str, "simple");
//    if (pch != NULL)
//        strncpy(pch, "sample", 6);
//    puts(pch);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>

//
//int main()
//{
//    char str[] = "EG:- This, a sample string.";
//    char* pch;
//    printf("Splitting string \"%s\" into tokens:\n", str);
//    pch = my_strtok(str, " ,.-");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = my_strtok(NULL, " ,.-");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.ent", "r");
//    if (pFile == NULL)
//        printf("Error opening file unexist.ent: %s\n", strerror(errno));
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.ent", "rb");
//    if (pFile == NULL)
//        perror("The following error occurred");
//    else
//        fclose(pFile);
//    return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i;
//	char str[] = "c3po...";
//	i = 0;
//	while (isalnum(str[i])) 
//		i++;
//	printf("The first %d characters are alphanumeric.\n", i);
//	return 0;
//}
//
//

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    int i = 0;
//    char str[] = "C++";
//    while (str[i])
//    {
//        if (isalpha(str[i])) 
//            printf("character %c is alphabetic\n", str[i]);
//        else 
//            printf("character %c is not alphabetic\n", str[i]);
//        i++;
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//
//void* my_memcpy(void* destination, const void* source, size_t num)
//{
//	assert(destination && source);
//	void* ret = destination;
//	while (num--)
//	{
//		*((char*)destination)++ = *((char*)source)++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//
//	/* using memcpy to copy string: */
//	my_memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//
//	/* using memcpy to copy structure: */
//	my_memcpy(&person_copy, &person, sizeof(person));
//
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}

//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//
//void* my_memset(void* src, int ch, size_t count)
//{
//	assert(src != NULL);
//	void* start = src;
//	while (count--)
//	{
//		*(char*)src = (char)ch;
//		src = (char*)src + 1;
//	}
//	return start;
//}
//
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	my_memset(str, '-', 6);
//	puts(str);
//	return 0;
//}
#include <stdio.h>
#include <string.h>


int my_memcmp(const void* p1, const void* p2, size_t count)//方法1
{
    assert(p1);
    assert(p2);
    char* dest = (char*)p1;
    char* src = (char*)p2;
    while (count-- && (*dest++ == *src++))
    {
        ;
    }
    if (count == 0)
        return 0;
    return *dest - *src;
}

int main()
{
	char buffer1[] = "DWgaOtP12df0";
	char buffer2[] = "DWGAOTP12DF0";

	int n;

	n = my_memcmp(buffer1, buffer2, sizeof(buffer1));

	if (n > 0) 
        printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if (n < 0) 
        printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else 
        printf("'%s' is the same as '%s'.\n", buffer1, buffer2);

	return 0;
}