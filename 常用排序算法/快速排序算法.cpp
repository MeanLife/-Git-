#include "���������㷨.h"

/*
���Ļ���˼���ǣ�ͨ��һ������Ҫ��������ݷָ�ɶ����������֣�
����һ���ֵ��������ݶ�������һ���ֵ��������ݶ�ҪС��
Ȼ���ٰ��˷����������������ݷֱ���п�����������������̿��Եݹ���У�
�Դ˴ﵽ�������ݱ���������С�

//https://baike.baidu.com/item/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95/369842?fromtitle=%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F%E6%B3%95&fromid=612251&fr=aladdin
*/

template<class T>
void Quicksort(T *array, int low, int high)
{
	if (low >= high)
	{
		return;//�ݹ������־
	}
	int first = low;
	int last = high;
	int key = array[first];//���ֱ�ĵ�һ����¼��Ϊ����(����С�ķֶκʹ�ķֶ�)
	while (first < last)
	{
		while (first < last && array[last] >= key)
		{
			--last;
		}
		array[first] = array[last];/*����keyС���Ƶ��Ͷ�*/
		while (first<last && array[first] <= key)
		{
			++first;
		}
		array[last] = array[first];/*����key����Ƶ��߶�*/
	}
	array[first] = key;//����ȷ�������ֵ�������first = last��(һ�����)
	Quicksort(array, low, first - 1);//����ߵ����ݶ�����
	Quicksort(array, first + 1, high);//���ұߵ����ݶ�����
}