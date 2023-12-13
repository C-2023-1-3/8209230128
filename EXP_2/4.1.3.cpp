#include<iostream>
using namespace std;
int main()
{
	//定义并初始化柜子数组
	bool guizi[100];
	for (int i = 0; i < 100; i++)
	{
		guizi[i] = false;
	}
	
	for (int i = 1; i < 101; i++)
	{
		for (int j = i - 1; j < 100; j += i)
		{
			guizi[j] = !guizi[j];
		}
	}
	//输出结果
	cout << "所有开着的柜子号码为：" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (guizi[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}