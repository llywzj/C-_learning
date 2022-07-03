#include<iostream>
using namespace std;

//比较函数，实现两个整型数字进行比较，返回较大的值

//定义
int max(int a, int b)
{
	return a > b ? a : b;   //三目运算符
}

int main()
{
	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;


	//作用：告诉编译器函数名称以及如何使用函数，函数的实际主体可以单独定义
	//声明可以有多次，定义只有一个

//  //也可以提前告诉编译器函数存在，可以利用函数的声明
//	int max(int a, int b);    //这个使用的情况是想把函数写在使用函数位置的后面，把这句写在函数使用的前面，提示其不要报错

	system("pause");

	return 0;

}
