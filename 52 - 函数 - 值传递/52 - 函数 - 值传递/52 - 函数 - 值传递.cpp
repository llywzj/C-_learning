#include<iostream>
using namespace std;

//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
//ֵ����ʱ������βη����ı䣬������Ӱ��ʵ��

//���庯����ʵ���������ֽ��н�������

//�����������Ҫ����ֵ��������ʱ�����дvoid�������ͣ�

void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return;����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;

	swap(a, b);

	cout << "a =" << a << endl;
	cout << "b =" << b << endl;

	//���������a,b��һ���ģ����Ծ����βη����ı䣬������Ӱ��ʵ��

	cout << "hello world" << endl;

	system("pause");

	return 0;

}
