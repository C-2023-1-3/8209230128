#include<iostream>

using namespace std;
void bubble(double list[],int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}

int main()
{
	const int listSize = 10;
	double list[listSize];
	cout << "请输入十个双精度数字：" << endl;
	for (int i = 0; i < listSize; i++)
	{
		cin >> list[i];
	}
	bubble(list, listSize);
	cout << "排序后的十个数为：";
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}

