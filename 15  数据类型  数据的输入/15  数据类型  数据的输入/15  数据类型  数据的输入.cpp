#include<iostream>
using namespace std;

; int main()
{

    //1.����
    int a = 0;
    cout << "������ͱ���a��ֵ��" << endl;
    cin >> a;
    cout << "a = " << a << endl;

    //2.�����ͣ�С����
    float f = 3.14f;
    cout << "��������ͱ���f��ֵ��" << endl;
    cin >> f;
    cout << "�����ͱ���f = " <<f<< endl;

    //3.�ַ���
    char ch = 'm';
    cout << "����ַ��ͱ���f��ֵ��" << endl;
    cin >> ch;
    cout << "�ַ��ͱ���m = " << ch << endl;

    //4.�ַ�����
    string str = "hello";
    cout << "����ַ��� str��ֵ:" << endl;
    cin >> str;
    cout << "�ַ���str = " << str << endl;


    //5.��������
    bool flag = false;
    cout << "����������� flag��ֵ�� " << endl;
    cin >> flag;   //��������ֻҪ���㶼����
    cout << "��������flag = " << flag << endl;

    cout << "hello world" << endl;

    system("pause");

    return 0;
}