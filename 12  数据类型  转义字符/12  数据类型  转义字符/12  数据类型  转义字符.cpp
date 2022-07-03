#include<iostream>
using namespace std;

; int main()
{
    //转义字符

    //换行符  \n
    
    cout << "hello world" << endl;
    cout << "hello world \n";

    //反斜杠  \\
    
    //cout << "\" << endl;(错误)
    cout << "\\" << endl;
    
    //水平制表符   \t

    cout << "aaa\thello\thi" << endl;
    //每一个\t都会让前面内容的占够八个位置


    system("pause");

    return 0;
}