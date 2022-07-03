#include<iostream>
using namespace std;

int main()
{
	//const修饰指针（const修饰的是紧跟其后的东西）
	// 1.const修饰指针 - 常量指针
	
	int a = 10;
	int b = 10;

	const int* p = &a;
	// 特点：指针的指向可以修改，但指针指向的值不可改
	//*p = 20    【报错】
	p = &b;

	// 2.const修饰常量 - 指针常量
	int* const p2 = &a;
	// 特点：指针的指向不可以改，指针指向的值可以改
	// p2 = &b  【报错】
	*p2 = 100;

	// 3.const即修饰指针，又修饰常量
	const int * const p3 = &a;
	//特点：指针的指向和指针指向的值都不可以改
	//*p3 = 100;【报错】
	//p3 = &b;【报错】
	

	system("pause");

	return 0;

}
