#include<iostream>
using namespace std;

; int main()
{
    //��ѭ������У�����Ŀǰ���ھ��е���䣬������һ��ѭ��
    // breakֱ���˳�ѭ��
    //continue���

    for (int i = 0; i <= 100; i++)
    {
        //���������ż�������
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    system("pause");

    return 0;
}