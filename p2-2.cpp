#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << "/" << b << "="
         << a / b << "..." << a % b << endl;
    //获得舍去小数部分的商 获得余数
    
    system("pause");
    return 0;
}
