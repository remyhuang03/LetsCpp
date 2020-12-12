#include <iostream>
using namespace std;
int a, b = 2;    //声明了 2 个 int 型变量，并将 b 的值赋为 2
double c = 3.14; //声明 double 型变量 c，并将它赋为 3
int main()
{
    a = 1;                             //将 a 的值赋为 1
    a += 3;                            //将 a 的值增加 3
    c /= 2;                            //将 c 除以 2 赋值
    b--;                               //将 b 的值减去 1
    cout << a << " " << b << " " << c; //输出 a,b,c（还没学）
    return 0;
}