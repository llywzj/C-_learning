#include<iostream>
using namespace std;
#include<string>

//�﷨:struct �ṹ����  ������[Ԫ�ظ���] = { {} , {} , ... {} }
//����ṹ��
struct st
{
	string name;

	int age;

	int score;

};


int main()
{
	//�����ṹ������  ͬʱ���丳ֵ
	struct st stu[3] =
	{
		{"cs",1,2},
		{"hv",3,4},
		{"sd",5,6}
	};
	//�޸�����Ϣ
	stu[1].name = "jh";
	stu[2].age = 8;
	//��������
	for (int i = 0; i < 3; i++)
	{
		cout << "name" << stu[i].name
			<< "age" << stu[i].age
			<< "score" << stu[i].score << endl;

	}

	return 0;
}