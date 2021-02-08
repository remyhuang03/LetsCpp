#include <iostream>

using namespace std;

double m, h, bmi; //数据为小数，使用 double 型

int main()
{
    cin >> m >> h;
    bmi = m / (h * h); //算出 BMI 指数
    cout << bmi << endl;
    if (bmi < 18.5)
        cout << "过轻" << endl;
    if (bmi >= 18.5 && bmi < 24)
        cout << "正常";
    if (bmi >= 24 && bmi < 27.9)
        cout << "超重" << endl;
    if (bmi >= 27.9)
        cout << "肥胖" << endl;

    return 0;
}