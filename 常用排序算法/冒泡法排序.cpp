#include "ð�ݷ�����.h"

/*
template<class T>
void BubbleSort(T * array, const int len)
{
	T temp = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)//�ӵ�i��Ԫ�صĺ���һ��Ԫ�ؿ�ʼ��ʣ������бȽϡ�
		{
			if (array[i] > array[j])//��i��Ԫ�غͺ������е�Ԫ�ؽ��бȽϣ�����
			{
				//temp = array[j];
				//array[j] = array[i];
				//array[i] = temp;
				//��������Ԫ��Ҳ���������
				array[j] = array[i] ^ array[j];
				array[i] = array[i] ^ array[j];
				array[j] = array[i] ^ array[j];
			}
		}
	}
}
*/
template<class T>
void BubbleSort(T *array, const int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (array[i] > array[j])
			{
				array[i] = array[i] ^ array[j];
				array[j] = array[i] ^ array[j];
				array[i] = array[i] ^ array[j];
			}
		}
	}
}