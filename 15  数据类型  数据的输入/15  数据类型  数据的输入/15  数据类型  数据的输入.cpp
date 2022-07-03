#include<iostream>
using namespace std;

; int main()
{

    //1.整型
    int a = 0;
    cout << "请给整型变量a赋值：" << endl;
    cin >> a;
    cout << "a = " << a << endl;

    //2.浮点型（小数）
    float f = 3.14f;
    cout << "请给浮点型变量f赋值：" << endl;
    cin >> f;
    cout << "浮点型变量f = " <<f<< endl;

    //3.字符型
    char ch = 'm';
    cout << "请给字符型变量f赋值：" << endl;
    cin >> ch;
    cout << "字符型变量m = " << ch << endl;

    //4.字符串型
    string str = "hello";
    cout << "请给字符串 str赋值:" << endl;
    cin >> str;
    cout << "字符串str = " << str << endl;


    //5.布尔类型
    bool flag = false;
    cout << "请给布尔类型 flag赋值： " << endl;
    cin >> flag;   //布尔类型只要非零都是真
    cout << "布尔类型flag = " << flag << endl;

    cout << "hello world" << endl;

    system("pause");

    return 0;
}