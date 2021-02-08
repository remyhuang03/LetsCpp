#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int lv;
    cin >> lv;
    if (lv > 15)
        cout << "%%%%tql" << endl;
    else
        cout << "你还有" << 16 - lv << "就能成为大佬" << endl;
    system("pause");
    return 0;
}
