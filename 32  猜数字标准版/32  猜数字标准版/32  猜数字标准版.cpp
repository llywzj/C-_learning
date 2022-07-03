#include<iostream>
using namespace std;
#include <ctime>  //time系统头文件，使得随机数随时间不同而变化

; int main()
{
    srand((unsigned int)time(NULL));   //添加随机数种子，防止每次随机数都一样，使得随机数随时间不同而变化

    int num = rand() % 100 + 1;   //表示生成0+1到99+1的随机数

    int flag = 0;
    while (1)
    {
        cout << "请输入猜测数" << endl;

        cin >> flag;

        if (flag > num)
        {
            cout << "猜测过大" << endl;

        }

        else if (flag < num)
        {
            cout << "猜测过小" << endl;


        }
        else
        {
            cout << "恭喜，猜测正确" << endl;
            break;
        }
    }
    system("pause");

    return 0;
}