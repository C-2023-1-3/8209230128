#include <iostream>
#include"student.h"          //��Ҫ©д���У��������ͨ����
void Student::display()      //�����ⶨ��display�ຯ��
{
    using namespace std;
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value()
{
    using namespace std;
    //ѧ������ģ�飻
    cout << "������ѧ�ţ�";
    while (!(cin >> num))//ֻ������ȷ������
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "�����������������" << endl;
    }
    cin.get();

    //��������ģ�飻
    cout << "������������";
    cin.getline(name, 20);

    //�Ա�����ģ�飻
    cout << "�������Ա�(m���С�or f��Ů��)��";
    cin >> sex;
    while (!(sex == 'm'||sex == 'f')){
        cout << "���������������ʾ���룺\n";
        cin >> sex;
    }  
}
