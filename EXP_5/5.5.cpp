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
    cout << "��ʼ���������ֵΪ��";
    p.display();
    p.setPoint(10, 20);
    cout << "�޸ĺ������ֵΪ��";
    p.display();
    return 0;
}
