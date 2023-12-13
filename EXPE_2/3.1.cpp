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
	cout << "请输入两个整数:";
	cin >> m >> n;
	cout << endl;
	GY = MAX_GY(m, n);
	cout << "最小公因数为：" << GY << endl;
	return 0;
}
 