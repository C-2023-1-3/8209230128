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
	cout << "������ʮ��˫�������֣�" << endl;
	for (int i = 0; i < listSize; i++)
	{
		cin >> list[i];
	}
	bubble(list, listSize);
	cout << "������ʮ����Ϊ��";
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}

