#include<iostream>
using namespace std;

int main()
{
	//嵌套循环  在循环中再套一层循环
	//利用嵌套循环打印星图

	//外层循环一次，内层循环一周
	for (int i = 0; i < 10; i++)
	{
		//一般约定俗成内层变量用j
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");

	return 0;
}