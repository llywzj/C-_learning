#include<iostream>
using namespace std;

int main()
{
	//语法  do{循环语句} while{循环条件}；
	//与while区别是它会先循环一次，再判断条件

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
		if (num > 9)
		{
			break;
		}
	}

	while (num);

	//do while 会先执行一次，再判断  其余和while 无区别

	system("pause");

	return 0;


}