#include<iostream>
using namespace std;

//函数样式
// 1.无参无返
void test01()
{
	cout << "这是第一个测试案例" << endl;
}

// 2.有参无返
void test02(int a)
{
	cout << "这是第二个测试案例  a= " <<a<< endl;
}
// 3.无参有返
int test03()
{
	cout << "这是第三个测试案例" << endl;
	return 1000;
}
// 4.有参有反
int test04(int a)
{
	cout << "这是第四个测试案例   a = " << a << endl;
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
