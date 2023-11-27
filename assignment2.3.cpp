#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;
    if (a + b > c && a - b < c && b + c > a && b - c < a && c + a > b && c - a < b)
    {
        int C = a + b + c;
        cout << "三角形的周长为：" << C << endl;
        if (a == b || b == c || c == a)
        {
            cout << "该三角形是等腰三角形" << endl;
        }
        else
        {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else
    {
        cout << "无法构成三角形" << endl;
    }
    return 0;
}
