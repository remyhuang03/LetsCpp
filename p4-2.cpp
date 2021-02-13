#include <iostream>
#include <cstdlib>

using namespace std;

//n为天数，sum为总出现次数
int a, n, sum;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) //输入接下来的n行
    {
        cin >> a; //用a临时记录第i天的出现数
        sum += a;
    }

    /*判断头还在不在，注意这里是两个int型作除法，
     要用1.0作显式的类型转换，不然结果是一个整数*/
    if (1.0 * sum / n < 3.5)
        cout << "yes";
    else
        cout << "no";

    system("pause");
    return 0;
}