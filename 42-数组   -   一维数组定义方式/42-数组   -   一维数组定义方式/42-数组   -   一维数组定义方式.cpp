#include<iostream>
using namespace std;

; int main()
{
    //�������һ�����ϣ����������ͬ���͵���������
    //�ص�1.�����е�ÿ������Ԫ�ض�����ͬ����������
    //���������������ڴ�λ����ɵ�

    //һά��������ֶ��巽ʽ
    // 1.�������ͣ���������[���鳤��]
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    //��������Ԫ��
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    // 2.�������ͣ���������[���鳤��]={ֵһ��ֵ2...}
    int arr2[5] = { 10,20,30,40,50 };
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    //�����ʼ�����ֵû��ȫ�����룬�������λ��
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    // 3.�������ͣ�������[  ]={ֵ1��ֵ2...}
    int arr3[] = { 90,80,70,60,50,40,30,20,10 };
    for (int j = 0; j < 9; j++)
    {
        cout << arr3[j] << endl;
    }
    //(����Ӣ�ģ�array  *-* )


    system("pause");

    return 0;
}