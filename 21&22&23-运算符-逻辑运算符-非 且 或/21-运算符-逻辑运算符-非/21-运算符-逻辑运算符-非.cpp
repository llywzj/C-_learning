#include<iostream>
using namespace std;

; int main()
{
    // ����   ת����٣�ȡ��������
    int a1 = 10;   //C++�г������Ϊ��
    cout << !a1 << endl;
    cout << !!a1 << endl;  //����ȡ��

    // && ��  ��Ϊ���Ϊ��
    int a = 10;
    int b = 10;
    cout << (a&&b) << endl;

    a = 0;
    b = 10;
    cout << (a && b) << endl;

    //  || ��  ��Ϊ�ٲ�Ϊ��
    a = 0;
    b = 0;
    cout << (a || b) << endl;

    a = 0;
    b = 10;
    cout << (a || b) << endl;


    cout << "hello world" << endl;

    system("pause");

    return 0;
}