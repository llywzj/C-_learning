#include<iostream>
using namespace std;

; int main()
{
    //1.�ַ��ͱ���������ʽ
    char ch = 'avgb';
    cout << ch << endl;

    //2.�ַ��ͱ�����ռ�õ��ڴ��С
    cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

    //3.�ַ��ͱ�����������
    //char ch2 = "b";(�õ�����)
    //char ch2 = 'avsdhdfyu'   ��������һ����ĸ������������һ�£�����������ĸ���
    
    //4.�ַ��ͱ�����Ӧ��ASCII����
    cout << (int)ch << endl;

    //a��Ӧ����97
    //A��Ӧ����65
    //���μ�һ

    system("pause");

    return 0;
}