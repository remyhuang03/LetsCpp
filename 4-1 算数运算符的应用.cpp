#include <iostream>

using namespace std;

int seconds, mins; //声明整型变量秒、分钟

int main()
{
    cin >> seconds;
    mins = seconds / 60;
    //效果上是计算秒数除以 60 向下取整的结果，赋给分钟
    seconds = seconds % 60; //取模得到剩余秒数
    cout << mins << "mins "
         << seconds << "seconds" << endl;

    return 0;
}
