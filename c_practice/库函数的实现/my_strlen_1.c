#define _CRT_SECURE_NO_WARNINGS 1
int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}