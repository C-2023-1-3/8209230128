#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char zifu;
    cout << "请输入一个字符：";
    cin >> zifu;
    if (islower(zifu))
    {
        zifu = toupper(zifu);
        cout << "大写字母为：" << zifu << endl;
    }
    else
    {
        int ascii = zifu + 1;
        cout << "后继字符的ASCII码值为：" << ascii << endl;
    }
    return 0;
}
