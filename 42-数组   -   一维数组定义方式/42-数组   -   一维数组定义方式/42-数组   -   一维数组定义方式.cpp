#include<iostream>
using namespace std;

; int main()
{
    //数组就是一个集合，里面放了相同类型的数据类型
    //特点1.数组中的每个数据元素都是相同的数据类型
    //数组是由连续的内存位置组成的

    //一维数组的三种定义方式
    // 1.数组类型，数组名，[数组长度]
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    //访问数据元素
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    // 2.数据类型，数组名，[数组长度]={值一，值2...}
    int arr2[5] = { 10,20,30,40,50 };
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    //如果初始的五个值没有全部输入，会用零填补位置
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    // 3.数据类型，数组名[  ]={值1，值2...}
    int arr3[] = { 90,80,70,60,50,40,30,20,10 };
    for (int j = 0; j < 9; j++)
    {
        cout << arr3[j] << endl;
    }
    //(数组英文：array  *-* )


    system("pause");

    return 0;
}