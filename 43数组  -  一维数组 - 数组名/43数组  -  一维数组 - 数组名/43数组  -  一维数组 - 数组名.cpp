#include<iostream>
using namespace std;

; int main()
{
    //һά�������Ƶ���;
    
    // 1.����ͳ�������������ڴ��еĳ���(��С)
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
    cout << "ÿ������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
    cout << "�����е�Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2.���Ի�ȡ�������ڴ��е��׵�ַ
    cout << "�����׵�ַΪ" << (int)arr << endl;
    cout<<"�����е�һ��Ԫ�ص�ַ"<< (int)&arr[0] << endl;
    cout << "�����е�һ��Ԫ�ص�ַ" << (int)&arr[1] << endl;

    //�������ǳ����������Ը�ֵ

    system("pause");

    return 0;
}