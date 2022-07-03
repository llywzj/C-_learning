#include<iostream>         //全屏情况下 ^ 这里*86指32位；*64为64位   （向上看  ^_^）
using namespace std;

int main()
{
	//指针占用的内存
	int a = 10;
	int* p = &a;

	//等价于   int*p = &a

	cout << "sizeof(int*)" << sizeof(int*) << endl;
	cout << "sizeof(int*)" << sizeof(*p) << endl;
	cout << "sizeof(int*)" << sizeof(float *) << endl;
	cout << "sizeof(int*)" << sizeof(double *) << endl;
	cout << "sizeof(int*)" << sizeof(char *) << endl;

	cout << "hello world" << endl;

	system("pause");

	return 0;

}
