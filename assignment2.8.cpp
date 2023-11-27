#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cout << "请输入一个正数：" << endl;
    cin >> a;


    double x = a;
    double e = 1e-5;
    int n = 0;
    while (true)
    {
        double x_next = (x + a / x) / 2;

        if (abs(x_next - x) < e)
        {
            break;
        }

        x = x_next;

        n++;
    }

    cout << a<<"的平方根是:" << x  << endl;
    return 0;
}
