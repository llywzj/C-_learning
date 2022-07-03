#include<iostream>
using namespace std;
#include<string>

//结构体指针

struct st
{
	string name;
	int age;
	int score;

};


int main()
{
	//创建学生结构体变量
	st a = { "as",18,100 };
	//通过指针指向结构体变量
	struct st* p = &a;     //struct可省略
	//通过指针访问结构体变量中的数据
	cout << "name  " << p->name << "  age  " << p->age << "  score   " << p->score << endl;


}