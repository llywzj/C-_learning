#include<iostream>
using namespace std;

//所谓值传递，就是函数调用时实参将数值传入给形参
//值传递时，如果形参发生改变，并不会影响实参

//定义函数，实现两个数字进行交换函数

//如果函数不需要返回值，声明的时候可以写void（无类型）

void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return;返回值不需要的时候，可以不写return
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

	//两次输出的a,b是一样的，所以就是形参发生改变，并不会影响实参

	cout << "hello world" << endl;

	system("pause");

	return 0;

}
