#include <iostream>

using namespace std;

int main()
{
    int age;            //存放年龄
    bool want_to_watch; //存放是否想要观看

    cout << "Your age: ";
    cin >> age; //输入用户年龄

    if (age < 0) //年龄输出错误
        cout << "Error!" << endl;
    
    else if (age < 18) //未满 18 周岁
        cout << "Not suitable for children!" << endl;
    //提示少儿不宜

    else //年满 18 周岁
    {
        cout << "Want to watch? (0/1): ";
        cin >> want_to_watch;

        if (want_to_watch)            //布尔型变量直接作为条件表达式
            cout << "******" << endl; //这里请自由发挥
        else
            cout << "Cancelled." << endl;
    }

    system("pause");
    return 0;
}
