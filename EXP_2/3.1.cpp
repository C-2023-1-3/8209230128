#include<iostream>
using namespace std;

int MAX_GY(int m, int n)
{
	while (n > 0)
	{
		int r = m % n;
		m = n; n = r;
	};
	return m;
}
int main()
{
	int m, n, GY;
	cout << "��������������:";
	cin >> m >> n;
	cout << endl;
	GY = MAX_GY(m, n);
	cout << "��С������Ϊ��" << GY << endl;
	return 0;
}
 