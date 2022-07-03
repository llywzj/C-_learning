#include<iostream>
using namespace std;

; int main()
{
    //一个数组中记录了五只猪的体重，打印最重的猪体重
    int arr[5] = { 300,350,200,400,250 };
    int max = 0;

    for (int num = 1; num < 6; num++)
    {

        if (max < arr[num])
        {
            max = arr[num];
        }
        else
        {
            continue;
        }
    }
    cout << "最重的小猪体重为：" << max << endl;


    system("pause");

    return 0;
}