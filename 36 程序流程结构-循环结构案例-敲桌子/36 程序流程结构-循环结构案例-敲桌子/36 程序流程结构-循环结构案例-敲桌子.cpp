#include<iostream>
using namespace std;

int main()
{
	for (int num = 1;num <=100;num++)
	{
		if (num % 10 == 7 || num % 10 == 7 || num / 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");

	return 0;
}