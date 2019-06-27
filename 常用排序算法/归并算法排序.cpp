#include "�鲢�㷨����.h"

/*
�鲢���򷨣�Merge Sort�����¼��MS���Ƿ��η�˼�����õ�һ���䷶������Ҫ�㷨�������Է�Ϊ���²��裺
Step 1����n��Ԫ�طֳ�������n/2Ԫ�ص�������
Step 2����MS�����������еݹ����������Խ�����ԭ���зֽ��n�������У�
Step 3���ϲ�����������õ�����
*/
template<class T>
void Merge(T src[], T des[], int low, int mid, int high);
template<class T>
void MSort(T src[], T des[], int low, int high, int max);

template<class T>
void MergeSort(T *array, int len)// O(n*logn)
{
	MSort(array, array, 0, len - 1, len);
}

//ÿ�η�Ϊ��· ��ֻʣ��һ��Ԫ��ʱ���Ͳ���Ҫ�ڻ���
template<class T>
void MSort(T src[], T des[], int low, int high, int max)
{
	if (low == high) //ֻ��һ��Ԫ�أ�����Ҫ�鲢���������des[low]
	{
		des[low] = src[low];
	}
	else //������Ԫ�أ�������·����
	{
		int mid = (low + high) / 2;
		T* space = new T[max];

		//�ݹ������·����·�Ļ��� 
		//��ʣ��һ��Ԫ�ص�ʱ���ݹ黮�ֽ�����Ȼ��ʼmerge�鲢����
		if (space != nullptr)
		{
			MSort(src, space, low, mid, max);
			MSort(src, space, mid + 1, high, max);
			Merge(space, des, low, mid, high); //���ù鲢�������й鲢
		}
		delete[]space;
	}
}

template<class T>
void Merge(T src[], T des[], int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;
	int k = low;

	while ((i <= mid) && (j <= high)) //��С�ķŵ�Ŀ�ĵ���
	{
		if (src[i] < src[j])
		{
			des[k++] = src[i++];
		}
		else
		{
			des[k++] = src[j++];
		}
	}

	while (i <= mid)  //����ʣ����β��Ԫ��
	{
		des[k++] = src[i++];
	}

	while (j <= high) //����ʣ����β��Ԫ��
	{
		des[k++] = src[j++];
	}
}