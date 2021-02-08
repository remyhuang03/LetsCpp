#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b;

    c = sqrt(pow(a, 2) + pow(b, 2)); //勾股定理计算斜边长
    c = ceil(c);                     //向上取整。注意，不要把前面的 c=遗漏

    cout << c;

    return 0;
}
