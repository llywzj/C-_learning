#include<iostream>
using namespace std;

; int main()
{

    //1.������ float
    //2.˫���� double

    float f1 = 3.14f;
    //ϵͳ��ȡС��ʱ�Զ�Ĭ��˫���ȣ���f�Ͳ�����
    cout << "f1 = "<< f1 << endl;

    double d1 = 3.14;
    cout << "d1 = " << d1 << endl;

    //��С����Ч���ֳ�����λ,ϵͳ���������λ��Ч���֣��޸��������Ļ����������ᣡ����

    //ͳ��float��doubleռ�õ��ڴ�ռ�
    cout << "floatռ�õ��ڴ�ռ䣺 " << sizeof(float) << endl;
    cout << "doubleռ�õ��ڴ�ռ䣺 " << sizeof(double) << endl;

    //��ѧ������
    float f2 = 3e2; //3*10^2
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2; //3*0.1^2
    cout << "f3 = " << f3 << endl;

    system("pause");

    return 0;
}