#include<iostream>
using namespace std;

; int main()
{
    //��õ������㷨����������Ԫ�ؽ�������
    //1.�Ƚ����ڵ�Ԫ�أ������һ���ȵڶ����󣬾ͽ�����������
    //2.��ÿһ�����ݽ���ͬ���Ĳ�����ִ����Ϻ��ҵ�һ�����ֵ
    //3.�ظ����ϵĲ��裬ÿ�αȽϴ�����һ��ֱ������Ҫ�Ƚ�
    //428057139
    int arr[] = { 4,2,8,0,5,7,1,3,9 };
    
    
    /*int temp = 0;                               ������������֮ǰ�Լ�д�ģ�Ȼ������������   ��
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

    cout << "����ǰ" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    //��ʼð������
    //�ܹ���������Ϊ  Ԫ�ظ�����һ
    for (int i = 0; i < 9 - 1; i++)
    {
        //�ڲ�ѭ���Ա�  ���� = Ԫ�ظ��� - ��ǰ���� - 1
        for (int j = 0; j < 9 - i - 1; j++)
        {
            //�����һ���ȵڶ����󣬾ͽ�����������
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "�����" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;


    system("pause");

    return 0;
}