#include<iostream>
using namespace std;

//������ʽ
// 1.�޲��޷�
void test01()
{
	cout << "���ǵ�һ�����԰���" << endl;
}

// 2.�в��޷�
void test02(int a)
{
	cout << "���ǵڶ������԰���  a= " <<a<< endl;
}
// 3.�޲��з�
int test03()
{
	cout << "���ǵ��������԰���" << endl;
	return 1000;
}
// 4.�в��з�
int test04(int a)
{
	cout << "���ǵ��ĸ����԰���   a = " << a << endl;
	return a;
}

int main()
{
	test01();
	cout << "hello world" << endl;

	test02(100);
	

	
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	int num2 = test04(10000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;

}
