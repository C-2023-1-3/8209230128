#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int done[10] = { 0 };//用来标记数组中该数是否被输出过；
	cout << "Enter ten numbers:";
	//用循环输入十个数，储存在数组中；
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << "The distinct numbers are:";
	for (int i = 0;i<10; i++)
	{
		if (done[i] == 0)
		{
			cout << num[i] << " ";
			done[i] = 1;
			for (int j = i + 1; j < 10; j++)//将数组中重复的数标记为输出过；
			{
				if (num[j] == num[i])
				{
					done[j] = 1;
				}
			}
		}
	}
	return 0;
}

	