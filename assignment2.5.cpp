#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "请输入一行字符：";
    cin.getline(str, 100);
    int alpha = 0, space = 0, digit = 0, other = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(str[i])) 
        {
            alpha++;
        }
        else if (isspace(str[i])) 
        {
            space++;
        }
        else if (isdigit(str[i])) 
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    cout << "英文字母的个数为：" << alpha << endl;
    cout << "空格的个数为：" << space << endl;
    cout << "数字字符的个数为：" << digit << endl;
    cout << "其它字符的个数为：" << other << endl;
    return 0;
}

