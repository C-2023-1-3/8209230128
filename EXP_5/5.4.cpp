#include <iostream>
using namespace std;

class Student//定义学生类
{
private:
    long long id;//学号
    double score;//成绩
public:
    void max();//查找并输出成绩最高者的学号的成员函数
};

void Student::max()
{
    Student stu[5];
    Student* p = stu;//定义一个指向对象的指针，指向数组首元素
    double max_score = 0;
    long long max_id = 0;
    for (int i = 0; i < 5; i++)
    {
        //输入包含五位学生学号和成绩的对象数组
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：";
        cin >> (p + i)->id;
        cin >> (p + i)->score;
        //寻找最高成绩者
        if ((p + i)->score > max_score)
        {
            max_score = (p + i)->score;
            max_id = (p + i)->id;
        }
    }
    cout << "成绩最高者的学号为：" << max_id << endl;//向标准输出写入最高成绩者的学号
}

int main()
{
    Student s;//定义一个学生类的对象
    s.max();//调用成员函数max()
    return 0;
}
