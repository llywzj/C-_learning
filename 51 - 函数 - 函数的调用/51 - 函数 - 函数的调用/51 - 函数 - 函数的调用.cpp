#include<iostream>
using namespace std;

//����һ���ӷ�����
//����ʱnum1��num2û��ʵ��ֵ����ʽ��������ƣ��β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	//�﷨����������������

	//main�����е���add����
	//��a��bΪ ʵ�ʲ��������ʵ��
	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int a = 10;
	int b = 20;

	int c = add(a, b);


	cout << "c = " << c << endl;

	system("pause");

	return 0;

}
