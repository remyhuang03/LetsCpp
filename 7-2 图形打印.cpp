#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) //i控制行数
    {
        //每一行由空格和星星组成，空格的个数与行数i有关系
        for (int j = 1; j < i; j++) //控制每行的空格数，j<i相当于j<=i-1
            cout << "  ";
        for (int j = 1; j <= n; j++) //控制每行的星号数
            cout << "* ";
        //注意这里前后的两个变量j作用域不同。

        cout << endl;
    }

    return 0;
}