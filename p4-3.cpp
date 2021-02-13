#include <iostream>
#include <cstdlib>

using namespace std;

//n为天数，sum为总出现次数
int n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) //输入接下来的n行
    {
        for (int j = 1; j <= i; j++) //第i行输出j个@
            cout << "@";//注意@作字符串，要使用引号引起
        cout << endl; //换行
    }

    system("pause");
    return 0;
}
