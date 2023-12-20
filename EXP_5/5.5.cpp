#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    Point(int a = 60, int b = 80);
    void setPoint(int i, int j);
    void display();
};

Point::Point(int a, int b)
{
    x = a;
    y = b;
}

void Point::setPoint(int i, int j)
{
    x = x + i;
    y = y + j;
}

void Point::display()
{
    cout << "(" << x << "," << y << ")" << endl;
}

int main()
{
    Point p;
    cout << "初始化后的坐标值为：";
    p.display();
    p.setPoint(10, 20);
    cout << "修改后的坐标值为：";
    p.display();
    return 0;
}
