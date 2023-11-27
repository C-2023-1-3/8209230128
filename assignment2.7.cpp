#include <iostream>
using namespace std;

int main()
{
	const int N = 6;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}