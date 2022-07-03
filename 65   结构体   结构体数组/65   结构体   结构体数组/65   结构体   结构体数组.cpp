#include<iostream>
using namespace std;
#include<string>

//语法:struct 结构体名  数组名[元素个数] = { {} , {} , ... {} }
//定义结构体
struct st
{
	string name;

	int age;

	int score;

};


int main()
{
	//创建结构体数组  同时给其赋值
	struct st stu[3] =
	{
		{"cs",1,2},
		{"hv",3,4},
		{"sd",5,6}
	};
	//修改其信息
	stu[1].name = "jh";
	stu[2].age = 8;
	//遍历数组
	for (int i = 0; i < 3; i++)
	{
		cout << "name" << stu[i].name
			<< "age" << stu[i].age
			<< "score" << stu[i].score << endl;

	}

	return 0;
}