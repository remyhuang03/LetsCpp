#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = rand() % 10 + 1;
    int ans;

    do
    {
        cout << "Guess the number: ";
        cin >> ans;
        
        if (ans > n)
            cout << "Too large!" << endl;
        else if (ans < n)
            cout << "Too small!" << endl;
    } while (ans != n);
   
    cout << "U GOT IT!!" << endl;

    system("pause");
    return 0;
}