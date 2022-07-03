#include<iostream>
using namespace std;

//常量的定义方式
//1.#define 宏常量
//2.consts修饰的变量
//【宏常量一般写在上方】

//1.#define 宏常量
#define Day 7

; int main()
{
    cout << "一周总共有：" << Day << "天" << endl;

    //2.consts修饰的变量
    int month = 12;
    //此处的Day，和month 均不可修改
    cout << "一年总共有：" << month << "月" << endl;

    system("pause");

    return 0;
}