#include<iostream>
using namespace std;

; int main()
{
    //һ�������м�¼����ֻ������أ���ӡ���ص�������
    int arr[5] = { 300,350,200,400,250 };
    int max = 0;

    for (int num = 1; num < 6; num++)
    {

        if (max < arr[num])
        {
            max = arr[num];
        }
        else
        {
            continue;
        }
    }
    cout << "���ص�С������Ϊ��" << max << endl;


    system("pause");

    return 0;
}