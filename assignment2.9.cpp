#include <iostream>
using namespace std;

int main()
{
    double p = 0.8;
    int n = 2;
    int N = 2;
    double all = p * 2;
    int d = 1;
    while (true)
    {
        n = n * 2;
        if (n > 100)
        {
            break;
        }
        N += n;
        all += p * n;
        d++;
    }
    double average = all / d;
    cout << "总共买了 " << N << " 个苹果，花了 " << all << " 元，平均每天花了 " << average << " 元" << endl;
    return 0;
}
