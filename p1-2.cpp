#include <iostream>
#include <cstdlib>

using namespace std;

int a = 12, b = 24; //主函数外部声明变量（它们其实是全局变量）

int main()
{
    a /= 2;
    b++;
    int c; //内部声明变量（是局部变量）
    c = a * b;
    cout << "c = " << c << endl;
    //第一处为字符串，第二处为变量
    system("pause");
    return 0;
}
