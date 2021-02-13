#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //变量isPrime用于记录是否为质数，先默认是质数
    bool isPrime = true;

    for (int i = 2; i < n - 1; i++) //从2到n-1开始试除
    {
        if (n % i == 0)
        {
            isPrime = false;
            break; //发现不是质数，没有继续循环的意义了，跳出循环
        }
    }

    if (isPrime)     //将布尔变量直接作为条件表达式
        cout << "Y"; //注意要用引号引起
    else
        cout << "N";

    system("pause");
    return 0;
}
