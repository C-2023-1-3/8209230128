#include<iostream>
#include<istream>
using namespace std;

const char l[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };//����ȫ���ַ���
void count(char s[],int counts[]);//����������


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
	//���Ƚ������ַ���ΪСд��
	for (int i = 0; s[i] != '\0'; i++)
	{
		s[i] = tolower(s[i]);
	}
	//������ʮ������ĸ������ͳ�����ּ�¼��������
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



