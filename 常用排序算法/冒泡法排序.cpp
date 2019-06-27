#include "冒泡法排序.h"

/*
template<class T>
void BubbleSort(T * array, const int len)
{
	T temp = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)//从第i个元素的后面一个元素开始与剩余的序列比较。
		{
			if (array[i] > array[j])//第i个元素和后面所有的元素进行比较，交换
			{
				//temp = array[j];
				//array[j] = array[i];
				//array[i] = temp;
				//交换两个元素也可以用异或
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