#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, maxn;
    cin >> a >> b;
    maxn = a > b ? a : b;
    //a>b 如果成立，maxn 被赋为 a，否则赋为 b
    cout << maxn << endl;

    system("pause");
    return 0;
}