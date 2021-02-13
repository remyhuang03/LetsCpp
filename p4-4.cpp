#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, c, n;
    a = 1;
    b = 1; //a,b初始值赋为数列的第1、2项

    cin >> n;

    /*c储存第i项，每个数都等于前面 2个数之和
      注意临时变量c起到的交换作用*/
    for (int i = 3; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }
    
    cout << b;

    system("pause");
    return 0;
}