#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员改为私有的
	int hour;
	int minute;
	int sec;
public: // 成员函数为公用的
	void set_time(void); // 声明输入时间的成员函数
	void show_time(void); // 声明输出时间的成员函数
	void set_time(void) // 在类体内定义成员函数
	{
		cin >> hour; // 从标准输入读取hour的值
		cin >> minute; // 从标准输入读取minute的值
		cin >> sec; // 从标准输入读取sec的值
	}

	void show_time(void) // 在类体内定义成员函数
	{
		cout << hour << ":" << minute << ":" << sec << endl; // 向标准输出写入时间的值
	}
};
int main()
{
	Time t; // 定义Time类的对象t
	t.set_time(); // 调用成员函数set_time()
	t.show_time(); // 调用成员函数show_time()
	return 0;
}

//以下是问题的回答
//1.成员函数的定义和声明应该是公有的；
//2.数据成员应该是私有的；
//3 4.相对较简单的函数应该放在类里定义，而相对复杂的函数放在类外面定义。