#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	cout << "�����������ַ�����\n";
	cin >> str1 >> str2;
	if (str1 > str2)
		cout << "big\n";
	else if (str1 < str2)
		cout << "less\n";
	else
		cout << "equal\n";
	return 0;
}