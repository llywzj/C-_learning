#include<iostream>
using namespace std;
#include<string>

//1.����ѧ���������ͣ�ѧ�����������������䣬������

//��һЩ���е��������Ͱ���Ҫ����һ�𣬹���һ���µ�����



struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;//˳�㴴��һ���ṹ�����



int main()
{
	//�ṹ�����
	//�ṹ�������û��Զ�����������ͣ������û����治ͬ����������
	//�﷨��struct �ṹ����{�ṹ���Ա�б�}��
	//struct  �ṹ���� ������
	//struct  �ṹ����  ������={��Ա1ֵ����Ա2ֵ ...}
	//����ṹ��ʱ˳�㴴������


	//2.ͨ��ѧ�����ʹ�������ѧ��
	// 
	//struct�ؼ����ڴ���ʱ��ʡ��
	// 
	//2.1 struct Student s1
	struct Student s1;
	// ��s1���Ը�ֵ��ͨ��.���ʽṹ���б���������
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << "  ���䣺" << s1.age << " ���� " << s1.score << endl;   //��ʹ��C++���ַ���ʱ��Ӧ��ǰ�����һ��ʹ���ַ�����ͷ�ļ�   ��p3


	//2.2struct  Student s2 = {...}
	struct Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "  ���䣺" << s2.age << " ���� " << s2.score << endl;

	//2.3�ڶ���ṹ��ʱ˳�㴴���ṹ�����     ��p19   ��һ�㲻�ã��¶Է��Ҳ���
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "  ���䣺" << s3.age << " ���� " << s3.score << endl;


	cout << "hello world" << endl;

	system("pause");

	return 0;

}
