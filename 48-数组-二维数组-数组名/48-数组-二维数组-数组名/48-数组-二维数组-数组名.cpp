#include<iostream>
using namespace std;

int main()
{
	//��ά��������������

	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//1.�鿴ռ�õ��ڴ�ռ��С
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ" << sizeof(arr[0][0]) << endl;
	cout << "��ά��������Ϊ" << sizeof(arr)/ sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ" << sizeof(arr[0])/ sizeof(arr[0][0]) << endl;

	// 2.���Բ鿴��ά������׵�ַ	
	cout << "��ά�����׵�ַΪ" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ" << (int)arr[1] << endl;
	cout << "��ά�����һ��Ԫ���׵�ַΪ" << (int)&arr[0][0] << endl;
	system("pause");

	return 0;

}
