#include <iostream>
using namespace std;

int zdgys(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a + b;
}

int zxgbs(int a, int b)
{
    return a * b / zdgys(a, b);
}

int main()
{
    int a, b;

    cout << "请输入两个正整数：";
    cin >> a >> b;
    int y = zdgys(a, b);
    int x = zxgbs(a, b);
    cout << a << " 和 " << b << " 的最大公约数为：" << y << endl;
    cout << a << " 和 " << b << " 的最小公倍数为：" << x << endl;
    return 0;
}
