#include<iostream>
using namespace std;

int main()
{
	//作用：利用指针访问数组中元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout <<"第一个元素为："<< arr[0] << endl;




	int* p = arr;   //arr就是数组的首地址

	cout << "利用指针访问第一个元素：" << *p << endl;

	p++;          //偏移一个整型的位置，就是四位    （因为它是一个整型指针）

	cout << "利用指针访问第二个元素：" << *p << endl;

	cout << "利用指针遍历数组：" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;

	}


	cout << "hello world" << endl;

	system("pause");

	return 0;

}
