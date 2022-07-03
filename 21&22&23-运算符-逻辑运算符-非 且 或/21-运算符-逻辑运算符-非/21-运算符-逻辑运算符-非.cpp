#include<iostream>
using namespace std;

; int main()
{
    // ！非   转换真假，取其逆命题
    int a1 = 10;   //C++中除了零均为真
    cout << !a1 << endl;
    cout << !!a1 << endl;  //两次取反

    // && 与  均为真才为真
    int a = 10;
    int b = 10;
    cout << (a&&b) << endl;

    a = 0;
    b = 10;
    cout << (a && b) << endl;

    //  || 或  均为假才为假
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