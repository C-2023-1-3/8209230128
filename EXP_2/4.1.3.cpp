#include<iostream>
using namespace std;
int main()
{
	//���岢��ʼ����������
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
	//������
	cout << "���п��ŵĹ��Ӻ���Ϊ��" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (guizi[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}