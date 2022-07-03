#include<iostream>
using namespace std;

; int main()
{
    int a = 1;
    int b = 1;

    while (a < 10)
    {

        if (a == b)
        {
            cout << b << "*" << a << "=" << a * b << endl;
            a++;
            b = 1;
        }
        else
        {
            if (a > b )
            {
                cout << b << "*" << a << "=" << a * b << "\t";
                b++;
            }
            else
            {
            
                //cout << b << "*" << a << "=" << a * b << "\t";
       
            }

           
        }
    }
    system("pause");

    return 0;
}