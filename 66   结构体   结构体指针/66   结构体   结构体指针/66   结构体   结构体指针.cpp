#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��

struct st
{
	string name;
	int age;
	int score;

};


int main()
{
	//����ѧ���ṹ�����
	st a = { "as",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	struct st* p = &a;     //struct��ʡ��
	//ͨ��ָ����ʽṹ������е�����
	cout << "name  " << p->name << "  age  " << p->age << "  score   " << p->score << endl;


}