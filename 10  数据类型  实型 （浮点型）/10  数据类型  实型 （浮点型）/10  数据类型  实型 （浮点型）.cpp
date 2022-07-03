#include<iostream>
using namespace std;

; int main()
{

    //1.单精度 float
    //2.双精度 double

    float f1 = 3.14f;
    //系统读取小数时自动默认双精度，加f就不会了
    cout << "f1 = "<< f1 << endl;

    double d1 = 3.14;
    cout << "d1 = " << d1 << endl;

    //当小数有效数字超过六位,系统会仅保留六位有效数字，修改这个标配的话，，，不会！！！

    //统计float和double占用的内存空间
    cout << "float占用的内存空间： " << sizeof(float) << endl;
    cout << "double占用的内存空间： " << sizeof(double) << endl;

    //科学计数法
    float f2 = 3e2; //3*10^2
    cout << "f2 = " << f2 << endl;

    float f3 = 3e-2; //3*0.1^2
    cout << "f3 = " << f3 << endl;

    system("pause");

    return 0;
}