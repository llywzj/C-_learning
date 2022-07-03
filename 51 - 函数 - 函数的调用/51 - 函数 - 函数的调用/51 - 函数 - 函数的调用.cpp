#include<iostream>
using namespace std;

//定义一个加法函数
//定义时num1与num2没有实际值，形式参数，简称：形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	//语法：函数名（参数）

	//main函数中调用add函数
	//称a和b为 实际参数，简称实参
	//当调用函数的时候，实参的值会传递给形参
	int a = 10;
	int b = 20;

	int c = add(a, b);


	cout << "c = " << c << endl;

	system("pause");

	return 0;

}
