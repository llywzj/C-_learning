#include<iostream>
using namespace std;

; int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "��һֻ��������ǣ�" << endl;
    cin >> a;
    cout << "�ڶ�ֻ��������ǣ�" << endl;
    cin >> b;
    cout << "����ֻ��������ǣ�" << endl;
    cin >> c;

    if (a > b)
    {
     if (c > a)
    {
        cout << "����ֻ������" << endl;
    }
     else 
     {
         cout << "��һֻ������" << endl;
     }

    }
    else
    {
        if (c > b)
        {
            cout << "����ֻ������" << endl;
        }
        else
        {
            cout << "�ڶ�ֻ������" << endl;
        }
    }
    //�˴����Ϊ��������д�������ڳ�Ϯ  /���ģ�


    system("pause");

    return 0;
}