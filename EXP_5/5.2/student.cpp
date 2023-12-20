#include <iostream>
#include"student.h"          //不要漏写此行，否则编译通不过
void Student::display()      //在类外定义display类函数
{
    using namespace std;
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value()
{
    using namespace std;
    //学号输入模块；
    cout << "请输入学号：";
    while (!(cin >> num))//只允许正确的输入
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "输入错误，请输入序列" << endl;
    }
    cin.get();

    //姓名输入模块；
    cout << "请输入姓名：";
    cin.getline(name, 20);

    //性别输入模块；
    cout << "请输入性别(m【男】or f【女】)：";
    cin >> sex;
    while (!(sex == 'm'||sex == 'f')){
        cout << "输入错误，请依照提示输入：\n";
        cin >> sex;
    }  
}
