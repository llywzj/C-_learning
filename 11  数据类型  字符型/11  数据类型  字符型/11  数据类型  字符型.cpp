#include<iostream>
using namespace std;

; int main()
{
    //1.字符型变量创建方式
    char ch = 'avgb';
    cout << ch << endl;

    //2.字符型变量所占用的内存大小
    cout << "char字符型变量所占内存：" << sizeof(char) << endl;

    //3.字符型变量常见错误
    //char ch2 = "b";(用单引号)
    //char ch2 = 'avsdhdfyu'   【尽量用一个字母，不过我试了一下，可以最多用四个】
    
    //4.字符型变量对应的ASCII编码
    cout << (int)ch << endl;

    //a对应编码97
    //A对应编码65
    //依次加一

    system("pause");

    return 0;
}