#include<iostream>
using namespace std;

int main()
{
	int num = 1;
	int day = 10;
	while (day != 1)
	{
		num = (num + 1) * 2;
		day--;
	}
	cout << num;
	return 0;
}