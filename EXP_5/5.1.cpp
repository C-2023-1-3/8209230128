#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�Ա��Ϊ˽�е�
	int hour;
	int minute;
	int sec;
public: // ��Ա����Ϊ���õ�
	void set_time(void); // ��������ʱ��ĳ�Ա����
	void show_time(void); // �������ʱ��ĳ�Ա����
	void set_time(void) // �������ڶ����Ա����
	{
		cin >> hour; // �ӱ�׼�����ȡhour��ֵ
		cin >> minute; // �ӱ�׼�����ȡminute��ֵ
		cin >> sec; // �ӱ�׼�����ȡsec��ֵ
	}

	void show_time(void) // �������ڶ����Ա����
	{
		cout << hour << ":" << minute << ":" << sec << endl; // ���׼���д��ʱ���ֵ
	}
};
int main()
{
	Time t; // ����Time��Ķ���t
	t.set_time(); // ���ó�Ա����set_time()
	t.show_time(); // ���ó�Ա����show_time()
	return 0;
}

//����������Ļش�
//1.��Ա�����Ķ��������Ӧ���ǹ��еģ�
//2.���ݳ�ԱӦ����˽�еģ�
//3 4.��Խϼ򵥵ĺ���Ӧ�÷������ﶨ�壬����Ը��ӵĺ������������涨�塣