#include <iostream>

using namespace std;

char op;
double a, b, ans;
bool available = true;

int main()
{
    cin >> a >> op >> b;
    switch (op) //op 作为整型表达式
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        if (b == 0) //判断除数是否为 0
        {
            cout << "Math Error!" << endl;
            available = false;
        }
        else
            ans = a / b;
        break;
    default:
        cout << "Operator Error!" << endl;
        available = false;
    }

    if (available)
        cout << a << op << b << "=" << ans << endl;

    return 0;
}
