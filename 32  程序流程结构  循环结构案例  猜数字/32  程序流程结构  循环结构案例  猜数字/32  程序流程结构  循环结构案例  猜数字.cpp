#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "������Ԥ�����֣�" << endl;
	cin >> num;

	int flag = 0;
	cout << "����һ��������²�����" << endl;
	cin >> flag;
	while (num > flag)
	{
		cout << "�²��С" << endl;
		cout << "����������²�����" << endl;
		cin >> flag;
	}
	
	while (num < flag)
	{
		cout << "�²����" << endl;
		cout << "����������²�����" << endl;
		cin >> flag;
	}

	cout << "�²���ȷ����ϲ��" << endl;

	system("pause");

	return 0;
}