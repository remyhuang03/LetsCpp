#include <iostream>
#include <cstdlib>
#include <cmath> //使用 pow()函数，需要包含 cmath

using namespace std;

int main()
{
    const double pi = 3.14;
    double r, c, s;
    cin >> r;
    c = 2 * pi * r;
    s = pi * pow(r, 2); //也可以写成 pi*r*r
    cout << round(c * 10) / 10 << endl
         << round(s * 10) / 10 << endl;
    
    system("pause");
    return 0;
}