#include<iostream>         //ȫ������� ^ ����*86ָ32λ��*64Ϊ64λ   �����Ͽ�  ^_^��
using namespace std;

int main()
{
	//ָ��ռ�õ��ڴ�
	int a = 10;
	int* p = &a;

	//�ȼ���   int*p = &a

	cout << "sizeof(int*)" << sizeof(int*) << endl;
	cout << "sizeof(int*)" << sizeof(*p) << endl;
	cout << "sizeof(int*)" << sizeof(float *) << endl;
	cout << "sizeof(int*)" << sizeof(double *) << endl;
	cout << "sizeof(int*)" << sizeof(char *) << endl;

	cout << "hello world" << endl;

	system("pause");

	return 0;

}
