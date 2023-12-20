#include <iostream>
using namespace std;

class Cube // 定义柱体类
{
private:
    double length; // 长
    double width; // 宽
    double height; // 高
public:
    void set_cube(); // 输入长方柱的长、宽、高的成员函数
    double volume_cube(); // 计算长方柱的体积的成员函数
    void show_cube(); // 输出长方柱的体积的成员函数
};

void Cube::set_cube() // 在类外定义成员函数
{
    cout << "请输入长方柱的长、宽、高：";
    cin >> length; // 从标准输入读取length的值
    cin >> width; // 从标准输入读取width的值
    cin >> height; // 从标准输入读取height的值
}

double Cube::volume_cube() // 在类外定义成员函数
{
    return length * width * height; // 计算并返回长方柱的体积
}

void Cube::show_cube() // 在类外定义成员函数
{
    cout << "长方柱的体积为：" << volume_cube() << endl; // 调用volume_cube函数并向标准输出写入长方柱的体积
}

int main()
{
    Cube cube[3]; // 定义三个长方柱类的对象
    for (int i = 0; i < 3; i++) // 循环三次
    {
        cube[i].set_cube(); // 调用set_cube函数
        cube[i].show_cube(); // 调用show_cube函数
    }
    return 0;
}
