#include "选择法排序.h"

/*
选择排序的基本思想是：每一趟在n-i+1（i=1，2，…n-1）
个记录中选取关键字最小的记录作为有序序列中第i个记录。
基于此思想的算法主要有简单选择排序、树型选择排序和堆排序。
*/

//简单选择排序
/*
第1趟，在待排序记录r[1]~r[n]中选出最小的记录，将它与r[1]交换；
第2趟，在待排序记录r[2]~r[n]中选出最小的记录，将它与r[2]交换；
以此类推，第i趟在待排序记录r[i]~r[n]中选出最小的记录，将它与r[i]交换，
使有序序列不断增长直到全部排序完毕。所以只会循环n-1次。
*/

/*
template<class T>
void SelectSort(T * array, const int len)
{
	T temp = 0;
	for (int i = 0; i < len - 1; i++)//循环n-1次。最后剩下的一个元素肯定在末尾，不用排序了。
	{
		int index = i;//每一趟，假设第i个元素最小;
		for (int j = i + 1; j < len; j++)//从第i个元素的后面一个元素开始找剩余的序列中最小的值的下标。
		{//查找最小记录的位置
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)//若无序区第一个元素不是无序区中最小元素，则进行交换
		{
			temp = array[index];
			array[index] = array[i];
			array[i] = temp;
		}
	}
}
*/

template<class T>
void SelectSort(T *array, const int len)
{
	int i, j, t, k;
	//T min_element;//记录待排序列中最小的元素
	for (int i = 0; i < len - 1; i++)
	{
		k = i;//假设待排序列中的第一个当做最小的，然后在待排序列中找到最小的
		for (int j = i + 1; j < len; j++) //从第i个元素的后面一个元素开始找剩余的序列中最小的值的下标。
		{
			if (array[j] < array[index_min])
			{
				k = j;//找到新的最小的元素了
			}
		}
		if (k != i)//若无序区第一个元素不是无序区中最小元素，则进行交换
		{
			t = array[k];
			array[k] = array[i];
			array[i] = t;
		}
	}
}