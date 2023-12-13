#include<iostream>
using namespace std;

int indexOf(char s1[], char s2[]);

int main()
{
	char s1[100], s2[101];
	int re;
	cout << "Enter the first string:";
	cin.getline(s1, 100);
	cout << endl;
	cout << "Enter the second string: ";
	cin.getline(s2, 101);
	cout << endl;
	re = indexOf(s1,s2);
	cout << "indexOf( \""<<s1<<"\",\""<<s2<<"\") is " << re << endl;
	return 0;
}
int indexOf(char s1[], char s2[])
{
	if (strlen(s1) < strlen(s2)) {
		for (int i = 0; i < (strlen(s2) - strlen(s1)); i++) {
			int j = 0;
			while (s1[j] == s2[i + j])
			{
				j++;
			}
			if ((s1[j] != '\0'))
				continue;
			else
				return i;
		}
	}
	else
	{
		return -1;
	}
}
