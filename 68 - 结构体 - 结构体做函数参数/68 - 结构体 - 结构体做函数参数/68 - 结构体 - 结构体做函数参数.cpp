#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printstudent(struct student s)
{
	cout << s.name << "  " << s.age << "   " << s.score << endl;
}

//��ַ����
void printstudent1(student* p)
{
	cout << p->age << "  " << p->name << "   " << p->score << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ������һ��������,��ӡѧ�����ϵ�������Ϣ
	student s;
	s.name = "zhang_san";
	s.age = 18;
	s.score = 100;

	printstudent(s);
	printstudent1(&s);

	system("pause");

	return 0;
}