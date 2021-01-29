#include<iostream>
#include<cstdlib>

using namespace std;

int a=1;//声明全局变量a

int main()
{
    cout<<a<<endl;
    if(true)
    {
        int a=2;//声明局部变量a，这两个变量a不同
        cout<<a<<endl;
    }
    cout<<a<<endl;

    system("pause");
    return 0;
}