#include<iostream>
using namespace std;
#include<string>

//�ṹ��Ƕ�׽ṹ��

struct student
{
	string name;
	int age;
	int score;

};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};



int main()
{
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << "��ʦ��ţ�" << t.id << "��ʦ���䣺" << t.age << "����ʦ������ѧ��������" << t.stu.name << "���䣺" << t.stu.age << "���Է�����" << t.stu.score << endl;

	system("pause");

	return 0;
}