#include <iostream>
using namespace std;

class Cube // ����������
{
private:
    double length; // ��
    double width; // ��
    double height; // ��
public:
    void set_cube(); // ���볤�����ĳ������ߵĳ�Ա����
    double volume_cube(); // ���㳤����������ĳ�Ա����
    void show_cube(); // ���������������ĳ�Ա����
};

void Cube::set_cube() // �����ⶨ���Ա����
{
    cout << "�����볤�����ĳ������ߣ�";
    cin >> length; // �ӱ�׼�����ȡlength��ֵ
    cin >> width; // �ӱ�׼�����ȡwidth��ֵ
    cin >> height; // �ӱ�׼�����ȡheight��ֵ
}

double Cube::volume_cube() // �����ⶨ���Ա����
{
    return length * width * height; // ���㲢���س����������
}

void Cube::show_cube() // �����ⶨ���Ա����
{
    cout << "�����������Ϊ��" << volume_cube() << endl; // ����volume_cube���������׼���д�볤���������
}

int main()
{
    Cube cube[3]; // ����������������Ķ���
    for (int i = 0; i < 3; i++) // ѭ������
    {
        cube[i].set_cube(); // ����set_cube����
        cube[i].show_cube(); // ����show_cube����
    }
    return 0;
}
