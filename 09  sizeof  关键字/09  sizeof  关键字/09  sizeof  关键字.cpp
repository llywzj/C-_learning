#include<iostream>
using namespace std;

; int main()
{
    //���Σ�short (2�ֽ�)    int (4)    long (4)    long long (8)
    //��������sizeof���������ռ���ڴ��С
    //�﷨��sizeof(�������� /����)

    short num1 = 10;
    cout << "shortռ�õ��ڴ�ռ�Ϊ��" <<sizeof(num1)<< endl;

    int num2 = 10;
    cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

    system("pause");

    return 0;
}