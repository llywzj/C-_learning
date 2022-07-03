#include<iostream>
using namespace std;

int main()
{
	//break跳出选择或循环
	//出现在switch循环中，终止case并跳出switch
	cout << "请选择副本难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;

	int select = 0;   //创建用户选择结果的变量

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}
	//出现在循环语句中，跳出循环

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;

	}
	//出现在嵌套语句中，跳出最近的内层循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";

		}
		cout << endl;
	}


	system("pause");

	return 0;

}