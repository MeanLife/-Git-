#include "归并算法排序.h"

/*
归并排序法（Merge Sort，以下简称MS）是分治法思想运用的一个典范。其主要算法操作可以分为以下步骤：
Step 1：将n个元素分成两个含n/2元素的子序列
Step 2：用MS将两个子序列递归排序（最后可以将整个原序列分解成n个子序列）
Step 3：合并两个已排序好的序列
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

//每次分为两路 当只剩下一个元素时，就不需要在划分
template<class T>
void MSort(T src[], T des[], int low, int high, int max)
{
	if (low == high) //只有一个元素，不需要归并，结果赋给des[low]
	{
		des[low] = src[low];
	}
	else //如果多个元素，进行两路划分
	{
		int mid = (low + high) / 2;
		T* space = new T[max];

		//递归进行两路，两路的划分 
		//当剩下一个元素的时，递归划分结束，然后开始merge归并操作
		if (space != nullptr)
		{
			MSort(src, space, low, mid, max);
			MSort(src, space, mid + 1, high, max);
			Merge(space, des, low, mid, high); //调用归并函数进行归并
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

	while ((i <= mid) && (j <= high)) //将小的放到目的地中
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

	while (i <= mid)  //若还剩几个尾部元素
	{
		des[k++] = src[i++];
	}

	while (j <= high) //若还剩几个尾部元素
	{
		des[k++] = src[j++];
	}
}