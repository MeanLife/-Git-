#include <iostream>
#include <string>
#include <cmath>
#include "ѡ������.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���
#include "ð�ݷ�����.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���
#include "���뷨����.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���
#include "ϣ�������㷨.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���
#include "���������㷨.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���
#include "�鲢�㷨����.cpp"//��Ϊʹ�õ���ģ�庯�������Ե���cpp�ļ���

using namespace std;

template<class T>
void prinft_array(T &array)
{
	for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		cout << "array[" << i << "]:" << array[i] << endl;
	}
}

//ѡ�񷨲��԰���
int main01(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c'};
	int len = sizeof(array1) / sizeof(array1[0]);
	cout << "����֮ǰ" << endl;
	prinft_array(array1);
	//����
	SelectSort(array1,len);//���ⲿ�ļ�#include "ѡ������.h"��
	cout << "ѡ������֮��" << endl;
	prinft_array(array1);
	
	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}

//ð�ݷ����԰���
int main02(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c' };
	int len = sizeof(array1) / sizeof(array1[0]);
	cout << "����֮ǰ" << endl;
	prinft_array(array1);
	//����
	BubbleSort(array1, len);//���ⲿ�ļ�#include "ѡ������.h"��
	cout << "ð�ݷ�����֮��" << endl;
	prinft_array(array1);

	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}

//���뷨���԰���
int main03(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c' };
	int len = sizeof(array2) / sizeof(array2[0]);
	cout << "����֮ǰ" << endl;
	prinft_array(array2);
	//����
	InsertSort(array2, len);//���ⲿ�ļ�#include "ѡ������.h"��
	cout << "���뷨����֮��" << endl;
	prinft_array(array2);

	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}

//ϣ���㷨���԰���
int main04(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c'};
	int len = sizeof(array2) / sizeof(array2[0]);
	cout << "����֮ǰ" << endl;
	prinft_array(array2);
	//����
	ShellSort(array2, len);//���ⲿ�ļ�#include "ѡ������.h"��
	cout << "ϣ���㷨����֮��" << endl;
	prinft_array(array2);

	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}

//���������㷨���԰���
int main(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c', 'f', 'e'};
	int len = sizeof(array1) / sizeof(array1[0]);
	int low = 0;//ָ��ͷ
	int high = len - 1;//ָ��ĩβ
	cout << "����֮ǰ" << endl;
	prinft_array(array1);
	//����
	Quicksort(array1, low, high);
	cout << "���ٷ�����֮��" << endl;
	prinft_array(array1);

	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}

//�鲢�㷨���԰���
int main06(void)
{
	int array1[] = { 10, 50, 60, 20, 12, 52, 62, 22, 14, 54, 64, 24 };
	char array2[] = { 'a', 'd', 'b', 'c', 'f', 'e' };
	int len = sizeof(array1) / sizeof(array1[0]);
	cout << "����֮ǰ" << endl;
	prinft_array(array1);
	//����
	MergeSort(array1, len);
	cout << "�鲢������֮��" << endl;
	prinft_array(array1);

	cout << "JZQ!" << endl;
	system("pause");
	return 0;
	//�Զ��Ű棺ctrl+K,ctrl+F
}