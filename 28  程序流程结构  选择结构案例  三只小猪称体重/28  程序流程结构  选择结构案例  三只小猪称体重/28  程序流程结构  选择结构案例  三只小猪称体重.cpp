#include<iostream>
using namespace std;

; int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "第一只猪的体重是：" << endl;
    cin >> a;
    cout << "第二只猪的体重是：" << endl;
    cin >> b;
    cout << "第三只猪的体重是：" << endl;
    cin >> c;

    if (a > b)
    {
     if (c > a)
    {
        cout << "第三只猪最重" << endl;
    }
     else 
     {
         cout << "第一只猪最重" << endl;
     }

    }
    else
    {
        if (c > b)
        {
            cout << "第三只猪最重" << endl;
        }
        else
        {
            cout << "第二只猪最重" << endl;
        }
    }
    //此代码均为李昕宇本人所写，不存在抄袭  /开心！


    system("pause");

    return 0;
}