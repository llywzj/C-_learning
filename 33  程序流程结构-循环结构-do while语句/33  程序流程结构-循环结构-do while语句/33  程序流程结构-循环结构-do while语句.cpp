#include<iostream>
using namespace std;

int main()
{
	//�﷨  do{ѭ�����} while{ѭ������}��
	//��while������������ѭ��һ�Σ����ж�����

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

	//do while ����ִ��һ�Σ����ж�  �����while ������

	system("pause");

	return 0;


}