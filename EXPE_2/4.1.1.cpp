#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int done[10] = { 0 };//������������и����Ƿ��������
	cout << "Enter ten numbers:";
	//��ѭ������ʮ�����������������У�
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
			for (int j = i + 1; j < 10; j++)//���������ظ��������Ϊ�������
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

	