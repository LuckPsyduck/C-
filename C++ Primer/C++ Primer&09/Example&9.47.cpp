#include<iostream>
#include<vector>
#include<string>
using namespace std;
void find_char(string &s, const string &chars)
{
	cout << "��" << s << "�в���" << chars << "���ַ�" << endl;
	string::size_type pos = 0;
	while ((pos = s.find_first_of(chars, pos)) != string::npos)
	{
		cout << "pos:" << pos << ",char: " << s[pos] << endl;
		pos++;
	}
}
int main()
{
	string s = "ab2c3d7r4e6";
	cout << "digital\n";
	find_char(s, "0123456789");
	cout << endl << "alphat\n";
	find_char(s, "abcdefghijklmnopqrstuvwsyz"\
		"QWERTYUIOPASDFGHJKLZXCVBNM");
		return 0;
}