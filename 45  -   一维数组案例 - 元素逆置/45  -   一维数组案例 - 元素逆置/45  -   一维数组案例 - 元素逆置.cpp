#include<iostream>
using namespace std;

; int main()
{
    //��һ�������ڵ�Ԫ����β����
    int arr[] = { 1,3,2,5,4 };

        cout << "��������ǰ" << endl;
   
    for (int i = 0; i < 5; i++)
    {
        if (i<4)
        {
            cout << arr[i] ;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
    cout << "�������ú�" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
    system("pause");

    return 0;
}