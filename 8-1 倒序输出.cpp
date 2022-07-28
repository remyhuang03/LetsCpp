#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //声明数组a，长度为101，下标范围为0~100
    int a[101];

    //变量n用于记录输入的次数
    int n;
    cin >> n;

    //循环n次输入数据
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    //倒序输出数据
    for (int i = n; i >= 1; i--)
        cout << a[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}

