#include<iostream>
using namespace std;
#include<string>

//结构体嵌套结构体

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
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老外";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "老师编号：" << t.id << "老师年龄：" << t.age << "“老师辅导的学生姓名：" << t.stu.name << "年龄：" << t.stu.age << "考试分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}