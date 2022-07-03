#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "请输入预定数字：" << endl;
	cin >> num;

	int flag = 0;
	cout << "请下一个人输入猜测数字" << endl;
	cin >> flag;
	while (num > flag)
	{
		cout << "猜测过小" << endl;
		cout << "请重新输入猜测数字" << endl;
		cin >> flag;
	}
	
	while (num < flag)
	{
		cout << "猜测过大" << endl;
		cout << "请重新输入猜测数字" << endl;
		cin >> flag;
	}

	cout << "猜测正确，恭喜！" << endl;

	system("pause");

	return 0;
}