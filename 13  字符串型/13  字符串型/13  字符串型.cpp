#include<iostream>
using namespace std;

; int main()
{
    //【C语言风格字符串】字符串语法： char 变量名[] = "字符串值"
    //注意事项 char 字符串名 []    (要加中括号)
    //注意事项2  等号后面  要用双引号  把字符包起来
    char str[] = "hello";
    cout << str << endl;
    
    //【C++语言风格字符串】string  变量名
    string str2 = "hello";
    cout << str2 << endl;
    //课程中提到如果要使用C++风格的字符串，需要在第三行处加一个#include<string> （这个被老师叫做头文件）   但是 我发现不加也没有报错

    system("pause");

    return 0;
}