//1������10��������С����������������һ������ʹ����������������Ȼ����
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 5;//��ʾ����Ԫ�صĸ���
	double power[] = { 42322,45571,40907,41234,40767 };
	double deletePower;//�û�Ҫɾ����Ԫ��
	int deleteIndex = -1;//�û�Ҫɾ����Ԫ�ص��±�,�ȸ�һ�������ܴ��ڵĳ�ֵ
	int i, j;//ѭ������
	double poweradd;//�������Ԫ��
	double powerPX = 0; //������������ʱ����
	int o;

	for (i = 0; i < count; i++)
	{
		printf("%.lf  ", power[i]);
	}
	printf("\n������Ҫɾ����Ԫ�أ�");
	scanf("%lf", &deletePower);
	for (i = 0; i < count; i++)
	{
		if (deletePower == power[i])
		{
			//��¼��ǰ���±�
			deleteIndex = i;
			break;//�ҵ���Ҫɾ����ս��ֵ��ֱ������ѭ��������Ч��
		}
	}
	//�����жϣ��Ƿ��ҵ�����ִ�к�������
	{
		if (deleteIndex == -1)
		{
			printf("û���ҵ���Ҫɾ����ս��ֵ��ɾ��ʧ�ܣ�\n");
		}
		else
		{
			count--;
			for (i = deleteIndex; i < count; i++)
			{
				power[i] = power[i + 1];//�����Ԫ����ǰ����һ�����и���
			}
			printf("ɾ����Ľ��Ϊ��\n");
			for (i = 0; i < count; i++)
			{
				printf("%.lf  ", power[i]);
			}
		}
		//�������Ԫ��
		printf("\n\n������Ҫ��ӵ����֣�");
		scanf("%lf", &poweradd);

		power[count] = poweradd;
		count++;
		printf("��Ӻ�Ľ��Ϊ��");
		for (i = 0; i < count; i++)
		{
			printf("%.lf  ", power[i]);
		}

		//�Ӵ�СΪ��������
		for (i = 0; i < count - 1; i++)
		{
			for (j = 0; j < count - i - 1; j++ )
			{
				if (power[j] < power[j + 1])
				{
					powerPX = power[j];
					power[j] = power[j + 1];
					power[j + 1] = powerPX;
				}
			}
		}

		printf("\n\n�����Ľ��Ϊ��");
		for (i = 0; i < count; i++)
		{
			printf("%.lf  ", power[i]);
		}
		return 0;
	}
}