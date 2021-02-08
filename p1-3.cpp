#include <iostream>
#include <cstdlib>

using namespace std;

double x; //输入小数，声明为 double 类型

int main()
{
    cin >> x;                  //输入 x
    cout << 0.4 * x + 6 << " " //注意这里要加空格
         << 0.75 * x << endl;

    system("pause");
    return 0;
}
