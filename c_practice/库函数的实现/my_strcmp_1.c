#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
int my_strcmp(const char* src, const char* dest)
{
	int ret = 0;
	assert(src != NULL);
	assert(dest != NULL);
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dest) && *dest)//dest��Ϊ�գ������������Ϊ0���ͼ���ѭ��
	{
		++src, ++dest;
		if (ret < 0)
			ret = -1;
		else if (ret > 0)
			ret = 1;
	}
	return(ret);
}