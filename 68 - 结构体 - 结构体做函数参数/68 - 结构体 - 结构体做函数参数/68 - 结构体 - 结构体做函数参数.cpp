#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//值传递
void printstudent(struct student s)
{
	cout << s.name << "  " << s.age << "   " << s.score << endl;
}

//地址传递
void printstudent1(student* p)
{
	cout << p->age << "  " << p->name << "   " << p->score << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入一个参数中,打印学生身上的所有信息
	student s;
	s.name = "zhang_san";
	s.age = 18;
	s.score = 100;

	printstudent(s);
	printstudent1(&s);

	system("pause");

	return 0;
}