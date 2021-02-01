#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    double t=0;  //时间（分钟）
    int n=0;  //次数

    while(t<4*60) //在t没有达到4h时
    {
        t+=2/3*t;
        n+=1;
    }

    cout<<n;
    
    system("pause");
    return 0;
}
