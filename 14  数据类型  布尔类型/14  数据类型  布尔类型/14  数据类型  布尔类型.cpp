#include<iostream>
using namespace std;

; int main()
{
    //1.创建bool数据类型
    bool flag = true;  //代表真的
    cout << flag << endl;

    bool flags = false;  //代表假的
    cout << flags << endl;

    //本质上  1代表真  0代表假

    //2.查看bool类型所占内存空间

    cout << "bool类型所占用的内存空间为：" << sizeof(bool) << endl;

    cout << "hello world" << endl;

    system("pause");

    return 0;
}