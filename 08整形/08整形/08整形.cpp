#include<iostream>
using namespace std;

; int main()
{
    //整形
    //短整型
    short num1 = 10;
    //整形
    int num2 = 11;
    //长整型
    long num3 = 12;
    //长长整形
    long long num4 = 13;

    //如果输入的数字超出能表示的范围，那么会从能表示的最小数字开始循环（表示范围见截屏）

    cout << "num1:" << num1 << endl;
    cout << "num2:" << num2 << endl;
    cout << "num3:" << num3 << endl;
    cout << "num4:" << num4 << endl;

    system("pause");

    return 0;
}