#include<iostream>
using namespace std;

int main()
{
/*
	//空指针：指针变量指向内存中编号为零的空间
	//一开始指针不知道指哪里，就指0，用于初始化指针
	int * p = NULL;
	//注意，空指针不可访问
	//0~255是系统占用内存，不可访问
	* p = 100;
*/


/*
	//野指针
	int* p = (int*)0x1100;

	cout << *p << endl;
	//在程序中避免出现野指针
*/

	//空指针和野指针都无法访问
	system("pause");

	return 0;

}
