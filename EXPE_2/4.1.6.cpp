#include<iostream>
#include<istream>
using namespace std;

const char l[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };//定义全局字符表；
void count(char s[],int counts[]);//声明函数；


int main()
{
	char s[80];
	int counts[26] = { 0 };
	cout << "Enter a string: ";
	cin.getline(s,80);
	cout << endl;
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		cout << l[i] << ":" << counts[i] << " times" << endl;
	}
	return 0;
}
void count(char s[],int counts[])
{
	//首先将所有字符改为小写；
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = tolower(s[i]);
	}
	//遍历二十六个字母，并将统计数字记录在数组中
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == l[i])
			{
				counts[i]++;
			}
		}
	}
}



