#include<iostream>
using namespace std;

; int main()
{
   //可以无条件的跳转语句
    //语法：go to标记
    //如果标记的名称存在，执行到goto语句时，会跳转到标记位置
    //一般用纯大写的单词，如果不用也可

    cout << "1.XXX" << endl;
    cout << "2.XXX" << endl;
    goto  FLAG;
    cout << "3.XXX" << endl;
    cout << "4.XXX" << endl;
   FLAG:
    cout << "5.XXX" << endl;


    system("pause");

    return 0;
}