#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char ch;   //声明一个 char 型变量存字符
    cin >> ch; //输入字符
    ch -= 32;
    cout << ch << endl; //输出字符
    
    system("pause");
    return 0;
}
