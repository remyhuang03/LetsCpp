#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double t=120,s=0;  //时间增量（分钟），总用时（分钟）
    int n=0;  //次数

    while(s<5*60) //在s没有达到5h时
    {
        s+=t;
        t*=2.0/3;  //注意这里的3.0，用于隐式类型转换
        n+=1;
    }

    cout<<n<<endl;

    system("pause");
    return 0;
}
