#include<iostream>
using namespace std;
#include<string>

//1.创建学生数据类型：学生包括（姓名，年龄，分数）

//把一些已有的数据类型按需要放在一起，构成一个新的类型



struct Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;//顺便创建一个结构体变量



int main()
{
	//结构体概念
	//结构体属于用户自定义的数据类型，允许用户储存不同的数据类型
	//语法：struct 结构体名{结构体成员列表}；
	//struct  结构体名 变量名
	//struct  结构体名  变量名={成员1值，成员2值 ...}
	//定义结构体时顺便创建变量


	//2.通过学生类型创建具体学生
	// 
	//struct关键字在创建时可省略
	// 
	//2.1 struct Student s1
	struct Student s1;
	// 给s1属性赋值，通过.访问结构体中变量的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << "  年龄：" << s1.age << " 分数 " << s1.score << endl;   //当使用C++的字符串时，应在前面加上一个使用字符串的头文件   见p3


	//2.2struct  Student s2 = {...}
	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "  年龄：" << s2.age << " 分数 " << s2.score << endl;

	//2.3在定义结构体时顺便创建结构体变量     见p19   但一般不用，怕对方找不到
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "  年龄：" << s3.age << " 分数 " << s3.score << endl;


	cout << "hello world" << endl;

	system("pause");

	return 0;

}
