#include <iostream>
using namespace std;

class Student//����ѧ����
{
private:
    long long id;//ѧ��
    double score;//�ɼ�
public:
    void max();//���Ҳ�����ɼ�����ߵ�ѧ�ŵĳ�Ա����
};

void Student::max()
{
    Student stu[5];
    Student* p = stu;//����һ��ָ������ָ�룬ָ��������Ԫ��
    double max_score = 0;
    long long max_id = 0;
    for (int i = 0; i < 5; i++)
    {
        //���������λѧ��ѧ�źͳɼ��Ķ�������
        cout << "�������" << i + 1 << "��ѧ����ѧ�źͳɼ���";
        cin >> (p + i)->id;
        cin >> (p + i)->score;
        //Ѱ����߳ɼ���
        if ((p + i)->score > max_score)
        {
            max_score = (p + i)->score;
            max_id = (p + i)->id;
        }
    }
    cout << "�ɼ�����ߵ�ѧ��Ϊ��" << max_id << endl;//���׼���д����߳ɼ��ߵ�ѧ��
}

int main()
{
    Student s;//����һ��ѧ����Ķ���
    s.max();//���ó�Ա����max()
    return 0;
}
