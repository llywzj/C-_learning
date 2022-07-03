#include<iostream>
using namespace std;

int main()
{
	//语法：while （循环条件）（循环语句）
	//只要循环结果为真，就执行循环语句

	//在屏幕上打印0-9 十个数字
	int num = 0;

	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	//注意避免死循环的出现

	system("pause");

	return 0;

}