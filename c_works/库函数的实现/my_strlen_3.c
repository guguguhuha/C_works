#define _CRT_SECURE_NO_WARNINGS 1
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
