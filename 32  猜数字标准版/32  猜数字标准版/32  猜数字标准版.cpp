#include<iostream>
using namespace std;
#include <ctime>  //timeϵͳͷ�ļ���ʹ���������ʱ�䲻ͬ���仯

; int main()
{
    srand((unsigned int)time(NULL));   //�����������ӣ���ֹÿ���������һ����ʹ���������ʱ�䲻ͬ���仯

    int num = rand() % 100 + 1;   //��ʾ����0+1��99+1�������

    int flag = 0;
    while (1)
    {
        cout << "������²���" << endl;

        cin >> flag;

        if (flag > num)
        {
            cout << "�²����" << endl;

        }

        else if (flag < num)
        {
            cout << "�²��С" << endl;


        }
        else
        {
            cout << "��ϲ���²���ȷ" << endl;
            break;
        }
    }
    system("pause");

    return 0;
}