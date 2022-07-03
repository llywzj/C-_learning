#include<iostream>
using namespace std;

; int main()
{
    //在循环语句中，跳过目前正在经行的语句，进行下一次循环
    // break直接退出循环
    //continue语句

    for (int i = 0; i <= 100; i++)
    {
        //奇数输出，偶数不输出
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    system("pause");

    return 0;
}