#include<iostream>
using namespace std;

; int main()
{
    //1.前置递增
    int a = 10;
    ++a;  //让变量加一
    cout << "a = " << a << endl;

    //2.后置递增 
    int b = 10;
    b++;  //让变量加一
    cout << "b = " << b << endl;

    //3.前置与后置的区别
    //前置递增 先让变量加一，然后进行表达式运算
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;

    //后置递增 先进行表达式运算，然后让变量加一
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;   //在进行b的输出时，会先忽略++

    //递减把++改为--即可

    cout << "hello world" << endl;

    system("pause");

    return 0;
}