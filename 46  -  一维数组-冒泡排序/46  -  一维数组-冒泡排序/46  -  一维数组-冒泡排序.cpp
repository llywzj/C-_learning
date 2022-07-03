#include<iostream>
using namespace std;

; int main()
{
    //最常用的排序算法，对数组内元素进行排序
    //1.比较相邻的元素，如果第一个比第二个大，就交换他们两个
    //2.对每一对数据进行同样的操作，执行完毕后，找到一个最大值
    //3.重复以上的步骤，每次比较次数减一，直到不需要比较
    //428057139
    int arr[] = { 4,2,8,0,5,7,1,3,9 };
    
    
    /*int temp = 0;                               以下是我听课之前自己写的，然而并不能运行   尬
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8 - i;j++)

        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
            
        }

    }
    cout << arr << endl;*/

    cout << "排序前" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    //开始冒泡排序
    //总共排序轮数为  元素个数减一
    for (int i = 0; i < 9 - 1; i++)
    {
        //内层循环对比  次数 = 元素个数 - 当前轮数 - 1
        for (int j = 0; j < 9 - i - 1; j++)
        {
            //如果第一个比第二个大，就交换他们两个
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "排序后" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;


    system("pause");

    return 0;
}